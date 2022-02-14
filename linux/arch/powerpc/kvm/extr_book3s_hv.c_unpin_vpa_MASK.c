
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vpa {int dirty; int gpa; scalar_t__ pinned_addr; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (struct kvm*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct kvm *VAR_0, struct kvmppc_vpa *VAR_1)
{
 if (VAR_1->pinned_addr)
  FUNC_0(VAR_0, VAR_1->pinned_addr, VAR_1->gpa,
     VAR_1->dirty);
}
