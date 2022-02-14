
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int int_m2; } ;
struct hfc_pci {TYPE_1__ hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hfc_pci*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct hfc_pci *VAR_2)
{
 VAR_2->hw.int_m2 &= ~((u_char)VAR_1);
 FUNC_0(VAR_2, VAR_0, VAR_2->hw.int_m2);
}
