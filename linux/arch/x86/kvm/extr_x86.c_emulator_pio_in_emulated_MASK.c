
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct x86_emulate_ctxt {int dummy; } ;
struct TYPE_3__ {scalar_t__ count; } ;
struct TYPE_4__ {TYPE_1__ pio; int pio_data; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;
 struct kvm_vcpu* FUNC_0 (struct x86_emulate_ctxt*) ;
 int FUNC_1 (struct kvm_vcpu*,int,unsigned short,void*,unsigned int,int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,unsigned short,int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct x86_emulate_ctxt *VAR_1,
        int VAR_2, unsigned short VAR_3, void *VAR_4,
        unsigned int VAR_5)
{
 struct kvm_vcpu *VAR_6 = FUNC_0(VAR_1);
 int VAR_7;

 if (VAR_6->arch.pio.count)
  goto data_avail;

 FUNC_3(VAR_6->arch.pio_data, 0, VAR_2 * VAR_5);

 VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5, 1);
 if (VAR_7) {
data_avail:
  FUNC_2(VAR_4, VAR_6->arch.pio_data, VAR_2 * VAR_5);
  FUNC_4(VAR_0, VAR_3, VAR_2, VAR_5, VAR_6->arch.pio_data);
  VAR_6->arch.pio.count = 0;
  return 1;
 }

 return 0;
}
