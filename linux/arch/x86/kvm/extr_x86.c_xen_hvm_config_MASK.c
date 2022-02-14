
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {struct kvm* kvm; } ;
struct TYPE_3__ {int blob_size_64; int blob_size_32; scalar_t__ blob_addr_32; scalar_t__ blob_addr_64; } ;
struct TYPE_4__ {TYPE_1__ xen_hvm_config; } ;
struct kvm {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*,int,int*,int) ;
 int* FUNC_5 (int*,int) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_4, u64 VAR_5)
{
 struct kvm *VAR_6 = VAR_4->kvm;
 int VAR_7 = FUNC_2(VAR_4);
 u8 *VAR_8 = VAR_7 ? (u8 *)(long)VAR_6->arch.xen_hvm_config.blob_addr_64
  : (u8 *)(long)VAR_6->arch.xen_hvm_config.blob_addr_32;
 u8 VAR_9 = VAR_7 ? VAR_6->arch.xen_hvm_config.blob_size_64
  : VAR_6->arch.xen_hvm_config.blob_size_32;
 u32 VAR_10 = VAR_5 & ~VAR_2;
 u64 VAR_11 = VAR_5 & VAR_2;
 u8 *VAR_12;
 int VAR_13;

 VAR_13 = -VAR_0;
 if (VAR_10 >= VAR_9)
  goto out;
 VAR_13 = -VAR_1;
 VAR_12 = FUNC_5(VAR_8 + (VAR_10 * VAR_3), VAR_3);
 if (FUNC_0(VAR_12)) {
  VAR_13 = FUNC_1(VAR_12);
  goto out;
 }
 if (FUNC_4(VAR_4, VAR_11, VAR_12, VAR_3))
  goto out_free;
 VAR_13 = 0;
out_free:
 FUNC_3(VAR_12);
out:
 return VAR_13;
}
