
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
struct prio_set {scalar_t__ csum; scalar_t__ magic; struct bucket_disk* data; void* next_bucket; } ;
struct TYPE_2__ {int nbuckets; } ;
struct cache {TYPE_1__ sb; void** prio_last_buckets; void** prio_buckets; struct bucket* buckets; struct prio_set* disk_buckets; } ;
struct bucket_disk {int gen; int prio; } ;
struct bucket {int last_gc; int gen; int prio; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct cache*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct cache*,void*,int ,int ) ;
 int FUNC_5 (struct cache*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct cache *VAR_1, uint64_t VAR_2)
{
 struct prio_set *VAR_3 = VAR_1->disk_buckets;
 struct bucket_disk *VAR_4 = VAR_3->data + FUNC_5(VAR_1), *VAR_5 = VAR_4;
 struct bucket *VAR_6;
 unsigned int VAR_7 = 0;

 for (VAR_6 = VAR_1->buckets;
      VAR_6 < VAR_1->buckets + VAR_1->sb.nbuckets;
      VAR_6++, VAR_4++) {
  if (VAR_4 == VAR_5) {
   VAR_1->prio_buckets[VAR_7] = VAR_2;
   VAR_1->prio_last_buckets[VAR_7] = VAR_2;
   VAR_7++;

   FUNC_4(VAR_1, VAR_2, VAR_0, 0);

   if (VAR_3->csum !=
       FUNC_0(&VAR_3->magic, FUNC_1(VAR_1) - 8))
    FUNC_3("bad csum reading priorities");

   if (VAR_3->magic != FUNC_6(&VAR_1->sb))
    FUNC_3("bad magic reading priorities");

   VAR_2 = VAR_3->next_bucket;
   VAR_4 = VAR_3->data;
  }

  VAR_6->prio = FUNC_2(VAR_4->prio);
  VAR_6->gen = VAR_6->last_gc = VAR_4->gen;
 }
}
