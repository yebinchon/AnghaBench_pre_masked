
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmgt_guest_info {int kvm; } ;
typedef unsigned long kvm_pfn_t ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_3(unsigned long VAR_1, unsigned long VAR_2)
{
 struct kvmgt_guest_info *VAR_3;
 kvm_pfn_t VAR_4;

 if (!FUNC_1(VAR_1))
  return VAR_0;

 VAR_3 = (struct kvmgt_guest_info *)VAR_1;

 VAR_4 = FUNC_0(VAR_3->kvm, VAR_2);
 if (FUNC_2(VAR_4))
  return VAR_0;

 return VAR_4;
}
