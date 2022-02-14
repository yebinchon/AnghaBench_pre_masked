
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;




 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_3,
      unsigned long VAR_4)
{
 u32 VAR_5;
 unsigned VAR_6;

 VAR_5 = FUNC_1(VAR_2->base + VAR_0);
 VAR_6 = VAR_5 & VAR_1;

 switch (VAR_6) {
 case 131:
  return 12000000;

 case 129:
  return 24000000;

 case 128:
  return 48000000;

 case 130:
  return 19200000;
 }

 FUNC_0();
 return VAR_4;
}
