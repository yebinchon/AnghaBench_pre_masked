
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; int remote_irr; int delivery_status; int trig_mode; } ;
union kvm_ioapic_redirect_entry {int bits; TYPE_1__ fields; } ;
typedef int u64 ;
typedef int u32 ;
struct kvm_ioapic {int ioregsel; int id; int irr; int kvm; union kvm_ioapic_redirect_entry* redirtbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (struct kvm_ioapic*,unsigned int,int) ;
 int FUNC_1 (int ,int ,unsigned int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_ioapic *VAR_4, u32 VAR_5)
{
 unsigned VAR_6;
 bool VAR_7, VAR_8;
 int VAR_9, VAR_10;
 union kvm_ioapic_redirect_entry *VAR_11;

 switch (VAR_4->ioregsel) {
 case 128:

  break;

 case 130:
  VAR_4->id = (VAR_5 >> 24) & 0xf;
  break;

 case 129:
  break;

 default:
  VAR_6 = (VAR_4->ioregsel - 0x10) >> 1;

  if (VAR_6 >= VAR_2)
   return;
  VAR_11 = &VAR_4->redirtbl[VAR_6];
  VAR_7 = VAR_11->fields.mask;

  VAR_9 = VAR_11->fields.remote_irr;
  VAR_10 = VAR_11->fields.delivery_status;
  if (VAR_4->ioregsel & 1) {
   VAR_11->bits &= 0xffffffff;
   VAR_11->bits |= (u64) VAR_5 << 32;
  } else {
   VAR_11->bits &= ~0xffffffffULL;
   VAR_11->bits |= (u32) VAR_5;
  }
  VAR_11->fields.remote_irr = VAR_9;
  VAR_11->fields.delivery_status = VAR_10;







  if (VAR_11->fields.trig_mode == VAR_0)
   VAR_11->fields.remote_irr = 0;

  VAR_8 = VAR_11->fields.mask;
  if (VAR_7 != VAR_8)
   FUNC_1(VAR_4->kvm, VAR_3, VAR_6, VAR_8);
  if (VAR_11->fields.trig_mode == VAR_1
      && VAR_4->irr & (1 << VAR_6))
   FUNC_0(VAR_4, VAR_6, 0);
  FUNC_2(VAR_4->kvm);
  break;
 }
}
