
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es2_ap_dev {int apb_log_dentry; int apb_log_task; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int,int ,struct es2_ap_dev*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,struct es2_ap_dev*,char*) ;

__attribute__((used)) static void FUNC_5(struct es2_ap_dev *VAR_2)
{
 if (!FUNC_1(VAR_2->apb_log_task))
  return;


 VAR_2->apb_log_task = FUNC_4(VAR_1, VAR_2, "apb_log");
 if (FUNC_0(VAR_2->apb_log_task))
  return;

 VAR_2->apb_log_dentry = FUNC_2("apb_log", 0444,
        FUNC_3(), VAR_2,
        &VAR_0);
}
