
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_smi {int * null_user_handler; int waitq; } ;
struct bmc_device {int dyn_id_set; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct ipmi_smi*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct ipmi_smi *VAR_2, struct bmc_device *VAR_3)
{
 int VAR_4;

 VAR_3->dyn_id_set = 2;

 VAR_2->null_user_handler = VAR_1;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_2->waitq, VAR_3->dyn_id_set != 2);

 if (!VAR_3->dyn_id_set)
  VAR_4 = -VAR_0;


 FUNC_1();

 VAR_2->null_user_handler = ((void*)0);

 return VAR_4;
}
