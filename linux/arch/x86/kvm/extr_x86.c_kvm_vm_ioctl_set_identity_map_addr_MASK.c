
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvm {int dummy; } ;
struct TYPE_2__ {int (* set_identity_map_addr ) (struct kvm*,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct kvm*,int ) ;

__attribute__((used)) static int FUNC_1(struct kvm *VAR_1,
           u64 VAR_2)
{
 return VAR_0->set_identity_map_addr(VAR_1, VAR_2);
}
