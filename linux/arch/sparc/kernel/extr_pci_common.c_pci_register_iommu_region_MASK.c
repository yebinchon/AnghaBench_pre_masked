
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {char* name; int flags; scalar_t__ start; scalar_t__ end; } ;
struct TYPE_6__ {scalar_t__ start; } ;
struct pci_pbm_info {int name; TYPE_3__ mem_space; TYPE_2__* op; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct resource*) ;
 struct resource* FUNC_1 (int,int ) ;
 scalar_t__* FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,struct resource*) ;

__attribute__((used)) static void FUNC_5(struct pci_pbm_info *VAR_2)
{
 const u32 *VAR_3 = FUNC_2(VAR_2->op->dev.of_node, "virtual-dma",
       ((void*)0));

 if (VAR_3) {
  struct resource *VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);

  if (!VAR_4) {
   FUNC_3("%s: Cannot allocate IOMMU resource.\n",
    VAR_2->name);
   return;
  }
  VAR_4->name = "IOMMU";
  VAR_4->start = VAR_2->mem_space.start + (unsigned long) VAR_3[0];
  VAR_4->end = VAR_4->start + (unsigned long) VAR_3[1] - 1UL;
  VAR_4->flags = VAR_1;
  if (FUNC_4(&VAR_2->mem_space, VAR_4)) {
   FUNC_3("%s: Unable to request IOMMU resource.\n",
    VAR_2->name);
   FUNC_0(VAR_4);
  }
 }
}
