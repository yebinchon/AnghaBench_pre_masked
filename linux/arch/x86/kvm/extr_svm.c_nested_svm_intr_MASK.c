
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int exit_required; unsigned long long intercept; } ;
struct TYPE_7__ {int hflags; } ;
struct TYPE_12__ {TYPE_1__ arch; } ;
struct vcpu_svm {TYPE_5__* vmcb; TYPE_3__ nested; TYPE_6__ vcpu; } ;
struct TYPE_10__ {int rip; } ;
struct TYPE_8__ {scalar_t__ exit_info_2; scalar_t__ exit_info_1; int exit_code; } ;
struct TYPE_11__ {TYPE_4__ save; TYPE_2__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(struct vcpu_svm *VAR_3)
{
 if (!FUNC_0(&VAR_3->vcpu))
  return 1;

 if (!(VAR_3->vcpu.arch.hflags & VAR_1))
  return 1;

 if (!(VAR_3->vcpu.arch.hflags & VAR_0))
  return 0;






 if (VAR_3->nested.exit_required)
  return 0;

 VAR_3->vmcb->control.exit_code = VAR_2;
 VAR_3->vmcb->control.exit_info_1 = 0;
 VAR_3->vmcb->control.exit_info_2 = 0;

 if (VAR_3->nested.intercept & 1ULL) {






  VAR_3->nested.exit_required = 1;
  FUNC_1(VAR_3->vmcb->save.rip);
  return 0;
 }

 return 1;
}
