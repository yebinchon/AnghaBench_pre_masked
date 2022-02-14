
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int diagnose_500; } ;
struct kvm_vcpu {TYPE_6__* run; TYPE_3__* kvm; TYPE_1__ stat; } ;
struct TYPE_10__ {int* gprs; } ;
struct TYPE_11__ {TYPE_4__ regs; } ;
struct TYPE_12__ {TYPE_5__ s; } ;
struct TYPE_8__ {int css_support; } ;
struct TYPE_9__ {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int ,int ,int) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_3)
{
 int VAR_4;

 VAR_3->stat.diagnose_500++;

 if (!VAR_3->kvm->arch.css_support ||
     (VAR_3->run->s.regs.gprs[1] != VAR_1))
  return -VAR_0;

 FUNC_0(VAR_3, 4, "diag 0x500 schid 0x%8.8x queue 0x%x cookie 0x%llx",
       (u32) VAR_3->run->s.regs.gprs[2],
       (u32) VAR_3->run->s.regs.gprs[3],
       VAR_3->run->s.regs.gprs[4]);







 VAR_4 = FUNC_1(VAR_3, VAR_2,
          VAR_3->run->s.regs.gprs[2] & 0xffffffff,
          8, &VAR_3->run->s.regs.gprs[3],
          VAR_3->run->s.regs.gprs[4]);





 if (VAR_4 != -VAR_0)
  VAR_3->run->s.regs.gprs[2] = VAR_4;

 return VAR_4 < 0 ? VAR_4 : 0;
}
