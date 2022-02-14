
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct resource {int flags; scalar_t__ end; int start; } ;
struct pci_dev {struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pci_dev*,char*) ;
 int FUNC_1 (struct pci_dev*,char*,int ,int ) ;
 int FUNC_2 (struct pci_dev*,int ,int *) ;
 int FUNC_3 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_9, int VAR_10)
{
 u16 VAR_11, VAR_12;
 int VAR_13;
 struct resource *VAR_14;

 FUNC_2(VAR_9, VAR_4, &VAR_11);
 VAR_12 = VAR_11;
 for (VAR_13=0; VAR_13 < VAR_7; VAR_13++) {

  if (!(VAR_10 & (1<<VAR_13)))
   continue;

  VAR_14 = &VAR_9->resource[VAR_13];
  if (!(VAR_14->flags & (VAR_1 | VAR_2)))
   continue;
  if ((VAR_13 == VAR_8) &&
    (!(VAR_14->flags & VAR_3)))
   continue;
  if (!VAR_14->start && VAR_14->end) {
   FUNC_0(VAR_9,
    "can't enable device: resource collisions\n");
   return -VAR_0;
  }
  if (VAR_14->flags & VAR_1)
   VAR_11 |= VAR_5;
  if (VAR_14->flags & VAR_2)
   VAR_11 |= VAR_6;
 }
 if (VAR_11 != VAR_12) {
  FUNC_1(VAR_9, "enabling device (%04x -> %04x)\n", VAR_12, VAR_11);
  FUNC_3(VAR_9, VAR_4, VAR_11);
 }
 return 0;
}
