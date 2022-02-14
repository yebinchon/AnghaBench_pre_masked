
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dev_dax {struct dax_region* region; } ;
struct TYPE_2__ {unsigned long long start; } ;
struct dax_region {TYPE_1__ res; } ;



__attribute__((used)) static unsigned long long FUNC_0(struct dev_dax *VAR_0)
{
 struct dax_region *VAR_1 = VAR_0->region;

 return VAR_1->res.start;
}
