
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int member_0; } ;
struct TYPE_7__ {TYPE_3__ member_0; } ;
struct vm_system_aperture_param {TYPE_2__ member_0; } ;
struct TYPE_10__ {int member_0; } ;
struct TYPE_9__ {TYPE_5__ member_0; } ;
struct vm_context0_param {TYPE_4__ member_0; } ;
struct hubp {TYPE_1__* funcs; } ;
struct dcn10_hubp {int dummy; } ;
struct dce_hwseq {int dummy; } ;
struct TYPE_6__ {int (* hubp_set_vm_context0_settings ) (struct hubp*,struct vm_context0_param*) ;int (* hubp_set_vm_system_aperture_settings ) (struct hubp*,struct vm_system_aperture_param*) ;} ;


 struct dcn10_hubp* FUNC_0 (struct hubp*) ;
 int FUNC_1 (struct dcn10_hubp*,struct vm_context0_param*,struct dce_hwseq*) ;
 int FUNC_2 (struct dcn10_hubp*,struct vm_system_aperture_param*,struct dce_hwseq*) ;
 int FUNC_3 (struct hubp*,struct vm_system_aperture_param*) ;
 int FUNC_4 (struct hubp*,struct vm_context0_param*) ;

void FUNC_5(struct dce_hwseq *VAR_0, struct hubp *VAR_1)
{
 struct dcn10_hubp *VAR_2 = FUNC_0(VAR_1);
 struct vm_system_aperture_param VAR_3 = { {{ 0 } } };
 struct vm_context0_param VAR_4 = { { { 0 } } };

 FUNC_2(VAR_2, &VAR_3, VAR_0);
 FUNC_1(VAR_2, &VAR_4, VAR_0);

 VAR_1->funcs->hubp_set_vm_system_aperture_settings(VAR_1, &VAR_3);
 VAR_1->funcs->hubp_set_vm_context0_settings(VAR_1, &VAR_4);
}
