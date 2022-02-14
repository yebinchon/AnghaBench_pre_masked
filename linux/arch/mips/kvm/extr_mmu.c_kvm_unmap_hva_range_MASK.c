
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm {int dummy; } ;
struct TYPE_2__ {int (* flush_shadow_all ) (struct kvm*) ;} ;


 int FUNC_0 (struct kvm*,unsigned long,unsigned long,int *,int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct kvm*) ;

int FUNC_2(struct kvm *VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_1, ((void*)0));

 VAR_0->flush_shadow_all(VAR_2);
 return 0;
}
