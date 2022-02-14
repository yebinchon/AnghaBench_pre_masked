
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int val; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_9__ {TYPE_3__ guest; TYPE_2__ host; } ;
struct TYPE_6__ {int msr_bitmap; } ;
struct TYPE_10__ {int vmcs02_initialized; TYPE_1__ vmcs02; } ;
struct vcpu_vmx {TYPE_4__ msr_autoload; int pml_pg; TYPE_5__ nested; int vcpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long long FUNC_0 (int ) ;
 unsigned long long FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned long long FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,unsigned long long) ;
 int FUNC_10 (struct vcpu_vmx*) ;

__attribute__((used)) static void FUNC_11(struct vcpu_vmx *VAR_15)
{






 if (VAR_15->nested.vmcs02_initialized)
  return;
 VAR_15->nested.vmcs02_initialized = 1;






 if (VAR_12 && VAR_14)
  FUNC_9(VAR_1, FUNC_1(&VAR_15->vcpu, 0));


 if (FUNC_5())
  FUNC_9(VAR_11, 0);

 if (FUNC_4())
  FUNC_7(VAR_7, VAR_6);

 if (FUNC_3())
  FUNC_9(VAR_3, FUNC_0(VAR_15->nested.vmcs02.msr_bitmap));
 if (VAR_13) {
  FUNC_9(VAR_4, FUNC_6(VAR_15->pml_pg));
  FUNC_7(VAR_2, VAR_5 - 1);
 }

 if (FUNC_2())
  FUNC_9(VAR_0, -1ull);






 FUNC_8(VAR_10, 0);
 FUNC_9(VAR_9, FUNC_0(VAR_15->msr_autoload.host.val));
 FUNC_9(VAR_8, FUNC_0(VAR_15->msr_autoload.guest.val));

 FUNC_10(VAR_15);
}
