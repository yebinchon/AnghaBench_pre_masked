
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


typedef int u16 ;
struct TYPE_11__ {TYPE_5__* sie_block; } ;
struct TYPE_8__ {int exit_external_interrupt; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_1__ stat; } ;
struct TYPE_9__ {int code; } ;
struct TYPE_10__ {TYPE_2__ extcall; } ;
struct kvm_s390_irq {TYPE_3__ u; int type; } ;
struct TYPE_13__ {int mask; } ;
typedef TYPE_6__ psw_t ;
struct TYPE_12__ {int eic; int extcpuaddr; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_s390_irq*) ;
 int FUNC_1 (struct kvm_vcpu*,int ,TYPE_6__*,int) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_7)
{
 u16 VAR_8 = VAR_7->arch.sie_block->eic;
 struct kvm_s390_irq VAR_9;
 psw_t VAR_10;
 int VAR_11;

 VAR_7->stat.exit_external_interrupt++;

 VAR_11 = FUNC_1(VAR_7, VAR_6, &VAR_10, sizeof(psw_t));
 if (VAR_11)
  return VAR_11;

 if ((VAR_8 == 130 || VAR_8 == 129) &&
     (VAR_10.mask & VAR_5))
  return -VAR_1;

 switch (VAR_8) {
 case 130:
  VAR_9.type = VAR_2;
  break;
 case 129:
  VAR_9.type = VAR_3;
  break;
 case 128:
  VAR_9.type = VAR_4;
  VAR_9.u.extcall.code = VAR_7->arch.sie_block->extcpuaddr;
  VAR_11 = FUNC_0(VAR_7, &VAR_9);

  if (VAR_11 == -VAR_0)
   return 0;
  return VAR_11;
 default:
  return -VAR_1;
 }

 return FUNC_0(VAR_7, &VAR_9);
}
