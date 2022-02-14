
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int dummy; } ;
struct dm_dev {struct dax_device* dax_dev; } ;
struct dax_device {int dummy; } ;
typedef int sector_t ;


 scalar_t__ FUNC_0 (struct dax_device*) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_0,
       struct dm_dev *VAR_1, sector_t VAR_2,
       sector_t VAR_3, void *VAR_4)
{
 struct dax_device *VAR_5 = VAR_1->dax_dev;

 if (!VAR_5)
  return 0;

 if (FUNC_0(VAR_5))
  return 1;
 return 0;
}
