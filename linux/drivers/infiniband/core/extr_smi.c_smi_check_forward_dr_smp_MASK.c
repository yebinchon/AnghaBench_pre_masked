
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_smp {scalar_t__ dr_dlid; scalar_t__ dr_slid; int hop_cnt; int hop_ptr; } ;
typedef enum smi_forward_action { ____Placeholder_smi_forward_action } smi_forward_action ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int) ;
 int FUNC_1 (struct ib_smp*) ;

enum smi_forward_action FUNC_2(struct ib_smp *VAR_1)
{
 return FUNC_0(VAR_1->hop_ptr, VAR_1->hop_cnt,
       FUNC_1(VAR_1),
       VAR_1->dr_dlid == VAR_0,
       VAR_1->dr_slid == VAR_0);
}
