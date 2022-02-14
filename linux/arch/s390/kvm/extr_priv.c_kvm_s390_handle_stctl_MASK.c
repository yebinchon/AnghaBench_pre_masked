
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_8__ {TYPE_3__* sie_block; } ;
struct TYPE_5__ {int instruction_stctl; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_1__ stat; } ;
struct TYPE_6__ {int mask; } ;
struct TYPE_7__ {int ipa; int * gcr; TYPE_2__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int,int,int) ;
 int FUNC_1 (struct kvm_vcpu*,int *) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ,int,int,int) ;
 int FUNC_5 (struct kvm_vcpu*,int,int ,int *,int) ;

int FUNC_6(struct kvm_vcpu *VAR_3)
{
 int VAR_4 = (VAR_3->arch.sie_block->ipa & 0x00f0) >> 4;
 int VAR_5 = VAR_3->arch.sie_block->ipa & 0x000f;
 int VAR_6, VAR_7, VAR_8;
 u32 VAR_9[16];
 u64 VAR_10;
 u8 VAR_11;

 VAR_3->stat.instruction_stctl++;

 if (VAR_3->arch.sie_block->gpsw.mask & VAR_2)
  return FUNC_3(VAR_3, VAR_0);

 VAR_10 = FUNC_1(VAR_3, &VAR_11);

 if (VAR_10 & 3)
  return FUNC_3(VAR_3, VAR_1);

 FUNC_0(VAR_3, 4, "STCTL r1:%d, r3:%d, addr: 0x%llx", VAR_4, VAR_5, VAR_10);
 FUNC_4(VAR_3, 0, VAR_4, VAR_5, VAR_10);

 VAR_6 = VAR_4;
 VAR_8 = 0;
 do {
  VAR_9[VAR_8++] = VAR_3->arch.sie_block->gcr[VAR_6];
  if (VAR_6 == VAR_5)
   break;
  VAR_6 = (VAR_6 + 1) % 16;
 } while (1);
 VAR_7 = FUNC_5(VAR_3, VAR_10, VAR_11, VAR_9, VAR_8 * sizeof(u32));
 return VAR_7 ? FUNC_2(VAR_3, VAR_7) : 0;
}
