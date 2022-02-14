
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct prio_set {long next_bucket; int magic; int csum; struct bucket_disk* data; int seq; } ;
struct closure {int dummy; } ;
struct TYPE_3__ {int bucket_size; int nbuckets; } ;
struct cache {long* prio_buckets; int* prio_last_buckets; struct bucket* buckets; TYPE_2__* set; TYPE_1__ sb; struct prio_set* disk_buckets; int meta_sectors_written; } ;
struct bucket_disk {int gen; int prio; } ;
struct bucket {int pin; int gen; int prio; } ;
struct TYPE_4__ {int bucket_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cache*,struct bucket*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 long FUNC_4 (struct cache*,int ,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,struct closure*) ;
 scalar_t__ FUNC_7 (struct cache*) ;
 int FUNC_8 (struct closure*) ;
 int FUNC_9 (struct closure*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct cache*) ;
 int FUNC_15 (struct cache*,long,int ,int ) ;
 int FUNC_16 (struct cache*) ;
 int FUNC_17 (TYPE_1__*) ;

void FUNC_18(struct cache *VAR_2)
{
 int VAR_3;
 struct bucket *VAR_4;
 struct closure VAR_5;

 FUNC_8(&VAR_5);

 FUNC_11(&VAR_2->set->bucket_lock);

 VAR_2->disk_buckets->seq++;

 FUNC_3(VAR_2->sb.bucket_size * FUNC_14(VAR_2),
   &VAR_2->meta_sectors_written);




 for (VAR_3 = FUNC_14(VAR_2) - 1; VAR_3 >= 0; --VAR_3) {
  long VAR_6;
  struct prio_set *VAR_7 = VAR_2->disk_buckets;
  struct bucket_disk *VAR_8 = VAR_7->data;
  struct bucket_disk *VAR_9 = VAR_8 + FUNC_16(VAR_2);

  for (VAR_4 = VAR_2->buckets + VAR_3 * FUNC_16(VAR_2);
       VAR_4 < VAR_2->buckets + VAR_2->sb.nbuckets && VAR_8 < VAR_9;
       VAR_4++, VAR_8++) {
   VAR_8->prio = FUNC_10(VAR_4->prio);
   VAR_8->gen = VAR_4->gen;
  }

  VAR_7->next_bucket = VAR_2->prio_buckets[VAR_3 + 1];
  VAR_7->magic = FUNC_17(&VAR_2->sb);
  VAR_7->csum = FUNC_5(&VAR_7->magic, FUNC_7(VAR_2) - 8);

  VAR_6 = FUNC_4(VAR_2, VAR_1, 1);
  FUNC_0(VAR_6 == -1);

  FUNC_13(&VAR_2->set->bucket_lock);
  FUNC_15(VAR_2, VAR_6, VAR_0, 0);
  FUNC_12(&VAR_2->set->bucket_lock);

  VAR_2->prio_buckets[VAR_3] = VAR_6;
  FUNC_2(&VAR_2->buckets[VAR_6].pin);
 }

 FUNC_13(&VAR_2->set->bucket_lock);

 FUNC_6(VAR_2->set, &VAR_5);
 FUNC_9(&VAR_5);

 FUNC_12(&VAR_2->set->bucket_lock);





 for (VAR_3 = 0; VAR_3 < FUNC_14(VAR_2); VAR_3++) {
  if (VAR_2->prio_last_buckets[VAR_3])
   FUNC_1(VAR_2,
    &VAR_2->buckets[VAR_2->prio_last_buckets[VAR_3]]);

  VAR_2->prio_last_buckets[VAR_3] = VAR_2->prio_buckets[VAR_3];
 }
}
