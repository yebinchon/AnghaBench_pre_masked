
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_smi {int * null_user_handler; int waitq; struct bmc_device* bmc; } ;
struct bmc_device {int dyn_guid_set; } ;


 int * VAR_0 ;
 int FUNC_0 (struct ipmi_smi*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct ipmi_smi *VAR_1)
{
 int VAR_2;
 struct bmc_device *VAR_3 = VAR_1->bmc;

 VAR_3->dyn_guid_set = 2;
 VAR_1->null_user_handler = VAR_0;
 VAR_2 = FUNC_0(VAR_1, 0);
 if (VAR_2)

  VAR_3->dyn_guid_set = 0;

 FUNC_2(VAR_1->waitq, VAR_3->dyn_guid_set != 2);


 FUNC_1();

 VAR_1->null_user_handler = ((void*)0);
}
