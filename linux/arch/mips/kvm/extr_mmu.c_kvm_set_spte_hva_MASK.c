
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm {int dummy; } ;
typedef int pte_t ;
struct TYPE_2__ {int (* flush_shadow_all ) (struct kvm*) ;} ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct kvm*,unsigned long,unsigned long,int *,int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct kvm*) ;

int FUNC_2(struct kvm *VAR_3, unsigned long VAR_4, pte_t VAR_5)
{
 unsigned long VAR_6 = VAR_4 + VAR_0;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_6, &VAR_2, &VAR_5);
 if (VAR_7)
  VAR_1->flush_shadow_all(VAR_3);
 return 0;
}
