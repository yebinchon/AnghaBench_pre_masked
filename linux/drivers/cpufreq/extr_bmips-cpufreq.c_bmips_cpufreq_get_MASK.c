
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_2__ {int bmips_type; int clk_mult; } ;




 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 unsigned int FUNC_1 () ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_3)
{
 unsigned int VAR_4;
 uint32_t VAR_5;

 switch (VAR_2->bmips_type) {
 case 128:
 case 129:
  VAR_5 = FUNC_1();
  VAR_4 = ((VAR_5 >> VAR_1) & VAR_0);
  break;
 default:
  VAR_4 = 0;
 }

 return FUNC_0(VAR_2->clk_mult) / (1 << VAR_4);
}
