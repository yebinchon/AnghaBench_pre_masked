
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ulong ;
typedef int u64 ;
struct TYPE_5__ {int cr0; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;
struct vcpu_svm {TYPE_4__* vmcb; TYPE_2__ vcpu; } ;
struct TYPE_7__ {int cr0; } ;
struct TYPE_8__ {TYPE_3__ save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vcpu_svm*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (struct vcpu_svm*,int ) ;

__attribute__((used)) static void FUNC_3(struct vcpu_svm *VAR_4)
{
 ulong VAR_5 = VAR_4->vcpu.arch.cr0;
 u64 *VAR_6 = &VAR_4->vmcb->save.cr0;

 *VAR_6 = (*VAR_6 & ~VAR_2)
  | (VAR_5 & VAR_2);

 FUNC_1(VAR_4->vmcb, VAR_3);

 if (VAR_5 == *VAR_6) {
  FUNC_0(VAR_4, VAR_0);
  FUNC_0(VAR_4, VAR_1);
 } else {
  FUNC_2(VAR_4, VAR_0);
  FUNC_2(VAR_4, VAR_1);
 }
}
