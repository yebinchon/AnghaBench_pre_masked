
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dm_io_region {int sector; int count; int bdev; } ;
struct dm_cache_migration {int k; TYPE_3__* op; struct cache* cache; } ;
struct cache {int sectors_per_block; int copier; TYPE_2__* cache_dev; TYPE_1__* origin_dev; } ;
struct TYPE_6__ {int cblock; int oblock; } ;
struct TYPE_5__ {int bdev; } ;
struct TYPE_4__ {int bdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct dm_io_region*,int,struct dm_io_region*,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dm_cache_migration *VAR_1, bool VAR_2)
{
 struct dm_io_region VAR_3, VAR_4;
 struct cache *VAR_5 = VAR_1->cache;

 VAR_3.bdev = VAR_5->origin_dev->bdev;
 VAR_3.sector = FUNC_2(VAR_1->op->oblock) * VAR_5->sectors_per_block;
 VAR_3.count = VAR_5->sectors_per_block;

 VAR_4.bdev = VAR_5->cache_dev->bdev;
 VAR_4.sector = FUNC_1(VAR_1->op->cblock) * VAR_5->sectors_per_block;
 VAR_4.count = VAR_5->sectors_per_block;

 if (VAR_2)
  FUNC_0(VAR_5->copier, &VAR_3, 1, &VAR_4, 0, VAR_0, &VAR_1->k);
 else
  FUNC_0(VAR_5->copier, &VAR_4, 1, &VAR_3, 0, VAR_0, &VAR_1->k);
}
