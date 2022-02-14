
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvm {int dummy; } ;
struct TYPE_2__ {int ept_identity_map_addr; } ;


 TYPE_1__* FUNC_0 (struct kvm*) ;

__attribute__((used)) static int FUNC_1(struct kvm *VAR_0, u64 VAR_1)
{
 FUNC_0(VAR_0)->ept_identity_map_addr = VAR_1;
 return 0;
}
