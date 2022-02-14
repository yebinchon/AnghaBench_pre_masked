
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {int nr_csrows; int mc_idx; struct csrow_info** csrows; } ;
struct dimm_info {int nr_pages; int grain; int mtype; int edac_mode; int dtype; } ;
struct csrow_info {int first_page; int last_page; TYPE_1__** channels; } ;
typedef enum mem_type { ____Placeholder_mem_type } mem_type ;
typedef enum edac_type { ____Placeholder_edac_type } edac_type ;
struct TYPE_2__ {struct dimm_info* dimm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ,int,int,...) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_4,
    struct pci_dev *VAR_5,
    enum edac_type VAR_6,
    enum mem_type VAR_7)
{
 struct csrow_info *VAR_8;
 struct dimm_info *VAR_9;
 int VAR_10;
 u8 VAR_11, VAR_12;
 u32 VAR_13, VAR_14, VAR_15;

 FUNC_1(VAR_5, VAR_1, &VAR_12);
 VAR_15 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_4->nr_csrows; VAR_10++) {
  VAR_8 = VAR_4->csrows[VAR_10];
  VAR_9 = VAR_8->channels[0]->dimm;

  FUNC_1(VAR_5, VAR_2 + VAR_10, &VAR_11);
  FUNC_0(1, "MC%d: Row=%d DRB = %#0x\n",
    VAR_4->mc_idx, VAR_10, VAR_11);
  VAR_14 = ((u32) VAR_11 << 23);

  FUNC_0(1, "MC%d: Row=%d, Boundary Address=%#0x, Last = %#0x\n",
    VAR_4->mc_idx, VAR_10, VAR_14,
    VAR_15);


  if (VAR_15 && !VAR_14)
   VAR_14 = 1UL << 31;


  if (VAR_14 == VAR_15)
   continue;
  VAR_13 = VAR_15;
  VAR_8->first_page = VAR_13 >> VAR_3;
  VAR_8->last_page = (VAR_14 >> VAR_3) - 1;
  VAR_9->nr_pages = VAR_8->last_page - VAR_8->first_page + 1;

  VAR_9->grain = 1 << 12;
  VAR_9->mtype = VAR_7;

  VAR_9->dtype = VAR_0;

  VAR_9->edac_mode = VAR_6;
  VAR_15 = VAR_14;
 }
}
