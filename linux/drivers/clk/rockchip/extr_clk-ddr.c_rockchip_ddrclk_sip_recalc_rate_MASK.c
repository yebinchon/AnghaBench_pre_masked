
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct arm_smccc_res {unsigned long a0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static unsigned long
FUNC_1(struct clk_hw *VAR_2,
    unsigned long VAR_3)
{
 struct arm_smccc_res VAR_4;

 FUNC_0(VAR_1, 0, 0,
        VAR_0,
        0, 0, 0, 0, &VAR_4);

 return VAR_4.a0;
}
