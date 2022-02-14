
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pte_t ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int * FUNC_0 (int *,unsigned long,int *,unsigned int*) ;
 int FUNC_1 (struct kvm*,int *,int ,unsigned long,unsigned long,unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

bool FUNC_4(struct kvm *VAR_2, pgd_t *VAR_3, bool VAR_4,
        unsigned long VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7;
 unsigned int VAR_8;
 pte_t *VAR_9;






 VAR_7 = VAR_0;
 if (VAR_4)
  VAR_7 |= VAR_1;





 VAR_9 = FUNC_0(VAR_3, VAR_5, ((void*)0), &VAR_8);
 if (VAR_9 && FUNC_2(*VAR_9) && (!VAR_4 || FUNC_3(*VAR_9))) {
  FUNC_1(VAR_2, VAR_9, 0, VAR_7, VAR_5, VAR_8);
  return 1;
 }
 return 0;
}
