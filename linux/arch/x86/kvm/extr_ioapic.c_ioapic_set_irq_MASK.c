
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ trig_mode; } ;
union kvm_ioapic_redirect_entry {int bits; TYPE_1__ fields; } ;
typedef int u32 ;
struct kvm_ioapic {int irr; int irr_delivered; union kvm_ioapic_redirect_entry* redirtbl; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct kvm_ioapic*,unsigned int,int) ;
 scalar_t__ FUNC_1 (struct kvm_ioapic*) ;
 int FUNC_2 (int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct kvm_ioapic *VAR_2, unsigned int VAR_3,
  int VAR_4, bool VAR_5)
{
 union kvm_ioapic_redirect_entry VAR_6;
 u32 VAR_7 = 1 << VAR_3;
 u32 VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = VAR_2->redirtbl[VAR_3];
 VAR_9 = (VAR_6.fields.trig_mode == VAR_0);

 if (!VAR_4) {
  VAR_2->irr &= ~VAR_7;
  VAR_10 = 1;
  goto out;
 }
 if (VAR_3 == VAR_1 && VAR_5 &&
  FUNC_1(VAR_2)) {
  VAR_10 = 0;
  goto out;
 }

 VAR_8 = VAR_2->irr;
 VAR_2->irr |= VAR_7;
 if (VAR_9) {
  VAR_2->irr_delivered &= ~VAR_7;
  if (VAR_8 == VAR_2->irr) {
   VAR_10 = 0;
   goto out;
  }
 }

 VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_5);

out:
 FUNC_2(VAR_6.bits, VAR_3, VAR_10 == 0);
 return VAR_10;
}
