
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct patb_entry {int patb1; int patb0; } ;
struct kvm_nested_guest {int l1_lpid; void* process_table; void* l1_gr_to_hr; struct kvm* l1_host; } ;
struct TYPE_2__ {int l1_ptcr; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int ptbl_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct kvm*,unsigned long,struct patb_entry*,int) ;
 int FUNC_2 (struct kvm_nested_guest*) ;

__attribute__((used)) static void FUNC_3(struct kvm_nested_guest *VAR_3)
{
 int VAR_4;
 struct patb_entry VAR_5;
 unsigned long VAR_6;
 struct kvm *VAR_7 = VAR_3->l1_host;

 VAR_4 = -VAR_0;
 VAR_6 = (VAR_7->arch.l1_ptcr & VAR_1) + (VAR_3->l1_lpid << 4);
 if (VAR_3->l1_lpid < (1ul << ((VAR_7->arch.l1_ptcr & VAR_2) + 8)))
  VAR_4 = FUNC_1(VAR_7, VAR_6,
         &VAR_5, sizeof(VAR_5));
 if (VAR_4) {
  VAR_3->l1_gr_to_hr = 0;
  VAR_3->process_table = 0;
 } else {
  VAR_3->l1_gr_to_hr = FUNC_0(VAR_5.patb0);
  VAR_3->process_table = FUNC_0(VAR_5.patb1);
 }
 FUNC_2(VAR_3);
}
