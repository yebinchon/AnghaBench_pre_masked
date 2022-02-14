
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mn88443x_priv {int dummy; } ;
struct dtv_frontend_properties {scalar_t__ delivery_system; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct mn88443x_priv* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mn88443x_priv*,struct dtv_frontend_properties*,int*) ;
 int FUNC_1 (struct mn88443x_priv*,struct dtv_frontend_properties*,int*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3, enum fe_status *VAR_4)
{
 struct mn88443x_priv *VAR_5 = VAR_3->demodulator_priv;
 struct dtv_frontend_properties *VAR_6 = &VAR_3->dtv_property_cache;

 if (VAR_6->delivery_system == VAR_1)
  return FUNC_0(VAR_5, VAR_6, VAR_4);

 if (VAR_6->delivery_system == VAR_2)
  return FUNC_1(VAR_5, VAR_6, VAR_4);

 return -VAR_0;
}
