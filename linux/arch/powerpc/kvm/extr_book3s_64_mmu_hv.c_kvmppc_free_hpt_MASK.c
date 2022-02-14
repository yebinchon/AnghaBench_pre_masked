
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_hpt_info {int order; scalar_t__ virt; scalar_t__ cma; int * rev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct kvm_hpt_info *VAR_1)
{
 FUNC_2(VAR_1->rev);
 VAR_1->rev = ((void*)0);
 if (VAR_1->cma)
  FUNC_1(FUNC_3(VAR_1->virt),
     1 << (VAR_1->order - VAR_0));
 else if (VAR_1->virt)
  FUNC_0(VAR_1->virt, VAR_1->order - VAR_0);
 VAR_1->virt = 0;
 VAR_1->order = 0;
}
