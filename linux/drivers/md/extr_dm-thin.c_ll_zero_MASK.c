
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thin_c {TYPE_2__* pool; TYPE_1__* pool_dev; } ;
struct dm_thin_new_mapping {int dummy; } ;
struct dm_io_region {void* count; void* sector; int bdev; } ;
typedef void* sector_t ;
struct TYPE_4__ {int copier; } ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct dm_io_region*,int ,int ,struct dm_thin_new_mapping*) ;

__attribute__((used)) static void FUNC_1(struct thin_c *VAR_1, struct dm_thin_new_mapping *VAR_2,
      sector_t VAR_3, sector_t VAR_4)
{
 struct dm_io_region VAR_5;

 VAR_5.bdev = VAR_1->pool_dev->bdev;
 VAR_5.sector = VAR_3;
 VAR_5.count = VAR_4 - VAR_3;

 FUNC_0(VAR_1->pool->copier, 1, &VAR_5, 0, VAR_0, VAR_2);
}
