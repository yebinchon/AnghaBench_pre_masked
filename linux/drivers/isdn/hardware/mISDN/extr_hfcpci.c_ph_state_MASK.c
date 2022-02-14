
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ protocol; scalar_t__ nt_timer; } ;
struct hfc_pci {TYPE_1__ hw; } ;
struct dchannel {int Flags; struct hfc_pci* hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dchannel*) ;
 int FUNC_1 (struct dchannel*) ;
 int FUNC_2 (struct dchannel*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct dchannel *VAR_2)
{
 struct hfc_pci *VAR_3 = VAR_2->hw;

 if (VAR_3->hw.protocol == VAR_1) {
  if (FUNC_3(VAR_0, &VAR_2->Flags) &&
      VAR_3->hw.nt_timer < 0)
   FUNC_0(VAR_2);
  else
   FUNC_1(VAR_2);
 } else
  FUNC_2(VAR_2);
}
