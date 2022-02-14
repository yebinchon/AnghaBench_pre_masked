
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct closure {int dummy; } ;
struct TYPE_3__ {int bucket_size; } ;
struct cache {struct closure prio; int set; int disk_buckets; int bdev; TYPE_1__ sb; } ;
struct TYPE_4__ {int bi_sector; int bi_size; } ;
struct bio {struct cache* bi_private; int bi_end_io; TYPE_2__ bi_iter; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct bio* FUNC_0 (int ) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct bio*,int,unsigned long) ;
 int FUNC_4 (struct cache*) ;
 int FUNC_5 (int ,struct bio*,struct closure*) ;
 int FUNC_6 (struct closure*) ;
 int FUNC_7 (struct closure*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(struct cache *VAR_3, uint64_t VAR_4, int VAR_5,
      unsigned long VAR_6)
{
 struct closure *VAR_7 = &VAR_3->prio;
 struct bio *VAR_8 = FUNC_0(VAR_3->set);

 FUNC_6(VAR_7);

 VAR_8->bi_iter.bi_sector = VAR_4 * VAR_3->sb.bucket_size;
 FUNC_2(VAR_8, VAR_3->bdev);
 VAR_8->bi_iter.bi_size = FUNC_4(VAR_3);

 VAR_8->bi_end_io = VAR_2;
 VAR_8->bi_private = VAR_3;
 FUNC_3(VAR_8, VAR_5, VAR_1|VAR_0|VAR_6);
 FUNC_1(VAR_8, VAR_3->disk_buckets);

 FUNC_5(VAR_3->set, VAR_8, &VAR_3->prio);
 FUNC_7(VAR_7);
}
