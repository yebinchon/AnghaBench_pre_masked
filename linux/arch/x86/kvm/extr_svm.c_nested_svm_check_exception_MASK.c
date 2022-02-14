
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_13__ {int exit_required; } ;
struct TYPE_9__ {int payload; scalar_t__ has_payload; scalar_t__ nested_apf; } ;
struct TYPE_8__ {int nested_apf_token; } ;
struct TYPE_12__ {int cr2; TYPE_2__ exception; TYPE_1__ apf; } ;
struct TYPE_14__ {TYPE_5__ arch; } ;
struct vcpu_svm {TYPE_6__ nested; TYPE_7__ vcpu; TYPE_4__* vmcb; } ;
struct TYPE_10__ {unsigned int exit_code; int exit_info_2; int exit_info_1; scalar_t__ exit_code_hi; } ;
struct TYPE_11__ {TYPE_3__ control; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (struct vcpu_svm*) ;

__attribute__((used)) static int FUNC_2(struct vcpu_svm *VAR_2, unsigned VAR_3,
          bool VAR_4, u32 VAR_5)
{
 int VAR_6;

 if (!FUNC_0(&VAR_2->vcpu))
  return 0;

 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 != VAR_0)
  return 0;

 VAR_2->vmcb->control.exit_code = VAR_1 + VAR_3;
 VAR_2->vmcb->control.exit_code_hi = 0;
 VAR_2->vmcb->control.exit_info_1 = VAR_5;





 if (VAR_2->vcpu.arch.exception.nested_apf)
  VAR_2->vmcb->control.exit_info_2 = VAR_2->vcpu.arch.apf.nested_apf_token;
 else if (VAR_2->vcpu.arch.exception.has_payload)
  VAR_2->vmcb->control.exit_info_2 = VAR_2->vcpu.arch.exception.payload;
 else
  VAR_2->vmcb->control.exit_info_2 = VAR_2->vcpu.arch.cr2;

 VAR_2->nested.exit_required = 1;
 return VAR_6;
}
