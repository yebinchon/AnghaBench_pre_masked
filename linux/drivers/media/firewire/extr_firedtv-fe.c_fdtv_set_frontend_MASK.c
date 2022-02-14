
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int dummy; } ;
struct dtv_frontend_properties {int dummy; } ;
struct dvb_frontend {struct firedtv* sec_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 int FUNC_0 (struct firedtv*,struct dtv_frontend_properties*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct dtv_frontend_properties *VAR_1 = &VAR_0->dtv_property_cache;
 struct firedtv *VAR_2 = VAR_0->sec_priv;

 return FUNC_0(VAR_2, VAR_1);
}
