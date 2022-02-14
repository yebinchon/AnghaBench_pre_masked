
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct resource {int flags; scalar_t__ start; int end; scalar_t__ parent; } ;
struct pci_dev {int rom_base_reg; int dev; struct resource* resource; } ;
struct pci_check_idx_range {int start; int end; int member_1; int member_0; } ;


 int FUNC_0 (struct pci_check_idx_range*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int,struct resource*) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;
 int FUNC_7 (struct pci_dev*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_12, int VAR_13)
{
 int VAR_14, VAR_15, VAR_16;
 u16 VAR_17;
 struct resource *VAR_18;

 struct pci_check_idx_range VAR_19[] = {
  { VAR_10, VAR_11 },



 };

 FUNC_5(VAR_12, VAR_3, &VAR_17);
 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_19); VAR_16++)
  for (VAR_14 = VAR_19[VAR_16].start; VAR_14 <= VAR_19[VAR_16].end; VAR_14++) {
   VAR_18 = &VAR_12->resource[VAR_14];
   if (VAR_18->parent)
    continue;
   if (!VAR_18->start)
    continue;
   if (VAR_18->flags & VAR_0)
    VAR_15 = !(VAR_17 & VAR_4);
   else
    VAR_15 = !(VAR_17 & VAR_5);
   if (VAR_13 == VAR_15) {
    FUNC_1(&VAR_12->dev,
     "BAR %d: reserving %pr (d=%d, p=%d)\n",
     VAR_14, VAR_18, VAR_15, VAR_13);
    if (FUNC_3(VAR_12, VAR_14) < 0) {
     if (VAR_18->flags & VAR_1) {
      FUNC_2(&VAR_12->dev, "BAR %d %pR is immovable\n",
        VAR_14, VAR_18);
     } else {

      FUNC_7(VAR_12,
        VAR_14, VAR_18->start);
      VAR_18->end -= VAR_18->start;
      VAR_18->start = 0;
     }
    }
   }
  }
 if (!VAR_13) {
  VAR_18 = &VAR_12->resource[VAR_9];
  if (VAR_18->flags & VAR_2) {


   u32 VAR_20;
   FUNC_1(&VAR_12->dev, "disabling ROM %pR\n", VAR_18);
   VAR_18->flags &= ~VAR_2;
   FUNC_4(VAR_12, VAR_12->rom_base_reg, &VAR_20);
   FUNC_6(VAR_12, VAR_12->rom_base_reg,
      VAR_20 & ~VAR_8);
  }
 }
}
