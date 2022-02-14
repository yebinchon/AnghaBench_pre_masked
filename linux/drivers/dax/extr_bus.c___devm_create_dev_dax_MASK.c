
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_rdev; } ;
struct device {int release; int groups; struct device* parent; int class; int * bus; int devt; } ;
struct dev_pagemap {int dummy; } ;
struct dev_dax {int target_node; struct dax_region* region; struct dax_device* dax_dev; struct device dev; int pgmap; } ;
struct dax_region {struct device* dev; int id; int kref; int target_node; } ;
struct dax_device {int dummy; } ;
typedef enum dev_dax_subsys { ____Placeholder_dev_dax_subsys } dev_dax_subsys ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dev_dax* FUNC_0 (int) ;
 int VAR_4 ;
 struct dax_device* FUNC_1 (struct dev_dax*,int *,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct inode* FUNC_2 (struct dax_device*) ;
 int VAR_8 ;
 int FUNC_3 (struct device*,char*,int ,int) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int ,struct device*) ;
 int FUNC_7 (struct dev_dax*) ;
 int FUNC_8 (struct dax_device*) ;
 int FUNC_9 (struct dev_dax*) ;
 int FUNC_10 (int *) ;
 struct dev_dax* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,struct dev_pagemap*,int) ;
 int FUNC_13 (struct device*) ;
 int VAR_9 ;

struct dev_dax *FUNC_14(struct dax_region *VAR_10, int VAR_11,
  struct dev_pagemap *VAR_12, enum dev_dax_subsys VAR_13)
{
 struct device *VAR_14 = VAR_10->dev;
 struct dax_device *VAR_15;
 struct dev_dax *VAR_16;
 struct inode *VAR_17;
 struct device *VAR_18;
 int VAR_19 = -VAR_3;

 if (VAR_11 < 0)
  return FUNC_0(-VAR_2);

 VAR_16 = FUNC_11(sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return FUNC_0(-VAR_3);

 FUNC_12(&VAR_16->pgmap, VAR_12, sizeof(*VAR_12));





 VAR_15 = FUNC_1(VAR_16, ((void*)0), ((void*)0), VAR_0);
 if (!VAR_15)
  goto err;


 FUNC_8(VAR_15);


 VAR_18 = &VAR_16->dev;
 FUNC_5(VAR_18);

 VAR_16->dax_dev = VAR_15;
 VAR_16->region = VAR_10;
 VAR_16->target_node = VAR_10->target_node;
 FUNC_10(&VAR_10->kref);

 VAR_17 = FUNC_2(VAR_15);
 VAR_18->devt = VAR_17->i_rdev;
 if (VAR_13 == VAR_1)
  VAR_18->bus = &VAR_6;
 else
  VAR_18->class = VAR_7;
 VAR_18->parent = VAR_14;
 VAR_18->groups = VAR_5;
 VAR_18->release = VAR_8;
 FUNC_3(VAR_18, "dax%d.%d", VAR_10->id, VAR_11);

 VAR_19 = FUNC_4(VAR_18);
 if (VAR_19) {
  FUNC_9(VAR_16);
  FUNC_13(VAR_18);
  return FUNC_0(VAR_19);
 }

 VAR_19 = FUNC_6(VAR_10->dev, VAR_9, VAR_18);
 if (VAR_19)
  return FUNC_0(VAR_19);

 return VAR_16;

 err:
 FUNC_7(VAR_16);

 return FUNC_0(VAR_19);
}
