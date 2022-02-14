
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_hw_wp_info_arch {scalar_t__ len; int * old_data; int phys_addr; int addr; } ;
struct kvm_hw_breakpoint {scalar_t__ len; int phys_addr; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_4,
       struct kvm_hw_breakpoint *VAR_5,
       struct kvm_hw_wp_info_arch *VAR_6)
{
 int VAR_7 = 0;
 VAR_6->len = VAR_5->len;
 VAR_6->addr = VAR_5->addr;
 VAR_6->phys_addr = VAR_5->phys_addr;
 VAR_6->old_data = ((void*)0);

 if (VAR_6->len < 0 || VAR_6->len > VAR_3)
  return -VAR_0;

 VAR_6->old_data = FUNC_1(VAR_5->len, VAR_2);
 if (!VAR_6->old_data)
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_4, VAR_6->phys_addr, VAR_6->old_data,
        VAR_6->len);
 if (VAR_7) {
  FUNC_0(VAR_6->old_data);
  VAR_6->old_data = ((void*)0);
 }

 return VAR_7;
}
