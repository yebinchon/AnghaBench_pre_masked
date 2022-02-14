
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {int nr_csrows; struct csrow_info** csrows; } ;
struct dimm_info {int nr_pages; int grain; int edac_mode; int dtype; int mtype; } ;
struct csrow_info {int first_page; int last_page; int page_mask; TYPE_1__** channels; } ;
typedef enum edac_type { ____Placeholder_edac_type } edac_type ;
struct TYPE_2__ {struct dimm_info* dimm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_6, struct pci_dev *VAR_7,
   enum edac_type VAR_8)
{
 struct csrow_info *VAR_9;
 struct dimm_info *VAR_10;
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_6->nr_csrows; VAR_15++) {
  VAR_9 = VAR_6->csrows[VAR_15];
  VAR_10 = VAR_9->channels[0]->dimm;


  FUNC_1(VAR_7,
    VAR_1 + (VAR_15 * 4), &VAR_11);

  if (!(VAR_11 & FUNC_0(0)))
   continue;

  VAR_12 = VAR_11 & 0xff800000UL;
  VAR_13 = ((VAR_11 & 0xff80) << 16) | 0x7fffffUL;
  FUNC_1(VAR_7, VAR_0, &VAR_14);
  VAR_9->first_page = VAR_12 >> VAR_5;
  VAR_10->nr_pages = (VAR_13 + 1) >> VAR_5;
  VAR_9->last_page = VAR_9->first_page + VAR_10->nr_pages - 1;
  VAR_9->page_mask = VAR_13 >> VAR_5;
  VAR_10->grain = VAR_10->nr_pages << VAR_5;
  VAR_10->mtype = VAR_4;
  VAR_10->dtype = ((VAR_14 >> VAR_15) & 0x1) ? VAR_3 : VAR_2;
  VAR_10->edac_mode = VAR_8;
 }
}
