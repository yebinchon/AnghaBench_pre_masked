
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct atlas7_reset_desc {int clk_bit; int rst_bit; int lock; scalar_t__ rst_ofs; scalar_t__ clk_ofs; } ;


 struct atlas7_reset_desc* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct reset_controller_dev *VAR_1,
     unsigned long VAR_2)
{
 struct atlas7_reset_desc *VAR_3 = &VAR_0[VAR_2];
 unsigned long VAR_4;
 FUNC_2(VAR_3->lock, VAR_4);

 if (FUNC_0(VAR_3->clk_ofs + 8) & (1 << VAR_3->clk_bit)) {
  FUNC_1(1 << VAR_3->rst_bit, VAR_3->rst_ofs + 4);
  FUNC_4(2);
  FUNC_1(1 << VAR_3->clk_bit, VAR_3->clk_ofs + 4);
  FUNC_1(1 << VAR_3->rst_bit, VAR_3->rst_ofs);

  FUNC_1(1 << VAR_3->clk_bit, VAR_3->clk_ofs);
 } else {
  FUNC_1(1 << VAR_3->rst_bit, VAR_3->rst_ofs + 4);
  FUNC_1(1 << VAR_3->clk_bit, VAR_3->clk_ofs);
  FUNC_4(2);
  FUNC_1(1 << VAR_3->clk_bit, VAR_3->clk_ofs + 4);
  FUNC_1(1 << VAR_3->rst_bit, VAR_3->rst_ofs);
 }
 FUNC_3(VAR_3->lock, VAR_4);

 return 0;
}
