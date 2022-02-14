
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct bcma_drv_pci {TYPE_2__* core; } ;
struct bcma_bus {scalar_t__ hosttype; struct bcma_drv_pci* drv_pci; } ;
struct TYPE_3__ {int rev; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bcma_drv_pci*,int ,int ,int) ;

void FUNC_1(struct bcma_bus *VAR_4, bool VAR_5)
{
 struct bcma_drv_pci *VAR_6;
 u16 VAR_7;

 if (VAR_4->hosttype != VAR_3)
  return;

 VAR_6 = &VAR_4->drv_pci[0];

 if (VAR_6->core->id.rev >= 15 && VAR_6->core->id.rev <= 20) {
  VAR_7 = VAR_5 ? 0x74 : 0x7C;
  FUNC_0(VAR_6, VAR_0,
      VAR_1, 0x7F64);
  FUNC_0(VAR_6, VAR_0,
      VAR_2, VAR_7);
 } else if (VAR_6->core->id.rev >= 21 && VAR_6->core->id.rev <= 22) {
  VAR_7 = VAR_5 ? 0x75 : 0x7D;
  FUNC_0(VAR_6, VAR_0,
      VAR_1, 0x7E65);
  FUNC_0(VAR_6, VAR_0,
      VAR_2, VAR_7);
 }
}
