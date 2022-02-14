
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {int nr_csrows; int edac_cap; struct csrow_info** csrows; } ;
struct dimm_info {int nr_pages; int grain; int edac_mode; int dtype; int mtype; } ;
struct csrow_info {unsigned long first_page; int last_page; int nr_channels; TYPE_1__** channels; } ;
typedef enum edac_type { ____Placeholder_edac_type } edac_type ;
struct TYPE_2__ {struct dimm_info* dimm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int,int) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 size_t FUNC_4 (struct mem_ctl_info*,int) ;

__attribute__((used)) static void FUNC_5(struct mem_ctl_info *VAR_12, struct pci_dev *VAR_13,
   u16 VAR_14)
{
 struct csrow_info *VAR_15;
 enum edac_type VAR_16;
 unsigned long VAR_17;
 int VAR_18, VAR_19, VAR_20;
 int VAR_21;
 int VAR_22;
 u8 VAR_23;
 u32 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;

 VAR_24 = 0;
 for (VAR_18 = 0; VAR_18 < 4; VAR_18++) {
  u8 VAR_29;
  FUNC_2(VAR_13, VAR_2 + VAR_18, &VAR_29);
  VAR_24 |= VAR_29 << (VAR_18 * 8);
 }
 FUNC_3(VAR_13, VAR_4, &VAR_25);
 VAR_20 = FUNC_0(VAR_14) ? 1 : 0;
 VAR_21 = VAR_20 + 1;
 VAR_22 = (VAR_25 >> 20) & 0x3;






 for (VAR_17 = VAR_18 = 0; VAR_18 < VAR_12->nr_csrows; VAR_18++) {

  VAR_19 = (VAR_24 >> (VAR_18 * 4 + 2)) & 0x3;
  VAR_15 = VAR_12->csrows[FUNC_4(VAR_12, VAR_18)];

  VAR_19 = (VAR_19 == 2);
  FUNC_2(VAR_13, VAR_3 + VAR_18, &VAR_23);

  VAR_26 = VAR_23 << (25 + VAR_21 - VAR_11);
  FUNC_1(3, "(%d) cumul_size 0x%x\n", VAR_18, VAR_26);
  if (VAR_26 == VAR_17)
   continue;

  VAR_15->first_page = VAR_17;
  VAR_15->last_page = VAR_26 - 1;
  VAR_28 = VAR_26 - VAR_17;
  VAR_17 = VAR_26;





  if (VAR_22) {
   if (VAR_20 && VAR_19) {
    VAR_16 = VAR_8;
    VAR_12->edac_cap |= VAR_5;
   } else {
    VAR_16 = VAR_9;
    VAR_12->edac_cap |= VAR_6;
   }
  } else
   VAR_16 = VAR_7;
  for (VAR_27 = 0; VAR_27 < VAR_15->nr_channels; VAR_27++) {
   struct dimm_info *VAR_30 = VAR_15->channels[VAR_27]->dimm;

   FUNC_1(3, "Initializing rank at (%i,%i)\n", VAR_18, VAR_27);
   VAR_30->nr_pages = VAR_28 / VAR_15->nr_channels;
   VAR_30->grain = 1 << 12;
   VAR_30->mtype = VAR_10;
   VAR_30->dtype = VAR_19 ? VAR_0 : VAR_1;
   VAR_30->edac_mode = VAR_16;
  }
 }
}
