
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_scu {scalar_t__ rsrc_id; } ;
struct clk_hw {int dummy; } ;
struct arm_smccc_res {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,unsigned long,unsigned long,int ,int ,int ,int ,struct arm_smccc_res*) ;
 struct clk_scu* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_4, unsigned long VAR_5,
        unsigned long VAR_6)
{
 struct clk_scu *VAR_7 = FUNC_1(VAR_4);
 struct arm_smccc_res VAR_8;
 unsigned long VAR_9;

 if (VAR_7->rsrc_id == VAR_1)
  VAR_9 = 0;
 else
  return -VAR_0;


 FUNC_0(VAR_2, VAR_3,
        VAR_9, VAR_5, 0, 0, 0, 0, &VAR_8);

 return 0;
}
