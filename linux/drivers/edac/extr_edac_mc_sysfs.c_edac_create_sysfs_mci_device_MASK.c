
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct attribute_group const** groups; int parent; int * type; } ;
struct mem_ctl_info {int tot_dimms; TYPE_1__ dev; struct dimm_info** dimms; int mc_idx; } ;
struct dimm_info {TYPE_1__ dev; int nr_pages; } ;
struct attribute_group {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct mem_ctl_info*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct mem_ctl_info*) ;
 int FUNC_7 (struct mem_ctl_info*) ;
 int FUNC_8 (struct mem_ctl_info*,struct dimm_info*,int) ;
 int FUNC_9 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

int FUNC_12(struct mem_ctl_info *VAR_2,
     const struct attribute_group **VAR_3)
{
 int VAR_4, VAR_5;


 VAR_2->dev.type = &VAR_0;
 FUNC_4(&VAR_2->dev);

 VAR_2->dev.parent = VAR_1;
 VAR_2->dev.groups = VAR_3;
 FUNC_2(&VAR_2->dev, "mc%d", VAR_2->mc_idx);
 FUNC_1(&VAR_2->dev, VAR_2);
 FUNC_10(&VAR_2->dev);

 VAR_5 = FUNC_3(&VAR_2->dev);
 if (VAR_5 < 0) {
  FUNC_9(1, "failure: create device %s\n", FUNC_0(&VAR_2->dev));
  FUNC_11(&VAR_2->dev);
  return VAR_5;
 }

 FUNC_9(0, "device %s created\n", FUNC_0(&VAR_2->dev));




 for (VAR_4 = 0; VAR_4 < VAR_2->tot_dimms; VAR_4++) {
  struct dimm_info *VAR_6 = VAR_2->dimms[VAR_4];

  if (!VAR_6->nr_pages)
   continue;

  VAR_5 = FUNC_8(VAR_2, VAR_6, VAR_4);
  if (VAR_5)
   goto fail_unregister_dimm;
 }







 FUNC_7(VAR_2);
 return 0;

fail_unregister_dimm:
 for (VAR_4--; VAR_4 >= 0; VAR_4--) {
  struct dimm_info *VAR_7 = VAR_2->dimms[VAR_4];
  if (!VAR_7->nr_pages)
   continue;

  FUNC_5(&VAR_7->dev);
 }
 FUNC_5(&VAR_2->dev);

 return VAR_5;
}
