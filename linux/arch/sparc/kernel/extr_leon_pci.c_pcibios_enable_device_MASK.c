
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct resource {int flags; } ;
struct pci_dev {struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_dev*,char*,int ,int ) ;
 int FUNC_1 (struct pci_dev*,int ,int *) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;

int FUNC_3(struct pci_dev *VAR_6, int VAR_7)
{
 u16 VAR_8, VAR_9;
 int VAR_10;

 FUNC_1(VAR_6, VAR_2, &VAR_8);
 VAR_9 = VAR_8;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  struct resource *VAR_11 = &VAR_6->resource[VAR_10];


  if (!(VAR_7 & (1<<VAR_10)))
   continue;

  if (VAR_11->flags & VAR_0)
   VAR_8 |= VAR_3;
  if (VAR_11->flags & VAR_1)
   VAR_8 |= VAR_4;
 }

 if (VAR_8 != VAR_9) {
  FUNC_0(VAR_6, "enabling device (%04x -> %04x)\n", VAR_9, VAR_8);
  FUNC_2(VAR_6, VAR_2, VAR_8);
 }
 return 0;
}
