
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm {int dummy; } ;
struct TYPE_2__ {int (* flush_shadow_all ) (struct kvm*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct kvm*,int ,int ) ;
 int FUNC_1 (struct kvm*) ;

void FUNC_2(struct kvm *VAR_1)
{

 FUNC_0(VAR_1, 0, ~0);


 VAR_0->flush_shadow_all(VAR_1);
}
