
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef scalar_t__ u32 ;
struct pci_pbm_info {unsigned long ino_bitmap; TYPE_2__* op; scalar_t__ pci_last_busno; scalar_t__ pci_first_busno; } ;
struct TYPE_3__ {int of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 scalar_t__* FUNC_0 (int ,char*,int *) ;

void FUNC_1(struct pci_pbm_info *VAR_0)
{
 const u32 *VAR_1 = FUNC_0(VAR_0->op->dev.of_node, "bus-range", ((void*)0));

 VAR_0->pci_first_busno = VAR_1[0];
 VAR_0->pci_last_busno = VAR_1[1];

 VAR_1 = FUNC_0(VAR_0->op->dev.of_node, "ino-bitmap", ((void*)0));
 if (VAR_1) {
  VAR_0->ino_bitmap = (((u64)VAR_1[1] << 32UL) |
       ((u64)VAR_1[0] << 0UL));
 }
}
