
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vcpu_svm {TYPE_2__* vmcb; int * msrpm; } ;
struct TYPE_3__ {int virt_ext; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct vcpu_svm *VAR_5)
{
 u32 *VAR_6 = VAR_5->msrpm;

 VAR_5->vmcb->control.virt_ext |= VAR_0;
 FUNC_0(VAR_6, VAR_1, 1, 1);
 FUNC_0(VAR_6, VAR_2, 1, 1);
 FUNC_0(VAR_6, VAR_3, 1, 1);
 FUNC_0(VAR_6, VAR_4, 1, 1);
}
