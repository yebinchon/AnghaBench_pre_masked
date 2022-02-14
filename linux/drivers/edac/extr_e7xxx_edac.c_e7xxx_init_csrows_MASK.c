
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {int nr_csrows; int edac_cap; struct csrow_info** csrows; } ;
struct dimm_info {int nr_pages; int grain; int edac_mode; int dtype; int mtype; } ;
struct csrow_info {unsigned long first_page; int last_page; TYPE_1__** channels; } ;
typedef enum edac_type { ____Placeholder_edac_type } edac_type ;
struct TYPE_2__ {struct dimm_info* dimm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,char*,int,int) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static void FUNC_5(struct mem_ctl_info *VAR_11, struct pci_dev *VAR_12,
   int VAR_13, u32 VAR_14)
{
 unsigned long VAR_15;
 int VAR_16, VAR_17;
 u8 VAR_18;
 u32 VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;
 struct csrow_info *VAR_26;
 struct dimm_info *VAR_27;
 enum edac_type VAR_28;

 FUNC_4(VAR_12, VAR_2, &VAR_19);
 VAR_22 = FUNC_1(VAR_14, VAR_13);
 VAR_23 = FUNC_0(VAR_14, VAR_13);
 VAR_24 = (VAR_14 >> 20) & 0x3;
 VAR_15 = 0;






 for (VAR_16 = 0; VAR_16 < VAR_11->nr_csrows; VAR_16++) {

  VAR_25 = (VAR_19 >> (VAR_16 * 4 + 3)) & 0x1;
  VAR_26 = VAR_11->csrows[VAR_16];

  FUNC_3(VAR_12, VAR_3 + VAR_16, &VAR_18);

  VAR_20 = VAR_18 << (25 + VAR_23 - VAR_10);
  FUNC_2(3, "(%d) cumul_size 0x%x\n", VAR_16, VAR_20);
  if (VAR_20 == VAR_15)
   continue;

  VAR_26->first_page = VAR_15;
  VAR_26->last_page = VAR_20 - 1;
  VAR_21 = VAR_20 - VAR_15;
  VAR_15 = VAR_20;





  if (VAR_24) {
   if (VAR_22 && VAR_25) {
    VAR_28 = VAR_7;
    VAR_11->edac_cap |= VAR_4;
   } else {
    VAR_28 = VAR_8;
    VAR_11->edac_cap |= VAR_5;
   }
  } else
   VAR_28 = VAR_6;

  for (VAR_17 = 0; VAR_17 < VAR_22 + 1; VAR_17++) {
   VAR_27 = VAR_26->channels[VAR_17]->dimm;

   VAR_27->nr_pages = VAR_21 / (VAR_22 + 1);
   VAR_27->grain = 1 << 12;
   VAR_27->mtype = VAR_9;
   VAR_27->dtype = VAR_25 ? VAR_0 : VAR_1;
   VAR_27->edac_mode = VAR_28;
  }
 }
}
