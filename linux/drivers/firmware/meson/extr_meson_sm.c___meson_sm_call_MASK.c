
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arm_smccc_res {int a0; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3,
      u32 VAR_4, u32 VAR_5)
{
 struct arm_smccc_res VAR_6;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 0, 0, &VAR_6);
 return VAR_6.a0;
}
