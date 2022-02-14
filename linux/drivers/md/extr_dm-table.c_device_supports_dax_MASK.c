
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int dummy; } ;
struct dm_dev {int bdev; int dax_dev; } ;
typedef int sector_t ;


 int FUNC_0 (int ,int ,int,int ,int ) ;

int FUNC_1(struct dm_target *VAR_0, struct dm_dev *VAR_1,
   sector_t VAR_2, sector_t VAR_3, void *VAR_4)
{
 int VAR_5 = *(int *) VAR_4;

 return FUNC_0(VAR_1->dax_dev, VAR_1->bdev, VAR_5,
           VAR_2, VAR_3);
}
