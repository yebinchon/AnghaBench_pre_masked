
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct dtv_frontend_properties {int rolloff; int code_rate_LP; int code_rate_HP; int hierarchy; int modulation; int guard_interval; int transmission_mode; int inversion; } ;
struct dib9000_state {scalar_t__ get_frontend_internal; int demod_lock; TYPE_3__** fe; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_6__ {int rolloff; int code_rate_LP; int code_rate_HP; int hierarchy; int modulation; int guard_interval; int transmission_mode; int inversion; } ;
struct TYPE_5__ {int (* get_frontend ) (TYPE_3__*,struct dtv_frontend_properties*) ;int (* read_status ) (TYPE_3__*,int*) ;} ;
struct TYPE_7__ {TYPE_2__ dtv_property_cache; TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int*) ;
 int FUNC_5 (TYPE_3__*,struct dtv_frontend_properties*) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_3,
    struct dtv_frontend_properties *VAR_4)
{
 struct dib9000_state *VAR_5 = VAR_3->demodulator_priv;
 u8 VAR_6, VAR_7;
 enum fe_status VAR_8;
 int VAR_9 = 0;

 if (VAR_5->get_frontend_internal == 0) {
  if (FUNC_2(&VAR_5->demod_lock) < 0) {
   FUNC_1("could not get the lock\n");
   return -VAR_0;
  }
 }

 for (VAR_6 = 1; (VAR_6 < VAR_2) && (VAR_5->fe[VAR_6] != ((void*)0)); VAR_6++) {
  VAR_5->fe[VAR_6]->ops.read_status(VAR_5->fe[VAR_6], &VAR_8);
  if (VAR_8 & VAR_1) {
   FUNC_1("TPS lock on the slave%i\n", VAR_6);


   VAR_5->fe[VAR_6]->ops.get_frontend(VAR_5->fe[VAR_6], VAR_4);
   for (VAR_7 = 0; (VAR_7 < VAR_2) && (VAR_5->fe[VAR_7] != ((void*)0));
        VAR_7++) {
    if (VAR_7 != VAR_6) {
     VAR_5->fe[VAR_7]->dtv_property_cache.modulation =
         VAR_5->fe[VAR_6]->dtv_property_cache.modulation;
     VAR_5->fe[VAR_7]->dtv_property_cache.inversion =
         VAR_5->fe[VAR_6]->dtv_property_cache.inversion;
     VAR_5->fe[VAR_7]->dtv_property_cache.transmission_mode =
         VAR_5->fe[VAR_6]->dtv_property_cache.transmission_mode;
     VAR_5->fe[VAR_7]->dtv_property_cache.guard_interval =
         VAR_5->fe[VAR_6]->dtv_property_cache.guard_interval;
     VAR_5->fe[VAR_7]->dtv_property_cache.hierarchy =
         VAR_5->fe[VAR_6]->dtv_property_cache.hierarchy;
     VAR_5->fe[VAR_7]->dtv_property_cache.code_rate_HP =
         VAR_5->fe[VAR_6]->dtv_property_cache.code_rate_HP;
     VAR_5->fe[VAR_7]->dtv_property_cache.code_rate_LP =
         VAR_5->fe[VAR_6]->dtv_property_cache.code_rate_LP;
     VAR_5->fe[VAR_7]->dtv_property_cache.rolloff =
         VAR_5->fe[VAR_6]->dtv_property_cache.rolloff;
    }
   }
   VAR_9 = 0;
   goto return_value;
  }
 }


 VAR_9 = FUNC_0(VAR_3);
 if (VAR_9 != 0)
  goto return_value;


 for (VAR_6 = 1; (VAR_6 < VAR_2) && (VAR_5->fe[VAR_6] != ((void*)0)); VAR_6++) {
  VAR_5->fe[VAR_6]->dtv_property_cache.inversion = VAR_4->inversion;
  VAR_5->fe[VAR_6]->dtv_property_cache.transmission_mode = VAR_4->transmission_mode;
  VAR_5->fe[VAR_6]->dtv_property_cache.guard_interval = VAR_4->guard_interval;
  VAR_5->fe[VAR_6]->dtv_property_cache.modulation = VAR_4->modulation;
  VAR_5->fe[VAR_6]->dtv_property_cache.hierarchy = VAR_4->hierarchy;
  VAR_5->fe[VAR_6]->dtv_property_cache.code_rate_HP = VAR_4->code_rate_HP;
  VAR_5->fe[VAR_6]->dtv_property_cache.code_rate_LP = VAR_4->code_rate_LP;
  VAR_5->fe[VAR_6]->dtv_property_cache.rolloff = VAR_4->rolloff;
 }
 VAR_9 = 0;

return_value:
 if (VAR_5->get_frontend_internal == 0)
  FUNC_3(&VAR_5->demod_lock);
 return VAR_9;
}
