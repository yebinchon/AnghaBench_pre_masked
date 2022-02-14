
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_10__ {int instruction_lpsw; } ;
struct TYPE_9__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_3__ stat; TYPE_2__ arch; } ;
struct TYPE_11__ {int mask; int addr; } ;
typedef TYPE_4__ psw_t ;
struct TYPE_12__ {int mask; int addr; } ;
typedef TYPE_5__ psw_compat_t ;
typedef int new_psw ;
struct TYPE_8__ {TYPE_4__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct kvm_vcpu*,int *) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int,int ,TYPE_5__*,int) ;

int FUNC_5(struct kvm_vcpu *VAR_5)
{
 psw_t *VAR_6 = &VAR_5->arch.sie_block->gpsw;
 psw_compat_t VAR_7;
 u64 VAR_8;
 int VAR_9;
 u8 VAR_10;

 VAR_5->stat.instruction_lpsw++;

 if (VAR_6->mask & VAR_4)
  return FUNC_3(VAR_5, VAR_0);

 VAR_8 = FUNC_1(VAR_5, &VAR_10);
 if (VAR_8 & 7)
  return FUNC_3(VAR_5, VAR_1);

 VAR_9 = FUNC_4(VAR_5, VAR_8, VAR_10, &VAR_7, sizeof(VAR_7));
 if (VAR_9)
  return FUNC_2(VAR_5, VAR_9);
 if (!(VAR_7.mask & VAR_3))
  return FUNC_3(VAR_5, VAR_1);
 VAR_6->mask = (VAR_7.mask & ~VAR_3) << 32;
 VAR_6->mask |= VAR_7.addr & VAR_2;
 VAR_6->addr = VAR_7.addr & ~VAR_2;
 if (!FUNC_0(VAR_6))
  return FUNC_3(VAR_5, VAR_1);
 return 0;
}
