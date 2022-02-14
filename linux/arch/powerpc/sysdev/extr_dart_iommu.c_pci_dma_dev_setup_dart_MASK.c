
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dma_offset; } ;
struct TYPE_5__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_3)
{
 if (VAR_1 && FUNC_0(&VAR_3->dev))
  VAR_3->dev.archdata.dma_offset = VAR_0;
 FUNC_1(&VAR_3->dev, &VAR_2);
}
