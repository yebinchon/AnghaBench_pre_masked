
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* resource; } ;
struct TYPE_2__ {scalar_t__ start; int end; } ;



__attribute__((used)) static void FUNC_0(struct pci_dev *VAR_0)
{
 VAR_0->resource[0].end -= VAR_0->resource[0].start;
 VAR_0->resource[0].start = 0;
}
