
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pci_dev {scalar_t__ cfg_size; scalar_t__ devfn; TYPE_1__* resource; int bus; } ;
struct TYPE_2__ {int flags; scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_2 ;
 unsigned long FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct pci_dev*,unsigned long,scalar_t__*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;
 int VAR_7;

 if (!VAR_3)
  return;


 if (VAR_4->cfg_size < VAR_1 + 4)
  return;


 VAR_5 = FUNC_1(VAR_4->bus, VAR_4->devfn);
 if (!VAR_5 || FUNC_0(2, 0) == VAR_4->devfn ||
     FUNC_0(2, 2) == VAR_4->devfn)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  FUNC_2(VAR_4, VAR_5 + 8 + (VAR_7 * 4), &VAR_6);
  VAR_4->resource[VAR_7].end = VAR_4->resource[VAR_7].start + VAR_6 - 1;
  VAR_4->resource[VAR_7].flags |= VAR_0;
 }
}
