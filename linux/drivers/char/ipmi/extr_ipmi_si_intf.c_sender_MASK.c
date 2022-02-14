
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int si_lock; struct ipmi_smi_msg* waiting_msg; scalar_t__ run_to_completion; } ;
struct ipmi_smi_msg {int dummy; } ;


 int FUNC_0 (struct ipmi_smi_msg*) ;
 int FUNC_1 (struct smi_info*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(void *VAR_0,
     struct ipmi_smi_msg *VAR_1)
{
 struct smi_info *VAR_2 = VAR_0;
 unsigned long VAR_3;

 FUNC_2("Enqueue");

 if (VAR_2->run_to_completion) {




  VAR_2->waiting_msg = VAR_1;
  return;
 }

 FUNC_3(&VAR_2->si_lock, VAR_3);







 FUNC_0(VAR_2->waiting_msg);
 VAR_2->waiting_msg = VAR_1;
 FUNC_1(VAR_2);
 FUNC_4(&VAR_2->si_lock, VAR_3);
}
