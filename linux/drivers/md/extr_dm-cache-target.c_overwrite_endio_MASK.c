
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct per_bio_data {int hook_info; } ;
struct TYPE_2__ {scalar_t__ input; } ;
struct dm_cache_migration {TYPE_1__ k; struct cache* cache; } ;
struct cache {int wq; } ;
struct bio {scalar_t__ bi_status; struct dm_cache_migration* bi_private; } ;


 int FUNC_0 (int *,struct bio*) ;
 struct per_bio_data* FUNC_1 (struct bio*) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_0)
{
 struct dm_cache_migration *VAR_1 = VAR_0->bi_private;
 struct cache *VAR_2 = VAR_1->cache;
 struct per_bio_data *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(&VAR_3->hook_info, VAR_0);

 if (VAR_0->bi_status)
  VAR_1->k.input = VAR_0->bi_status;

 FUNC_2(VAR_2->wq, &VAR_1->k);
}
