
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct r5l_recovery_ctx {size_t valid_pages; size_t total_pages; TYPE_3__* ra_bio; int * ra_pool; scalar_t__ pool_offset; } ;
struct r5l_log {TYPE_2__* rdev; } ;
typedef scalar_t__ sector_t ;
struct TYPE_8__ {scalar_t__ bi_sector; } ;
struct TYPE_10__ {TYPE_1__ bi_iter; } ;
struct TYPE_9__ {scalar_t__ data_offset; int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_4 (struct r5l_log*,scalar_t__,int ) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(struct r5l_log *VAR_3,
          struct r5l_recovery_ctx *VAR_4,
          sector_t VAR_5)
{
 FUNC_1(VAR_4->ra_bio);
 FUNC_2(VAR_4->ra_bio, VAR_3->rdev->bdev);
 FUNC_3(VAR_4->ra_bio, VAR_2, 0);
 VAR_4->ra_bio->bi_iter.bi_sector = VAR_3->rdev->data_offset + VAR_5;

 VAR_4->valid_pages = 0;
 VAR_4->pool_offset = VAR_5;

 while (VAR_4->valid_pages < VAR_4->total_pages) {
  FUNC_0(VAR_4->ra_bio,
        VAR_4->ra_pool[VAR_4->valid_pages], VAR_1, 0);
  VAR_4->valid_pages += 1;

  VAR_5 = FUNC_4(VAR_3, VAR_5, VAR_0);

  if (VAR_5 == 0)
   break;
 }

 return FUNC_5(VAR_4->ra_bio);
}
