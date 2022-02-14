
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_dax {struct dax_region* region; } ;
struct dax_region {int target_node; } ;



__attribute__((used)) static int FUNC_0(struct dev_dax *VAR_0)
{
 struct dax_region *VAR_1 = VAR_0->region;

 return VAR_1->target_node;
}
