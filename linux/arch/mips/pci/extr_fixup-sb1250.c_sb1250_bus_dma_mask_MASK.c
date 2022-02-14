
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sb1250_bus_dma_mask_exclude {int set; scalar_t__ start; scalar_t__ end; } ;
struct TYPE_6__ {int bus_dma_mask; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; TYPE_3__ dev; TYPE_2__* subordinate; TYPE_1__* bus; } ;
struct TYPE_5__ {scalar_t__ number; } ;
struct TYPE_4__ {scalar_t__ number; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_2, void *VAR_3)
{
 struct sb1250_bus_dma_mask_exclude *VAR_4 = VAR_3;
 bool VAR_5;
 bool VAR_6;

 VAR_5 = VAR_4->set && (VAR_2->bus->number >= VAR_4->start &&
     VAR_2->bus->number <= VAR_4->end);
 VAR_6 = !VAR_4->set && (VAR_2->vendor == VAR_1 &&
          VAR_2->device == VAR_0);

 if (VAR_5) {
  FUNC_1(&VAR_2->dev, "not disabling DAC for device");
 } else if (VAR_6) {
  VAR_4->start = VAR_2->subordinate->number;
  VAR_4->end = FUNC_2(VAR_2->subordinate);
  VAR_4->set = 1;
  FUNC_1(&VAR_2->dev, "not disabling DAC for [bus %02x-%02x]",
   VAR_4->start, VAR_4->end);
 } else {
  FUNC_1(&VAR_2->dev, "disabling DAC for device");
  VAR_2->dev.bus_dma_mask = FUNC_0(32);
 }

 return 0;
}
