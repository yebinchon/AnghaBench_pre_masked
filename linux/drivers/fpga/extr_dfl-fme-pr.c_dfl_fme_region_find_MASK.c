
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpga_region {int dummy; } ;
struct dfl_fme_region {TYPE_1__* region; } ;
struct dfl_fme {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 struct dfl_fme_region* FUNC_0 (struct dfl_fme*,int) ;
 int VAR_0 ;
 struct fpga_region* FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static struct fpga_region *FUNC_2(struct dfl_fme *VAR_1, int VAR_2)
{
 struct dfl_fme_region *VAR_3;
 struct fpga_region *VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_1(((void*)0), &VAR_3->region->dev,
     VAR_0);
 if (!VAR_4)
  return ((void*)0);

 return VAR_4;
}
