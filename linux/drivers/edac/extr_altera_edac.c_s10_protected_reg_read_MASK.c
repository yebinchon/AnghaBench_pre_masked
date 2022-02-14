
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_smccc_res {scalar_t__ a0; scalar_t__ a1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long,int ,int ,int ,int ,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, unsigned int VAR_2,
      unsigned int *VAR_3)
{
 struct arm_smccc_res VAR_4;
 unsigned long VAR_5 = (unsigned long)VAR_1;

 FUNC_0(VAR_0, VAR_5 + VAR_2, 0, 0, 0,
        0, 0, 0, &VAR_4);

 *VAR_3 = (unsigned int)VAR_4.a1;

 return (int)VAR_4.a0;
}
