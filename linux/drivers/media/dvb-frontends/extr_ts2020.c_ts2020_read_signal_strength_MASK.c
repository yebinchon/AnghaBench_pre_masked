
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u16 ;
struct TYPE_4__ {int work; } ;
struct ts2020_priv {TYPE_1__ stat_work; scalar_t__ dont_poll; } ;
struct TYPE_6__ {TYPE_2__* stat; } ;
struct dtv_frontend_properties {TYPE_3__ strength; } ;
struct dvb_frontend {struct ts2020_priv* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;
typedef int __s64 ;
struct TYPE_5__ {scalar_t__ scale; int svalue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1,
           u16 *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_1->dtv_property_cache;
 struct ts2020_priv *VAR_4 = VAR_1->tuner_priv;
 unsigned VAR_5;
 __s64 VAR_6;

 if (VAR_4->dont_poll)
  FUNC_1(&VAR_4->stat_work.work);

 if (VAR_3->strength.stat[0].scale == VAR_0) {
  *VAR_2 = 0;
  return 0;
 }

 VAR_6 = VAR_3->strength.stat[0].svalue;


 if (VAR_6 < -85000)

  VAR_5 = 0;
 else if (VAR_6 < -65000)

  VAR_5 = 0 + FUNC_0((85000 + VAR_6) * 3, 1000);
 else if (VAR_6 < -45000)

  VAR_5 = 60 + FUNC_0((65000 + VAR_6) * 3, 2000);
 else

  VAR_5 = 90 + FUNC_0((45000 + VAR_6), 5000);

 *VAR_2 = VAR_5 * 65535 / 100;
 return 0;
}
