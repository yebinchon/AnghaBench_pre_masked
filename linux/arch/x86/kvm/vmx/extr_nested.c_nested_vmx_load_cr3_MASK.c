
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct TYPE_2__ {unsigned long cr3; int regs_avail; int walk_mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (struct kvm_vcpu*,unsigned long,int) ;
 unsigned long FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int ,unsigned long) ;
 int FUNC_7 (struct kvm_vcpu*,unsigned long) ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu *VAR_4, unsigned long VAR_5, bool VAR_6,
          u32 *VAR_7)
{
 if (VAR_5 != FUNC_5(VAR_4) || (!VAR_6 && FUNC_8(VAR_4))) {
  if (FUNC_0(!FUNC_7(VAR_4, VAR_5))) {
   *VAR_7 = VAR_1;
   return -VAR_0;
  }





  if (FUNC_2(VAR_4) && !VAR_6) {
   if (FUNC_0(!FUNC_6(VAR_4, VAR_4->arch.walk_mmu, VAR_5))) {
    *VAR_7 = VAR_2;
    return -VAR_0;
   }
  }
 }

 if (!VAR_6)
  FUNC_4(VAR_4, VAR_5, 0);

 VAR_4->arch.cr3 = VAR_5;
 FUNC_1(VAR_3, (ulong *)&VAR_4->arch.regs_avail);

 FUNC_3(VAR_4, 0);

 return 0;
}
