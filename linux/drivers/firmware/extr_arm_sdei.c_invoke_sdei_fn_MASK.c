
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct arm_smccc_res {int a0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,struct arm_smccc_res*) ;
 scalar_t__ FUNC_1 (struct arm_smccc_res*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_2, unsigned long VAR_3,
     unsigned long VAR_4, unsigned long VAR_5,
     unsigned long VAR_6, unsigned long VAR_7,
     u64 *VAR_8)
{
 int VAR_9 = 0;
 struct arm_smccc_res VAR_10;

 if (&FUNC_0) {
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
       &VAR_10);
  if (FUNC_1(&VAR_10))
   VAR_9 = FUNC_2(VAR_10.a0);
 } else {






  VAR_9 = -VAR_0;
  VAR_10.a0 = VAR_1;
 }

 if (VAR_8)
  *VAR_8 = VAR_10.a0;

 return VAR_9;
}
