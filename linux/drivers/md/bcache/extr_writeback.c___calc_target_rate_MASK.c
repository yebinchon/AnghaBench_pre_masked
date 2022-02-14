
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {struct cache_set* c; } ;
struct cached_dev {int writeback_percent; int bdev; TYPE_1__ disk; } ;
struct TYPE_4__ {int bucket_size; } ;
struct cache_set {int nbuckets; int cached_dev_sectors; int flash_dev_dirty_sectors; TYPE_2__ sb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static uint64_t FUNC_4(struct cached_dev *VAR_1)
{
 struct cache_set *VAR_2 = VAR_1->disk.c;





 uint64_t VAR_3 = VAR_2->nbuckets * VAR_2->sb.bucket_size -
    FUNC_0(&VAR_2->flash_dev_dirty_sectors);







 uint32_t VAR_4 =
  FUNC_2(FUNC_1(VAR_1->bdev) << VAR_0,
    VAR_2->cached_dev_sectors);

 uint64_t VAR_5 =
  FUNC_3(VAR_3 * VAR_1->writeback_percent, 100);


 if (VAR_4 < 1)
  VAR_4 = 1;

 return (VAR_5 * VAR_4) >> VAR_0;
}
