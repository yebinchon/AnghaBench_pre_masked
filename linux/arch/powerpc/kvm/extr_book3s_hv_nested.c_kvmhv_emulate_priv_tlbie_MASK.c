
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm_nested_guest {int dummy; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct kvm_vcpu*,int) ;
 int FUNC_8 (struct kvm_vcpu*,struct kvm_nested_guest*,int) ;
 int FUNC_9 (struct kvm_vcpu*,int,int,long) ;
 struct kvm_nested_guest* FUNC_10 (struct kvm*,int,int) ;
 int FUNC_11 (struct kvm_nested_guest*) ;

__attribute__((used)) static int FUNC_12(struct kvm_vcpu *VAR_1, unsigned int VAR_2,
        unsigned long VAR_3, unsigned long VAR_4)
{
 struct kvm *VAR_5 = VAR_1->kvm;
 struct kvm_nested_guest *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;
 long VAR_13;
 int VAR_14 = 0;

 VAR_8 = FUNC_6(VAR_2);
 VAR_9 = FUNC_4(VAR_2);
 VAR_7 = FUNC_5(VAR_2);
 VAR_12 = FUNC_3(VAR_3);
 VAR_10 = FUNC_2(VAR_4);
 if ((!VAR_7) || (VAR_9) || (VAR_8 == 3) || (VAR_10 == 1) ||
     ((!VAR_10) && (VAR_8 == 1 || VAR_8 == 2)))
  return -VAR_0;

 switch (VAR_10) {
 case 0:




  VAR_13 = FUNC_1(VAR_4);
  VAR_11 = FUNC_0(VAR_4);
  VAR_14 = FUNC_9(VAR_1, VAR_12, VAR_11, VAR_13);
  break;
 case 2:

  VAR_6 = FUNC_10(VAR_5, VAR_12, 0);
  if (VAR_6) {
   FUNC_8(VAR_1, VAR_6, VAR_8);
   FUNC_11(VAR_6);
  }
  break;
 case 3:

  FUNC_7(VAR_1, VAR_8);
  break;
 default:
  VAR_14 = -VAR_0;
  break;
 }

 return VAR_14;
}
