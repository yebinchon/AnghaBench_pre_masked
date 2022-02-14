
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_msr_entry {int index; scalar_t__ data; } ;



 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct kvm_msr_entry *VAR_2)
{
 VAR_2->data = 0;

 switch (VAR_2->index) {
 case 128:
  if (FUNC_0(VAR_1))
   VAR_2->data |= VAR_0;
  break;
 default:
  return 1;
 }

 return 0;
}
