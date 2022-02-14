
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct per_bio_data {int hook_info; } ;
struct dm_cache_migration {int cache; int k; TYPE_1__* op; struct bio* overwrite_bio; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {scalar_t__ op; int cblock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct bio*) ;
 int FUNC_1 (int *,struct bio*,int ,struct dm_cache_migration*) ;
 struct per_bio_data* FUNC_2 (struct bio*) ;
 int FUNC_3 (int *,void (*) (struct work_struct*)) ;
 int VAR_1 ;
 int FUNC_4 (int ,struct bio*,int ) ;
 int FUNC_5 (int ,struct bio*) ;

__attribute__((used)) static void FUNC_6(struct dm_cache_migration *VAR_2,
        void (*VAR_3)(struct work_struct *))
{
 struct bio *VAR_4 = VAR_2->overwrite_bio;
 struct per_bio_data *VAR_5 = FUNC_2(VAR_4);

 FUNC_1(&VAR_5->hook_info, VAR_4, VAR_1, VAR_2);





 if (VAR_2->op->op == VAR_0)
  FUNC_4(VAR_2->cache, VAR_4, VAR_2->op->cblock);
 else
  FUNC_5(VAR_2->cache, VAR_4);

 FUNC_3(&VAR_2->k, VAR_3);
 FUNC_0(VAR_2->cache, VAR_4);
}
