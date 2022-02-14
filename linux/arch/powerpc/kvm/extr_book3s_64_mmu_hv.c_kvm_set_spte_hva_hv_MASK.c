
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pte_t ;
typedef int hva_handler_fn ;


 int FUNC_0 (struct kvm*,unsigned long,int ) ;
 scalar_t__ FUNC_1 (struct kvm*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct kvm *VAR_2, unsigned long VAR_3, pte_t VAR_4)
{
 hva_handler_fn VAR_5;

 VAR_5 = FUNC_1(VAR_2) ? VAR_0 : VAR_1;
 FUNC_0(VAR_2, VAR_3, VAR_5);
}
