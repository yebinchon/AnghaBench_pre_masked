
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct nd_region {int target_node; } ;
struct nd_pfn_sb {int align; int dataoff; } ;
struct nd_pfn {struct nd_pfn_sb* pfn_sb; } ;
struct TYPE_2__ {int start; } ;
struct nd_namespace_io {TYPE_1__ res; } ;
struct nd_namespace_common {int dev; } ;
struct nd_dax {struct nd_pfn nd_pfn; } ;
struct device {int parent; } ;
struct dev_pagemap {int res; } ;
struct dev_dax {int dummy; } ;
struct dax_region {int dummy; } ;
typedef scalar_t__ resource_size_t ;
typedef int res ;
typedef enum dev_dax_subsys { ____Placeholder_dev_dax_subsys } dev_dax_subsys ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dev_dax* FUNC_0 (struct nd_namespace_common*) ;
 struct dev_dax* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct nd_namespace_common*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct dev_dax* FUNC_3 (struct dax_region*,int,struct dev_pagemap*,int) ;
 struct dax_region* FUNC_4 (struct device*,int,struct resource*,int ,int ,int) ;
 int FUNC_5 (struct dax_region*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,struct nd_namespace_io*) ;
 int FUNC_9 (struct device*,struct nd_namespace_io*) ;
 int FUNC_10 (struct device*,int ,scalar_t__,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct resource*,int *,int) ;
 struct nd_namespace_common* FUNC_14 (struct device*) ;
 int FUNC_15 (struct nd_pfn*,struct dev_pagemap*) ;
 int FUNC_16 (int ,char*,int*,int*) ;
 struct nd_dax* FUNC_17 (struct device*) ;
 struct nd_namespace_io* FUNC_18 (int *) ;
 struct nd_region* FUNC_19 (int ) ;

struct dev_dax *FUNC_20(struct device *VAR_5, enum dev_dax_subsys VAR_6)
{
 struct resource VAR_7;
 int VAR_8, VAR_9, VAR_10;
 resource_size_t VAR_11;
 struct nd_pfn_sb *VAR_12;
 struct dev_dax *VAR_13;
 struct nd_namespace_io *VAR_14;
 struct dax_region *VAR_15;
 struct dev_pagemap VAR_16 = { };
 struct nd_namespace_common *VAR_17;
 struct nd_dax *VAR_18 = FUNC_17(VAR_5);
 struct nd_pfn *VAR_19 = &VAR_18->nd_pfn;
 struct nd_region *VAR_20 = FUNC_19(VAR_5->parent);

 VAR_17 = FUNC_14(VAR_5);
 if (FUNC_2(VAR_17))
  return FUNC_0(VAR_17);
 VAR_14 = FUNC_18(&VAR_17->dev);


 VAR_8 = FUNC_9(VAR_5, VAR_14);
 if (VAR_8)
  return FUNC_1(VAR_8);
 VAR_8 = FUNC_15(VAR_19, &VAR_16);
 if (VAR_8)
  return FUNC_1(VAR_8);
 FUNC_8(VAR_5, VAR_14);


 VAR_12 = VAR_19->pfn_sb;
 VAR_11 = FUNC_12(VAR_12->dataoff);
 if (!FUNC_10(VAR_5, VAR_14->res.start, VAR_11,
    FUNC_6(&VAR_17->dev))) {
  FUNC_7(VAR_5, "could not reserve metadata\n");
  return FUNC_1(-VAR_0);
 }

 VAR_8 = FUNC_16(FUNC_6(&VAR_17->dev), "namespace%d.%d", &VAR_10, &VAR_9);
 if (VAR_8 != 2)
  return FUNC_1(-VAR_1);


 FUNC_13(&VAR_7, &VAR_16.res, sizeof(VAR_7));
 VAR_7.start += VAR_11;
 VAR_15 = FUNC_4(VAR_5, VAR_10, &VAR_7,
   VAR_20->target_node, FUNC_11(VAR_12->align),
   VAR_3|VAR_4);
 if (!VAR_15)
  return FUNC_1(-VAR_2);

 VAR_13 = FUNC_3(VAR_15, VAR_9, &VAR_16, VAR_6);


 FUNC_5(VAR_15);

 return VAR_13;
}
