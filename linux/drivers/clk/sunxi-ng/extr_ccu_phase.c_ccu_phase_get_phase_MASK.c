
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ reg; scalar_t__ base; } ;
struct ccu_phase {int shift; int width; TYPE_1__ common; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 struct clk_hw* FUNC_1 (struct clk_hw*) ;
 unsigned int FUNC_2 (struct clk_hw*) ;
 struct ccu_phase* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1)
{
 struct ccu_phase *VAR_2 = FUNC_3(VAR_1);
 struct clk_hw *VAR_3, *VAR_4;
 unsigned int VAR_5, VAR_6;
 u16 VAR_7, VAR_8;
 u32 VAR_9;
 u8 VAR_10;

 VAR_9 = FUNC_4(VAR_2->common.base + VAR_2->common.reg);
 VAR_10 = (VAR_9 >> VAR_2->shift);
 VAR_10 &= (1 << VAR_2->width) - 1;

 if (!VAR_10)
  return 180;


 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  return -VAR_0;


 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  return -VAR_0;


 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)
  return -VAR_0;


 VAR_6 = FUNC_2(VAR_4);
 if (!VAR_6)
  return -VAR_0;


 VAR_8 = VAR_6 / VAR_5;

 VAR_7 = FUNC_0(360, VAR_8);
 return VAR_10 * VAR_7;
}
