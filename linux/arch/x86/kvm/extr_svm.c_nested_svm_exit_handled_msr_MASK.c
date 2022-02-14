
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {unsigned long long intercept; scalar_t__ vmcb_msrpm; } ;
struct TYPE_6__ {int* regs; } ;
struct TYPE_10__ {TYPE_1__ arch; } ;
struct vcpu_svm {TYPE_4__ nested; TYPE_5__ vcpu; TYPE_3__* vmcb; } ;
struct TYPE_7__ {int exit_info_1; } ;
struct TYPE_8__ {TYPE_2__ control; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_5__*,scalar_t__,int*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct vcpu_svm *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;

 if (!(VAR_5->nested.intercept & (1ULL << VAR_0)))
  return VAR_3;

 VAR_7 = VAR_5->vcpu.arch.regs[VAR_4];
 VAR_6 = FUNC_1(VAR_7);
 VAR_9 = VAR_5->vmcb->control.exit_info_1 & 1;
 VAR_10 = 1 << ((2 * (VAR_7 & 0xf)) + VAR_9);

 if (VAR_6 == VAR_1)
  return VAR_2;


 VAR_6 *= 4;

 if (FUNC_0(&VAR_5->vcpu, VAR_5->nested.vmcb_msrpm + VAR_6, &VAR_8, 4))
  return VAR_2;

 return (VAR_8 & VAR_10) ? VAR_2 : VAR_3;
}
