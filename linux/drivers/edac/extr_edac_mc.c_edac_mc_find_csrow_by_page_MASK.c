
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {int nr_csrows; int mc_idx; struct csrow_info** csrows; } ;
struct dimm_info {scalar_t__ nr_pages; } ;
struct csrow_info {int nr_channels; unsigned long first_page; unsigned long last_page; unsigned long page_mask; TYPE_1__** channels; } ;
struct TYPE_2__ {struct dimm_info* dimm; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,unsigned long,...) ;
 int FUNC_1 (struct mem_ctl_info*,int ,char*,unsigned long) ;

int FUNC_2(struct mem_ctl_info *VAR_1, unsigned long VAR_2)
{
 struct csrow_info **VAR_3 = VAR_1->csrows;
 int VAR_4, VAR_5, VAR_6, VAR_7;

 FUNC_0(1, "MC%d: 0x%lx\n", VAR_1->mc_idx, VAR_2);
 VAR_4 = -1;

 for (VAR_5 = 0; VAR_5 < VAR_1->nr_csrows; VAR_5++) {
  struct csrow_info *VAR_8 = VAR_3[VAR_5];
  VAR_7 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_8->nr_channels; VAR_6++) {
   struct dimm_info *VAR_9 = VAR_8->channels[VAR_6]->dimm;
   VAR_7 += VAR_9->nr_pages;
  }
  if (VAR_7 == 0)
   continue;

  FUNC_0(3, "MC%d: first(0x%lx) page(0x%lx) last(0x%lx) mask(0x%lx)\n",
    VAR_1->mc_idx,
    VAR_8->first_page, VAR_2, VAR_8->last_page,
    VAR_8->page_mask);

  if ((VAR_2 >= VAR_8->first_page) &&
      (VAR_2 <= VAR_8->last_page) &&
      ((VAR_2 & VAR_8->page_mask) ==
       (VAR_8->first_page & VAR_8->page_mask))) {
   VAR_4 = VAR_5;
   break;
  }
 }

 if (VAR_4 == -1)
  FUNC_1(VAR_1, VAR_0,
   "could not look up page error address %lx\n",
   (unsigned long)VAR_2);

 return VAR_4;
}
