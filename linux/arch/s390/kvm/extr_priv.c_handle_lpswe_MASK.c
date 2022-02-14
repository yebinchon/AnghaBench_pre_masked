
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_9__ {TYPE_2__* sie_block; } ;
struct TYPE_7__ {int instruction_lpswe; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_1__ stat; } ;
struct TYPE_10__ {int mask; } ;
typedef TYPE_4__ psw_t ;
typedef int new_psw ;
struct TYPE_8__ {TYPE_4__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct kvm_vcpu*,int *) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int,int ,TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_3)
{
 psw_t VAR_4;
 u64 VAR_5;
 int VAR_6;
 u8 VAR_7;

 VAR_3->stat.instruction_lpswe++;

 if (VAR_3->arch.sie_block->gpsw.mask & VAR_2)
  return FUNC_3(VAR_3, VAR_0);

 VAR_5 = FUNC_1(VAR_3, &VAR_7);
 if (VAR_5 & 7)
  return FUNC_3(VAR_3, VAR_1);
 VAR_6 = FUNC_4(VAR_3, VAR_5, VAR_7, &VAR_4, sizeof(VAR_4));
 if (VAR_6)
  return FUNC_2(VAR_3, VAR_6);
 VAR_3->arch.sie_block->gpsw = VAR_4;
 if (!FUNC_0(&VAR_3->arch.sie_block->gpsw))
  return FUNC_3(VAR_3, VAR_1);
 return 0;
}
