
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {int nr_csrows; struct csrow_info** csrows; } ;
struct dimm_info {int nr_pages; int grain; int edac_mode; int dtype; int mtype; } ;
struct csrow_info {int first_page; int last_page; TYPE_1__** channels; } ;
struct TYPE_2__ {struct dimm_info* dimm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int,int,...) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static void FUNC_4(struct mem_ctl_info *VAR_7, struct pci_dev *VAR_8,
   u8 VAR_9)
{
 struct csrow_info *VAR_10;
 struct dimm_info *VAR_11;
 int VAR_12;
 u8 VAR_13;
 u32 VAR_14, VAR_15;
 u32 VAR_16, VAR_17, VAR_18;

 VAR_17 = FUNC_1(VAR_9);
 VAR_16 = VAR_9 & FUNC_0(4);
 VAR_15 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_7->nr_csrows; VAR_12++) {
  VAR_10 = VAR_7->csrows[VAR_12];
  VAR_11 = VAR_10->channels[0]->dimm;


  FUNC_3(VAR_8, VAR_6 + VAR_12, &VAR_13);

  FUNC_2(1, "Row=%d DRBA = %#0x\n", VAR_12, VAR_13);

  VAR_14 = ((u32) VAR_13 << 24);


  FUNC_2(1, "Row=%d, Boundary Address=%#0x, Last = %#0x\n",
    VAR_12, VAR_14, VAR_15);


  if (VAR_14 == VAR_15)
   continue;

  VAR_18 = VAR_15;

  VAR_10->first_page = VAR_18 >> VAR_5;
  VAR_10->last_page = (VAR_14 >> VAR_5) - 1;

  VAR_11->nr_pages = VAR_10->last_page - VAR_10->first_page + 1;


  VAR_11->grain = 1 << 14;
  VAR_11->mtype = VAR_16 ? VAR_4 : VAR_3;

  VAR_11->dtype = VAR_0;


  VAR_11->edac_mode = VAR_17 ? VAR_2 : VAR_1;
  VAR_15 = VAR_14;
 }
}
