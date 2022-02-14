
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_s390_pgm_info {scalar_t__ code; int trans_exc_code; int op_access_id; int exc_access_id; } ;
typedef int __u64 ;
typedef scalar_t__ __u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_s390_pgm_info*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_1, __u16 VAR_2, __u64 VAR_3,
   bool VAR_4)
{
 struct kvm_s390_pgm_info VAR_5 = {
  .code = VAR_2,
  .trans_exc_code =

   (VAR_3 & 0xfffffffffffff000UL) |

   (((unsigned int) !VAR_4) + 1) << 10,

  .exc_access_id = 0,
  .op_access_id = 0,
 };
 int VAR_6;

 if (VAR_2 == VAR_0)
  VAR_5.trans_exc_code |= 0x4UL;

 VAR_6 = FUNC_0(VAR_1, &VAR_5);
 return VAR_6 ? VAR_6 : 1;
}
