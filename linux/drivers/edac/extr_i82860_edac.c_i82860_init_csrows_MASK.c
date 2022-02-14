
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {int nr_csrows; struct csrow_info** csrows; } ;
struct dimm_info {unsigned long nr_pages; int grain; int edac_mode; int dtype; int mtype; } ;
struct csrow_info {unsigned long first_page; unsigned long last_page; TYPE_1__** channels; } ;
struct TYPE_2__ {struct dimm_info* dimm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*,int,unsigned long) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_9, struct pci_dev *VAR_10)
{
 unsigned long VAR_11;
 u16 VAR_12;
 u16 VAR_13;
 u32 VAR_14;
 struct csrow_info *VAR_15;
 struct dimm_info *VAR_16;
 int VAR_17;

 FUNC_1(VAR_10, VAR_6, &VAR_12);
 VAR_12 = VAR_12 & 0x180;
 VAR_11 = 0;






 for (VAR_17 = 0; VAR_17 < VAR_9->nr_csrows; VAR_17++) {
  VAR_15 = VAR_9->csrows[VAR_17];
  VAR_16 = VAR_15->channels[0]->dimm;

  FUNC_1(VAR_10, VAR_3 + VAR_17 * 2, &VAR_13);
  VAR_14 = (VAR_13 & VAR_4) <<
   (VAR_5 - VAR_8);
  FUNC_0(3, "(%d) cumul_size 0x%x\n", VAR_17, VAR_14);

  if (VAR_14 == VAR_11)
   continue;

  VAR_15->first_page = VAR_11;
  VAR_15->last_page = VAR_14 - 1;
  VAR_16->nr_pages = VAR_14 - VAR_11;
  VAR_11 = VAR_14;
  VAR_16->grain = 1 << 12;
  VAR_16->mtype = VAR_7;
  VAR_16->dtype = VAR_0;
  VAR_16->edac_mode = VAR_12 ? VAR_2 : VAR_1;
 }
}
