
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_12__ {unsigned long itdba; unsigned int icpua; int gd; int msl; scalar_t__ mso; } ;
struct sie_page {int itdb; TYPE_5__ sie_block; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_11__ {TYPE_5__* sie_block; int cputm_seqcount; TYPE_1__ local_int; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct TYPE_9__ {scalar_t__ origin; } ;
struct TYPE_10__ {TYPE_2__ gisa_int; } ;
struct kvm {TYPE_3__ arch; } ;
struct TYPE_13__ {scalar_t__ has_gisaf; int hamax; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct kvm_vcpu* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct kvm*,int,char*,unsigned int,struct kvm_vcpu*,TYPE_5__*) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,struct kvm_vcpu*) ;
 struct kvm_vcpu* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct kvm*) ;
 int VAR_4 ;
 int FUNC_8 (struct kvm_vcpu*,struct kvm*,unsigned int) ;
 int FUNC_9 (struct kvm*,unsigned int) ;
 TYPE_6__ VAR_5 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (unsigned int,struct kvm_vcpu*,TYPE_5__*) ;

struct kvm_vcpu *FUNC_13(struct kvm *VAR_6,
          unsigned int VAR_7)
{
 struct kvm_vcpu *VAR_8;
 struct sie_page *VAR_9;
 int VAR_10 = -VAR_0;

 if (!FUNC_7(VAR_6) && !FUNC_9(VAR_6, VAR_7))
  goto out;

 VAR_10 = -VAR_1;

 VAR_8 = FUNC_6(VAR_4, VAR_2);
 if (!VAR_8)
  goto out;

 FUNC_0(sizeof(struct sie_page) != 4096);
 VAR_9 = (struct sie_page *) FUNC_4(VAR_2);
 if (!VAR_9)
  goto out_free_cpu;

 VAR_8->arch.sie_block = &VAR_9->sie_block;
 VAR_8->arch.sie_block->itdba = (unsigned long) &VAR_9->itdb;


 VAR_8->arch.sie_block->mso = 0;
 VAR_8->arch.sie_block->msl = VAR_5.hamax;

 VAR_8->arch.sie_block->icpua = VAR_7;
 FUNC_11(&VAR_8->arch.local_int.lock);
 VAR_8->arch.sie_block->gd = (u32)(u64)VAR_6->arch.gisa_int.origin;
 if (VAR_8->arch.sie_block->gd && VAR_5.has_gisaf)
  VAR_8->arch.sie_block->gd |= VAR_3;
 FUNC_10(&VAR_8->arch.cputm_seqcount);

 VAR_10 = FUNC_8(VAR_8, VAR_6, VAR_7);
 if (VAR_10)
  goto out_free_sie_block;
 FUNC_2(VAR_6, 3, "create cpu %d at 0x%pK, sie block at 0x%pK", VAR_7, VAR_8,
   VAR_8->arch.sie_block);
 FUNC_12(VAR_7, VAR_8, VAR_8->arch.sie_block);

 return VAR_8;
out_free_sie_block:
 FUNC_3((unsigned long)(VAR_8->arch.sie_block));
out_free_cpu:
 FUNC_5(VAR_4, VAR_8);
out:
 return FUNC_1(VAR_10);
}
