
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u16 ;
struct TYPE_4__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_2__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_3__ {scalar_t__ scale; int svalue; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1, u16 *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_1->dtv_property_cache;
 unsigned int VAR_4;

 if (VAR_3->strength.stat[0].scale == VAR_0) {
  VAR_4 = FUNC_1(VAR_3->strength.stat[0].svalue, 1000) + 256;
  VAR_4 = FUNC_0(VAR_4, 181U, 236U);

  *VAR_2 = (VAR_4-181) * 0xffff / (236-181);
 } else {
  *VAR_2 = 0;
 }
 return 0;
}
