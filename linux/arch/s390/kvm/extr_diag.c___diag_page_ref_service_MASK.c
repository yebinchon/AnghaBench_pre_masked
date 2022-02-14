
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


typedef int u64 ;
typedef size_t u16 ;
struct TYPE_12__ {int pfault_token; int pfault_select; int pfault_compare; TYPE_1__* sie_block; } ;
struct TYPE_8__ {int diagnose_258; } ;
struct kvm_vcpu {TYPE_6__ arch; TYPE_5__* run; int kvm; TYPE_2__ stat; } ;
typedef int parm ;
struct TYPE_9__ {int* gprs; } ;
struct TYPE_10__ {TYPE_3__ regs; } ;
struct TYPE_11__ {TYPE_4__ s; } ;
struct TYPE_7__ {int ipa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int,...) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int,size_t,struct prs_parm*,int) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_4)
{
 struct prs_parm {
  u16 code;
  u16 subcode;
  u16 parm_len;
  u16 parm_version;
  u64 token_addr;
  u64 select_mask;
  u64 compare_mask;
  u64 zarch;
 };
 struct prs_parm VAR_5;
 int VAR_6;
 u16 VAR_7 = (VAR_4->arch.sie_block->ipa & 0xf0) >> 4;
 u16 VAR_8 = (VAR_4->arch.sie_block->ipa & 0x0f);

 FUNC_0(VAR_4, 3, "diag page reference parameter block at 0x%llx",
     VAR_4->run->s.regs.gprs[VAR_7]);
 VAR_4->stat.diagnose_258++;
 if (VAR_4->run->s.regs.gprs[VAR_7] & 7)
  return FUNC_3(VAR_4, VAR_3);
 VAR_6 = FUNC_4(VAR_4, VAR_4->run->s.regs.gprs[VAR_7], VAR_7, &VAR_5, sizeof(VAR_5));
 if (VAR_6)
  return FUNC_2(VAR_4, VAR_6);
 if (VAR_5.parm_version != 2 || VAR_5.parm_len < 5 || VAR_5.code != 0x258)
  return FUNC_3(VAR_4, VAR_3);

 switch (VAR_5.subcode) {
 case 0:
  FUNC_0(VAR_4, 3, "pageref token addr 0x%llx "
      "select mask 0x%llx compare mask 0x%llx",
      VAR_5.token_addr, VAR_5.select_mask, VAR_5.compare_mask);
  if (VAR_4->arch.pfault_token != VAR_1) {





   VAR_4->run->s.regs.gprs[VAR_8] = 8;
   return 0;
  }

  if ((VAR_5.compare_mask & VAR_5.select_mask) != VAR_5.compare_mask ||
      VAR_5.token_addr & 7 || VAR_5.zarch != 0x8000000000000000ULL)
   return FUNC_3(VAR_4, VAR_3);

  if (FUNC_1(VAR_4->kvm, VAR_5.token_addr))
   return FUNC_3(VAR_4, VAR_2);

  VAR_4->arch.pfault_token = VAR_5.token_addr;
  VAR_4->arch.pfault_select = VAR_5.select_mask;
  VAR_4->arch.pfault_compare = VAR_5.compare_mask;
  VAR_4->run->s.regs.gprs[VAR_8] = 0;
  VAR_6 = 0;
  break;
 case 1:





  FUNC_0(VAR_4, 3, "pageref cancel addr 0x%llx", VAR_5.token_addr);
  if (VAR_5.token_addr || VAR_5.select_mask ||
      VAR_5.compare_mask || VAR_5.zarch)
   return FUNC_3(VAR_4, VAR_3);

  VAR_4->run->s.regs.gprs[VAR_8] = 0;




  if (VAR_4->arch.pfault_token == VAR_1)
   VAR_4->run->s.regs.gprs[VAR_8] = 4;
  else
   VAR_4->arch.pfault_token = VAR_1;

  VAR_6 = 0;
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
