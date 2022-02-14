
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_mmc {int clken_bit; int clken_reg; int div_reg; int div_bits; int div_off; int drv_reg; int drv_bits; int drv_off; int sam_reg; int sam_bits; int sam_off; } ;
struct clk_hw {int dummy; } ;
typedef int DEFINE_SPINLOCK ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct clk_mmc* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_1, unsigned long VAR_2)
{
 struct clk_mmc *VAR_3 = FUNC_4(VAR_1);
 unsigned long VAR_4;
 u32 VAR_5, VAR_6, VAR_7, VAR_8;
 static DEFINE_SPINLOCK(VAR_9);

 switch (VAR_2) {
 case 13000000:
  VAR_5 = 3;
  VAR_6 = 1;
  VAR_7 = 1;
  break;
 case 25000000:
  VAR_5 = 13;
  VAR_6 = 6;
  VAR_7 = 6;
  break;
 case 50000000:
  VAR_5 = 3;
  VAR_6 = 6;
  VAR_7 = 6;
  break;
 case 100000000:
  VAR_5 = 6;
  VAR_6 = 4;
  VAR_7 = 6;
  break;
 case 180000000:
  VAR_5 = 6;
  VAR_6 = 4;
  VAR_7 = 7;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(&VAR_9, VAR_4);

 VAR_8 = FUNC_1(VAR_3->clken_reg);
 VAR_8 &= ~(1 << VAR_3->clken_bit);
 FUNC_5(VAR_8, VAR_3->clken_reg);

 VAR_8 = FUNC_1(VAR_3->sam_reg);
 VAR_8 = FUNC_0(VAR_8, VAR_5, VAR_3->sam_off, VAR_3->sam_bits);
 FUNC_5(VAR_8, VAR_3->sam_reg);

 VAR_8 = FUNC_1(VAR_3->drv_reg);
 VAR_8 = FUNC_0(VAR_8, VAR_6, VAR_3->drv_off, VAR_3->drv_bits);
 FUNC_5(VAR_8, VAR_3->drv_reg);

 VAR_8 = FUNC_1(VAR_3->div_reg);
 VAR_8 = FUNC_0(VAR_8, VAR_7, VAR_3->div_off, VAR_3->div_bits);
 FUNC_5(VAR_8, VAR_3->div_reg);

 VAR_8 = FUNC_1(VAR_3->clken_reg);
 VAR_8 |= 1 << VAR_3->clken_bit;
 FUNC_5(VAR_8, VAR_3->clken_reg);

 FUNC_3(&VAR_9, VAR_4);

 return 0;
}
