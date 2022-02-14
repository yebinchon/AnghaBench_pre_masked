
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_6__ {unsigned long long intercept; int* msrpm; scalar_t__ vmcb_msrpm; } ;
struct vcpu_svm {int* msrpm; TYPE_3__ nested; TYPE_2__* vmcb; int vcpu; } ;
struct TYPE_4__ {int msrpm_base_pa; } ;
struct TYPE_5__ {TYPE_1__ control; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int*,int) ;
 int* VAR_2 ;

__attribute__((used)) static bool FUNC_3(struct vcpu_svm *VAR_3)
{





 int VAR_4;

 if (!(VAR_3->nested.intercept & (1ULL << VAR_0)))
  return 1;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  u32 VAR_5, VAR_6;
  u64 VAR_7;

  if (VAR_2[VAR_4] == 0xffffffff)
   break;

  VAR_6 = VAR_2[VAR_4];
  VAR_7 = VAR_3->nested.vmcb_msrpm + (VAR_6 * 4);

  if (FUNC_2(&VAR_3->vcpu, VAR_7, &VAR_5, 4))
   return 0;

  VAR_3->nested.msrpm[VAR_6] = VAR_3->msrpm[VAR_6] | VAR_5;
 }

 VAR_3->vmcb->control.msrpm_base_pa = FUNC_1(FUNC_0(VAR_3->nested.msrpm));

 return 1;
}
