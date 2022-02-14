
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_smp {scalar_t__ dr_dlid; scalar_t__ dr_slid; int return_path; int initial_path; int hop_cnt; int hop_ptr; } ;
typedef enum smi_action { ____Placeholder_smi_action } smi_action ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int,int *,int ,int ,int ,int ,int,int) ;
 int FUNC_1 (struct ib_smp*) ;

enum smi_action FUNC_2(struct ib_smp *VAR_1, bool VAR_2,
           int VAR_3, int VAR_4)
{
 return FUNC_0(VAR_2, VAR_3, VAR_4,
     &VAR_1->hop_ptr, VAR_1->hop_cnt,
     VAR_1->initial_path,
     VAR_1->return_path,
     FUNC_1(VAR_1),
     VAR_1->dr_dlid == VAR_0,
     VAR_1->dr_slid == VAR_0);
}
