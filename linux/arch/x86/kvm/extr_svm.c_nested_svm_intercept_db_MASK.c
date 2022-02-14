
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_svm {int nmi_singlestep_guest_rflags; int vcpu; int nmi_singlestep; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vcpu_svm*) ;
 scalar_t__ FUNC_1 (int *,int,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct vcpu_svm *VAR_4)
{
 unsigned long VAR_5;


 if (!VAR_4->nmi_singlestep)
  return VAR_1;


 if (FUNC_1(&VAR_4->vcpu, 6, &VAR_5))
  return VAR_1;
 if (!(VAR_5 & VAR_0))
  return VAR_1;


 if (VAR_4->nmi_singlestep_guest_rflags & VAR_3) {
  FUNC_0(VAR_4);
  return VAR_1;
 }


 return VAR_2;
}
