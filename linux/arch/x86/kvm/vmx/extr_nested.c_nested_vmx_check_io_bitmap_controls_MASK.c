
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {int io_bitmap_b; int io_bitmap_a; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vmcs12*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_2,
            struct vmcs12 *VAR_3)
{
 if (!FUNC_1(VAR_3, VAR_0))
  return 0;

 if (FUNC_0(!FUNC_2(VAR_2, VAR_3->io_bitmap_a)) ||
     FUNC_0(!FUNC_2(VAR_2, VAR_3->io_bitmap_b)))
  return -VAR_1;

 return 0;
}
