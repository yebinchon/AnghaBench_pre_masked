
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_9__ {TYPE_1__* sie_block; } ;
struct TYPE_13__ {int instruction_stidp; } ;
struct kvm_vcpu {TYPE_2__ arch; TYPE_6__ stat; TYPE_5__* kvm; } ;
typedef int stidp_data ;
struct TYPE_14__ {int mask; } ;
struct TYPE_10__ {int cpuid; } ;
struct TYPE_11__ {TYPE_3__ model; } ;
struct TYPE_12__ {TYPE_4__ arch; } ;
struct TYPE_8__ {TYPE_7__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int) ;
 int FUNC_1 (struct kvm_vcpu*,int *) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int,int ,int*,int) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_3)
{
 u64 VAR_4 = VAR_3->kvm->arch.model.cpuid;
 u64 VAR_5;
 int VAR_6;
 u8 VAR_7;

 VAR_3->stat.instruction_stidp++;

 if (VAR_3->arch.sie_block->gpsw.mask & VAR_2)
  return FUNC_3(VAR_3, VAR_0);

 VAR_5 = FUNC_1(VAR_3, &VAR_7);

 if (VAR_5 & 7)
  return FUNC_3(VAR_3, VAR_1);

 VAR_6 = FUNC_4(VAR_3, VAR_5, VAR_7, &VAR_4, sizeof(VAR_4));
 if (VAR_6)
  return FUNC_2(VAR_3, VAR_6);

 FUNC_0(VAR_3, 3, "STIDP: store cpu id 0x%llx", VAR_4);
 return 0;
}
