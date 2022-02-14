
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; } ;
struct kvm_nested_guest {int tlb_lock; int shadow_lpid; } ;
typedef int gva_t ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long FUNC_0 (int ,int,int,void*,void*,unsigned long) ;
 int FUNC_1 (void*) ;
 long FUNC_2 (struct kvm_vcpu*,scalar_t__,void*,unsigned long) ;
 long FUNC_3 (struct kvm_vcpu*,scalar_t__,void*,unsigned long) ;
 struct kvm_nested_guest* FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct kvm_nested_guest*) ;
 void* FUNC_6 (struct kvm_vcpu*,int) ;
 void* FUNC_7 (unsigned long,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

long FUNC_10(struct kvm_vcpu *VAR_4)
{
 struct kvm_nested_guest *VAR_5;
 int VAR_6 = FUNC_6(VAR_4, 4);
 int VAR_7 = FUNC_6(VAR_4, 5);
 gva_t VAR_8 = FUNC_6(VAR_4, 6);
 gpa_t VAR_9 = (gpa_t) FUNC_6(VAR_4, 7);
 gpa_t VAR_10 = (gpa_t) FUNC_6(VAR_4, 8);
 void *VAR_11;
 unsigned long VAR_12 = FUNC_6(VAR_4, 9);
 bool VAR_13 = !!VAR_9;
 long VAR_14;

 if (VAR_9 && VAR_10)
  return VAR_3;

 if (VAR_8 & (0xFFFUL << 52))
  return VAR_3;

 VAR_11 = FUNC_7(VAR_12, VAR_0);
 if (!VAR_11)
  return VAR_2;

 VAR_5 = FUNC_4(VAR_4->kvm, VAR_6, 0);
 if (!VAR_5) {
  VAR_14 = VAR_3;
  goto out_free;
 }

 FUNC_8(&VAR_5->tlb_lock);

 if (VAR_13) {

  VAR_14 = FUNC_0(VAR_5->shadow_lpid, VAR_7,
           VAR_8, VAR_11, ((void*)0), VAR_12);
  if (VAR_14)
   goto not_found;


  VAR_14 = FUNC_3(VAR_4, VAR_9, VAR_11, VAR_12);
  if (VAR_14)
   goto not_found;
 } else {

  VAR_14 = FUNC_2(VAR_4, VAR_10, VAR_11, VAR_12);
  if (VAR_14)
   goto not_found;


  VAR_14 = FUNC_0(VAR_5->shadow_lpid, VAR_7,
           VAR_8, ((void*)0), VAR_11, VAR_12);
  if (VAR_14)
   goto not_found;
 }

out_unlock:
 FUNC_9(&VAR_5->tlb_lock);
 FUNC_5(VAR_5);
out_free:
 FUNC_1(VAR_11);
 return VAR_14;
not_found:
 VAR_14 = VAR_1;
 goto out_unlock;
}
