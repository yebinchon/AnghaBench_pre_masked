
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct kvm_vcpu {int kvm; } ;
struct kvm_lapic {scalar_t__ base_address; } ;
struct kvm_io_device {int dummy; } ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_lapic*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_lapic*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct kvm_lapic*,scalar_t__,int,void*) ;
 int FUNC_5 (void*,int,int) ;
 struct kvm_lapic* FUNC_6 (struct kvm_io_device*) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_2, struct kvm_io_device *VAR_3,
      gpa_t VAR_4, int VAR_5, void *VAR_6)
{
 struct kvm_lapic *VAR_7 = FUNC_6(VAR_3);
 u32 VAR_8 = VAR_4 - VAR_7->base_address;

 if (!FUNC_0(VAR_7, VAR_4))
  return -VAR_0;

 if (!FUNC_2(VAR_7) || FUNC_1(VAR_7)) {
  if (!FUNC_3(VAR_2->kvm,
      VAR_1))
   return -VAR_0;

  FUNC_5(VAR_6, 0xff, VAR_5);
  return 0;
 }

 FUNC_4(VAR_7, VAR_8, VAR_5, VAR_6);

 return 0;
}
