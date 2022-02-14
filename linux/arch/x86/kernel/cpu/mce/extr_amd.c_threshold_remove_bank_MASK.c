
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct threshold_bank {int kobj; int cpus; int blocks; } ;
struct amd_northbridge {int * bank4; } ;


 int FUNC_0 (struct threshold_bank*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct threshold_bank*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct amd_northbridge* FUNC_7 (int ) ;
 struct threshold_bank** FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_10(unsigned int VAR_1, int VAR_2)
{
 struct amd_northbridge *VAR_3;
 struct threshold_bank *VAR_4;

 VAR_4 = FUNC_8(VAR_0, VAR_1)[VAR_2];
 if (!VAR_4)
  return;

 if (!VAR_4->blocks)
  goto free_out;

 if (FUNC_3(VAR_2)) {
  if (!FUNC_9(&VAR_4->cpus)) {
   FUNC_0(VAR_4);
   FUNC_8(VAR_0, VAR_1)[VAR_2] = ((void*)0);
   return;
  } else {




   VAR_3 = FUNC_7(FUNC_1(VAR_1));
   VAR_3->bank4 = ((void*)0);
  }
 }

 FUNC_2(VAR_1, VAR_2);

free_out:
 FUNC_5(VAR_4->kobj);
 FUNC_6(VAR_4->kobj);
 FUNC_4(VAR_4);
 FUNC_8(VAR_0, VAR_1)[VAR_2] = ((void*)0);
}
