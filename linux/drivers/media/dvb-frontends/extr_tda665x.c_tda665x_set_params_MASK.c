
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;


 int FUNC_0 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct dtv_frontend_properties *VAR_1 = &VAR_0->dtv_property_cache;

 FUNC_0(VAR_0, VAR_1->frequency);

 return 0;
}
