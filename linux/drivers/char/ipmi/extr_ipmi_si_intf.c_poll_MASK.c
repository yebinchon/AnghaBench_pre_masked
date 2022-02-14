
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int run_to_completion; int si_lock; } ;


 int FUNC_0 (struct smi_info*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct smi_info *VAR_1 = VAR_0;
 unsigned long VAR_2 = 0;
 bool VAR_3 = VAR_1->run_to_completion;





 FUNC_3(10);
 if (!VAR_3)
  FUNC_1(&VAR_1->si_lock, VAR_2);
 FUNC_0(VAR_1, 10);
 if (!VAR_3)
  FUNC_2(&VAR_1->si_lock, VAR_2);
}
