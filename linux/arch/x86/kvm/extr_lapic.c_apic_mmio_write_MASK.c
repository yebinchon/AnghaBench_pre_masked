
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int kvm; } ;
struct kvm_lapic {unsigned int base_address; } ;
struct kvm_io_device {int dummy; } ;
typedef unsigned int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_lapic*,unsigned int) ;
 scalar_t__ FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_lapic*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct kvm_lapic*,unsigned int,int ) ;
 struct kvm_lapic* FUNC_5 (struct kvm_io_device*) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_2, struct kvm_io_device *VAR_3,
       gpa_t VAR_4, int VAR_5, const void *VAR_6)
{
 struct kvm_lapic *VAR_7 = FUNC_5(VAR_3);
 unsigned int VAR_8 = VAR_4 - VAR_7->base_address;
 u32 VAR_9;

 if (!FUNC_0(VAR_7, VAR_4))
  return -VAR_0;

 if (!FUNC_2(VAR_7) || FUNC_1(VAR_7)) {
  if (!FUNC_3(VAR_2->kvm,
      VAR_1))
   return -VAR_0;

  return 0;
 }






 if (VAR_5 != 4 || (VAR_8 & 0xf))
  return 0;

 VAR_9 = *(u32*)VAR_6;

 FUNC_4(VAR_7, VAR_8 & 0xff0, VAR_9);

 return 0;
}
