
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mxl {TYPE_1__* base; int demod; } ;
struct TYPE_6__ {TYPE_2__* stat; } ;
struct dtv_frontend_properties {TYPE_3__ cnr; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct mxl* demodulator_priv; } ;
typedef int s16 ;
struct TYPE_5__ {int svalue; int scale; } ;
struct TYPE_4__ {int status_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxl*,int ) ;
 int FUNC_1 (struct mxl*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mxl*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_2)
{
 struct mxl *VAR_3 = VAR_2->demodulator_priv;
 int VAR_4;
 u32 VAR_5 = 0;
 struct dtv_frontend_properties *VAR_6 = &VAR_2->dtv_property_cache;

 FUNC_3(&VAR_3->base->status_lock);
 FUNC_0(VAR_3, VAR_3->demod);
 VAR_4 = FUNC_5(VAR_3, (VAR_1 +
         FUNC_2(VAR_3->demod)),
        &VAR_5);
 FUNC_1(VAR_3, VAR_3->demod);
 FUNC_4(&VAR_3->base->status_lock);

 VAR_6->cnr.stat[0].scale = VAR_0;
 VAR_6->cnr.stat[0].svalue = (s16)VAR_5 * 10;

 return VAR_4;
}
