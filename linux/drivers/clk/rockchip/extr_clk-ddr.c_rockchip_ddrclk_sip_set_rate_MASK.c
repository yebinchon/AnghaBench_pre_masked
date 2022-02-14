
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_ddrclk {int lock; } ;
struct clk_hw {int dummy; } ;
struct arm_smccc_res {int a0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long,int ,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 struct rockchip_ddrclk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_2, unsigned long VAR_3,
     unsigned long VAR_4)
{
 struct rockchip_ddrclk *VAR_5 = FUNC_3(VAR_2);
 unsigned long VAR_6;
 struct arm_smccc_res VAR_7;

 FUNC_1(VAR_5->lock, VAR_6);
 FUNC_0(VAR_1, VAR_3, 0,
        VAR_0,
        0, 0, 0, 0, &VAR_7);
 FUNC_2(VAR_5->lock, VAR_6);

 return VAR_7.a0;
}
