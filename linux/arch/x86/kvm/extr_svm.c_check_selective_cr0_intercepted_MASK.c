
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_8__ {unsigned long cr0; } ;
struct TYPE_10__ {TYPE_3__ arch; } ;
struct TYPE_9__ {unsigned long long intercept; } ;
struct vcpu_svm {TYPE_2__* vmcb; TYPE_5__ vcpu; TYPE_4__ nested; } ;
struct TYPE_6__ {int exit_code; } ;
struct TYPE_7__ {TYPE_1__ control; } ;


 unsigned long long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (struct vcpu_svm*) ;

__attribute__((used)) static bool FUNC_2(struct vcpu_svm *VAR_4,
         unsigned long VAR_5)
{
 unsigned long VAR_6 = VAR_4->vcpu.arch.cr0;
 bool VAR_7 = 0;
 u64 VAR_8;

 VAR_8 = VAR_4->nested.intercept;

 if (!FUNC_0(&VAR_4->vcpu) ||
     (!(VAR_8 & (1ULL << VAR_0))))
  return 0;

 VAR_6 &= ~VAR_2;
 VAR_5 &= ~VAR_2;

 if (VAR_6 ^ VAR_5) {
  VAR_4->vmcb->control.exit_code = VAR_3;
  VAR_7 = (FUNC_1(VAR_4) == VAR_1);
 }

 return VAR_7;
}
