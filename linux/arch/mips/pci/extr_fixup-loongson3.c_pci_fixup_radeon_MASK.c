
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int flags; scalar_t__ start; scalar_t__ end; scalar_t__ parent; } ;
struct pci_dev {int dev; struct resource* resource; } ;
struct TYPE_2__ {scalar_t__ vgabios_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,char*,size_t,struct resource*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct resource*) ;
 scalar_t__ FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_5)
{
 struct resource *VAR_6 = &VAR_5->resource[VAR_3];

 if (VAR_6->start)
  return;

 if (!VAR_4.vgabios_addr)
  return;

 FUNC_1(VAR_5);
 if (VAR_6->parent)
  FUNC_2(VAR_6);

 VAR_6->start = FUNC_3((void *) VAR_4.vgabios_addr);
 VAR_6->end = VAR_6->start + 256*1024 - 1;
 VAR_6->flags = VAR_0 | VAR_2 |
       VAR_1;

 FUNC_0(&VAR_5->dev, "BAR %d: assigned %pR for Radeon ROM\n",
   VAR_3, VAR_6);
}
