
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int delivery_system; } ;
struct dvb_frontend {TYPE_1__ dtv_property_cache; } ;
struct dtv_frontend_properties {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct dvb_frontend*,struct dtv_frontend_properties*) ;
 int FUNC_1 (struct dvb_frontend*,struct dtv_frontend_properties*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1,
    struct dtv_frontend_properties *VAR_2)
{
 int VAR_3;

 if (!VAR_1 || !VAR_2) {
  FUNC_3("invalid arg.");
  return -VAR_0;
 }

 FUNC_2("system=%d\n", VAR_1->dtv_property_cache.delivery_system);
 switch (VAR_1->dtv_property_cache.delivery_system) {
 case 129:
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }

 return VAR_3;
}
