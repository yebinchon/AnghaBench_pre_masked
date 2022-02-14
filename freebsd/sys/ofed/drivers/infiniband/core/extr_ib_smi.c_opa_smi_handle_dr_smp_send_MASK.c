
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dr_dlid; scalar_t__ dr_slid; int return_path; int initial_path; } ;
struct TYPE_4__ {TYPE_1__ dr; } ;
struct opa_smp {TYPE_2__ route; int hop_cnt; int hop_ptr; } ;
typedef enum smi_action { ____Placeholder_smi_action } smi_action ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int *,int ,int ,int ,int ,int,int) ;
 int FUNC_1 (struct opa_smp*) ;

enum smi_action FUNC_2(struct opa_smp *VAR_1,
           bool VAR_2, int VAR_3)
{
 return FUNC_0(VAR_2, VAR_3,
     &VAR_1->hop_ptr, VAR_1->hop_cnt,
     VAR_1->route.dr.initial_path,
     VAR_1->route.dr.return_path,
     FUNC_1(VAR_1),
     VAR_1->route.dr.dr_dlid ==
     VAR_0,
     VAR_1->route.dr.dr_slid ==
     VAR_0);
}
