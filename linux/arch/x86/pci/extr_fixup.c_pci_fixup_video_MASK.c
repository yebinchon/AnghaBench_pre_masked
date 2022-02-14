
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct resource {int start; int end; int flags; scalar_t__ parent; } ;
struct pci_dev {int dev; struct resource* resource; struct pci_bus* bus; } ;
struct pci_bus {struct pci_bus* parent; struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int *,char*,struct resource*) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (struct resource*) ;
 struct pci_dev* FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_9)
{
 struct pci_dev *VAR_10;
 struct pci_bus *VAR_11;
 u16 VAR_12;
 struct resource *VAR_13;


 VAR_11 = VAR_9->bus;
 while (VAR_11) {
  VAR_10 = VAR_11->self;
  if (VAR_10 && (FUNC_2(VAR_10))) {
   FUNC_3(VAR_10, VAR_3,
      &VAR_12);
   if (!(VAR_12 & VAR_4))
    return;
  }
  VAR_11 = VAR_11->parent;
 }
 if (!FUNC_5() || VAR_9 == FUNC_5()) {
  FUNC_3(VAR_9, VAR_5, &VAR_12);
  if (VAR_12 & (VAR_6 | VAR_7)) {
   VAR_13 = &VAR_9->resource[VAR_8];

   FUNC_1(VAR_9);
   if (VAR_13->parent)
    FUNC_4(VAR_13);

   VAR_13->start = 0xC0000;
   VAR_13->end = VAR_13->start + 0x20000 - 1;
   VAR_13->flags = VAR_0 | VAR_2 |
         VAR_1;
   FUNC_0(&VAR_9->dev, "Video device with shadowed ROM at %pR\n",
     VAR_13);
  }
 }
}
