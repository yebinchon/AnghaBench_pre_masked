
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* resource; int dev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{




 int VAR_2;

 FUNC_0(&VAR_1->dev, "Fixing base address flags\n");
 for(VAR_2 = 0; VAR_2 < 4; VAR_2++)
  VAR_1->resource[VAR_2].flags |= VAR_0;
}
