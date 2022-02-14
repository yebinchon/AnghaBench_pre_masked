
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_msr_entry {int index; int data; } ;
struct TYPE_2__ {int (* get_msr_feature ) (struct kvm_msr_entry*) ;} ;




 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct kvm_msr_entry*) ;

__attribute__((used)) static int FUNC_3(struct kvm_msr_entry *VAR_1)
{
 switch (VAR_1->index) {
 case 129:
  VAR_1->data = FUNC_0();
  break;
 case 128:
  FUNC_1(VAR_1->index, &VAR_1->data);
  break;
 default:
  if (VAR_0->get_msr_feature(VAR_1))
   return 1;
 }
 return 0;
}
