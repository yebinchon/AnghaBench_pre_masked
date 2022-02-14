
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int tot_dimms; struct dimm_info** dimms; int debugfs; } ;
struct dimm_info {scalar_t__ nr_pages; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mem_ctl_info*) ;

void FUNC_5(struct mem_ctl_info *VAR_0)
{
 int VAR_1;

 FUNC_2(0, "\n");
 for (VAR_1 = 0; VAR_1 < VAR_0->tot_dimms; VAR_1++) {
  struct dimm_info *VAR_2 = VAR_0->dimms[VAR_1];
  if (VAR_2->nr_pages == 0)
   continue;
  FUNC_2(1, "unregistering device %s\n", FUNC_0(&VAR_2->dev));
  FUNC_1(&VAR_2->dev);
 }
}
