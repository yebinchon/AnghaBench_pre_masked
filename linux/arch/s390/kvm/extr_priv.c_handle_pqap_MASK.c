
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_14__ {TYPE_2__* sie_block; } ;
struct kvm_vcpu {TYPE_9__* run; TYPE_10__* kvm; TYPE_3__ arch; } ;
struct ap_queue_status {int response_code; } ;
typedef int status ;
struct TYPE_18__ {unsigned long* gprs; } ;
struct TYPE_19__ {TYPE_7__ regs; } ;
struct TYPE_20__ {TYPE_8__ s; } ;
struct TYPE_16__ {int crycbd; TYPE_4__* pqap_hook; } ;
struct TYPE_17__ {TYPE_5__ crypto; } ;
struct TYPE_15__ {int (* hook ) (struct kvm_vcpu*) ;int owner; } ;
struct TYPE_12__ {int mask; } ;
struct TYPE_13__ {int eca; TYPE_1__ gpsw; } ;
struct TYPE_11__ {TYPE_6__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (int*,struct ap_queue_status*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (TYPE_10__*,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu *VAR_5)
{
 struct ap_queue_status VAR_6 = {};
 unsigned long VAR_7;
 int VAR_8;
 uint8_t VAR_9;


 if (!FUNC_1())
  return -VAR_1;

 if (!(VAR_5->arch.sie_block->eca & VAR_0))
  return -VAR_1;






 VAR_7 = VAR_5->run->s.regs.gprs[0];
 VAR_9 = (VAR_7 >> 24) & 0xff;
 if (FUNC_0(VAR_9 != 0x03))
  return -VAR_1;


 if (VAR_5->arch.sie_block->gpsw.mask & VAR_4)
  return FUNC_2(VAR_5, VAR_2);



 if (VAR_7 & 0x007f0000UL)
  return FUNC_2(VAR_5, VAR_3);

 if (!FUNC_7(VAR_5->kvm, 15) && (VAR_7 & 0x00800000UL))
  return FUNC_2(VAR_5, VAR_3);

 if (!(VAR_5->kvm->arch.crypto.crycbd & 0x02) && (VAR_7 & 0x0000c0f0UL))
  return FUNC_2(VAR_5, VAR_3);



 if (!FUNC_7(VAR_5->kvm, 65))
  return FUNC_2(VAR_5, VAR_3);





 if (VAR_5->kvm->arch.crypto.pqap_hook) {
  if (!FUNC_8(VAR_5->kvm->arch.crypto.pqap_hook->owner))
   return -VAR_1;
  VAR_8 = VAR_5->kvm->arch.crypto.pqap_hook->hook(VAR_5);
  FUNC_5(VAR_5->kvm->arch.crypto.pqap_hook->owner);
  if (!VAR_8 && VAR_5->run->s.regs.gprs[1] & 0x00ff0000)
   FUNC_3(VAR_5, 3);
  return VAR_8;
 }





 VAR_6.response_code = 0x01;
 FUNC_4(&VAR_5->run->s.regs.gprs[1], &VAR_6, sizeof(VAR_6));
 FUNC_3(VAR_5, 3);
 return 0;
}
