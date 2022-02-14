
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_2__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_3__ {int uvalue; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0,
          u16 *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_0->dtv_property_cache;


 *VAR_1 = VAR_2->strength.stat[0].uvalue;

 return 0;
}
