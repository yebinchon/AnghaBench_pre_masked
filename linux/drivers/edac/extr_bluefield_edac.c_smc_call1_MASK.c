
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct arm_smccc_res {int a0; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static u64 FUNC_1(u64 VAR_0, u64 VAR_1)
{
 struct arm_smccc_res VAR_2;

 FUNC_0(VAR_0, VAR_1, 0, 0, 0, 0, 0, 0, &VAR_2);

 return VAR_2.a0;
}
