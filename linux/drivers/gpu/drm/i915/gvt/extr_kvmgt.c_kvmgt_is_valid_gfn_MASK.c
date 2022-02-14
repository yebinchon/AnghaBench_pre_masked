
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmgt_guest_info {struct kvm* kvm; } ;
struct kvm {int srcu; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct kvm*,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static bool FUNC_4(unsigned long VAR_0, unsigned long VAR_1)
{
 struct kvmgt_guest_info *VAR_2;
 struct kvm *VAR_3;
 int VAR_4;
 bool VAR_5;

 if (!FUNC_0(VAR_0))
  return 0;

 VAR_2 = (struct kvmgt_guest_info *)VAR_0;
 VAR_3 = VAR_2->kvm;

 VAR_4 = FUNC_2(&VAR_3->srcu);
 VAR_5 = FUNC_1(VAR_3, VAR_1);
 FUNC_3(&VAR_3->srcu, VAR_4);

 return VAR_5;
}
