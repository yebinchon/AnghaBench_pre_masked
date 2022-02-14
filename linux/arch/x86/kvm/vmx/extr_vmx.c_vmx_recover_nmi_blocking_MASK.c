
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vcpu_vmx {int idt_vectoring_info; TYPE_1__* loaded_vmcs; } ;
struct TYPE_2__ {int nmi_known_unmasked; int entry_time; int vnmi_blocked_time; int soft_vnmi_blocked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct vcpu_vmx *VAR_9)
{
 u32 VAR_10;
 bool VAR_11;
 u8 VAR_12;
 bool VAR_13;

 VAR_13 = VAR_9->idt_vectoring_info & VAR_6;

 if (VAR_8) {
  if (VAR_9->loaded_vmcs->nmi_known_unmasked)
   return;




  VAR_10 = FUNC_4(VAR_7);
  VAR_11 = (VAR_10 & VAR_3) != 0;
  VAR_12 = VAR_10 & VAR_5;
  if ((VAR_10 & VAR_4) && VAR_11 &&
      VAR_12 != VAR_0 && !VAR_13)
   FUNC_5(VAR_1,
          VAR_2);
  else
   VAR_9->loaded_vmcs->nmi_known_unmasked =
    !(FUNC_4(VAR_1)
      & VAR_2);
 } else if (FUNC_3(VAR_9->loaded_vmcs->soft_vnmi_blocked))
  VAR_9->loaded_vmcs->vnmi_blocked_time +=
   FUNC_2(FUNC_1(FUNC_0(),
           VAR_9->loaded_vmcs->entry_time));
}
