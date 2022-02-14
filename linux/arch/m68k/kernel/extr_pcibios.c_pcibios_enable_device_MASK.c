
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct resource {int flags; scalar_t__ end; int start; } ;
struct pci_dev {int class; struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,int,int) ;

int FUNC_5(struct pci_dev *VAR_7, int VAR_8)
{
 struct resource *VAR_9;
 u16 VAR_10, VAR_11;
 int VAR_12;

 FUNC_1(VAR_7, VAR_4, &VAR_10);
 VAR_11 = VAR_10;

 for (VAR_12 = 0; VAR_12 < 6; VAR_12++) {

  if (!(VAR_8 & (1 << VAR_12)))
   continue;

  VAR_9 = VAR_7->resource + VAR_12;
  if (!VAR_9->start && VAR_9->end) {
   FUNC_3("PCI: Device %s not available because of resource collisions\n",
    FUNC_0(VAR_7));
   return -VAR_0;
  }
  if (VAR_9->flags & VAR_1)
   VAR_11 |= VAR_5;
  if (VAR_9->flags & VAR_2)
   VAR_11 |= VAR_6;
 }




 if ((VAR_7->class >> 16) == VAR_3)
  VAR_11 |= VAR_5 | VAR_6;


 if (VAR_11 != VAR_10) {
  FUNC_4("PCI: enabling device %s (0x%04x -> 0x%04x)\n",
   FUNC_0(VAR_7), VAR_10, VAR_11);
  FUNC_2(VAR_7, VAR_4, VAR_11);
 }
 return 0;
}
