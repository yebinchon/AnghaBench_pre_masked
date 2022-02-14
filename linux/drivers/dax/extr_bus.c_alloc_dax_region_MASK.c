
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int kobj; } ;
struct dax_region {unsigned long pfn_flags; int id; unsigned int align; int target_node; int kref; struct device* dev; int res; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,struct dax_region*) ;
 scalar_t__ FUNC_4 (struct device*,int ,struct dax_region*) ;
 int FUNC_5 (struct dax_region*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct dax_region* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,struct resource*,int) ;
 int FUNC_10 (struct resource*) ;
 scalar_t__ FUNC_11 (int *,int ) ;

struct dax_region *FUNC_12(struct device *VAR_3, int VAR_4,
  struct resource *VAR_5, int VAR_6, unsigned int VAR_7,
  unsigned long VAR_8)
{
 struct dax_region *VAR_9;






 if (FUNC_2(VAR_3)) {
  FUNC_1(VAR_3, "dax core failed to setup private data\n");
  return ((void*)0);
 }

 if (!FUNC_0(VAR_5->start, VAR_7)
   || !FUNC_0(FUNC_10(VAR_5), VAR_7))
  return ((void*)0);

 VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 FUNC_3(VAR_3, VAR_9);
 FUNC_9(&VAR_9->res, VAR_5, sizeof(*VAR_5));
 VAR_9->pfn_flags = VAR_8;
 FUNC_7(&VAR_9->kref);
 VAR_9->id = VAR_4;
 VAR_9->align = VAR_7;
 VAR_9->dev = VAR_3;
 VAR_9->target_node = VAR_6;
 if (FUNC_11(&VAR_3->kobj, VAR_1)) {
  FUNC_5(VAR_9);
  return ((void*)0);
 }

 FUNC_6(&VAR_9->kref);
 if (FUNC_4(VAR_3, VAR_2, VAR_9))
  return ((void*)0);
 return VAR_9;
}
