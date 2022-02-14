
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend_parameters {int dummy; } ;
struct dvb_frontend {int dtv_property_cache; } ;
struct dtv_frontend_properties {int dummy; } ;
typedef int getp ;


 int FUNC_0 (struct dvb_frontend*,struct dtv_frontend_properties*,struct dvb_frontend_parameters*) ;
 int FUNC_1 (struct dtv_frontend_properties*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0,
       struct dvb_frontend_parameters *VAR_1)
{
 struct dtv_frontend_properties VAR_2;







 FUNC_1(&VAR_2, &VAR_0->dtv_property_cache, sizeof(VAR_2));

 return FUNC_0(VAR_0, &VAR_2, VAR_1);
}
