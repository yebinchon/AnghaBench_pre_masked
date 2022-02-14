
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es2_ap_dev {int * apb_log_task; int * apb_log_dentry; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct es2_ap_dev *VAR_0)
{
 if (FUNC_0(VAR_0->apb_log_task))
  return;

 FUNC_1(VAR_0->apb_log_dentry);
 VAR_0->apb_log_dentry = ((void*)0);

 FUNC_2(VAR_0->apb_log_task);
 VAR_0->apb_log_task = ((void*)0);
}
