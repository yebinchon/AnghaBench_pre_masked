
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_cell_key_v2 {int dummy; } ;
struct TYPE_2__ {int ws; } ;
struct dm_cache_migration {TYPE_1__ k; struct dm_bio_prison_cell_v2* cell; int invalidate_oblock; struct cache* cache; } ;
struct dm_bio_prison_cell_v2 {int dummy; } ;
struct cache {int wq; int prison; } ;


 int VAR_0 ;
 struct dm_bio_prison_cell_v2* FUNC_0 (struct cache*) ;
 int FUNC_1 (int ,int ,struct dm_cell_key_v2*) ;
 int FUNC_2 (int ,struct dm_cell_key_v2*,int ,struct dm_bio_prison_cell_v2*,struct dm_bio_prison_cell_v2**) ;
 int FUNC_3 (struct cache*,struct dm_bio_prison_cell_v2*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct dm_cache_migration*,int) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct dm_cache_migration*,int ) ;

__attribute__((used)) static int FUNC_9(struct dm_cache_migration *VAR_2)
{
 int VAR_3;
 struct dm_cell_key_v2 VAR_4;
 struct cache *VAR_5 = VAR_2->cache;
 struct dm_bio_prison_cell_v2 *VAR_6;

 VAR_6 = FUNC_0(VAR_5);

 FUNC_1(VAR_2->invalidate_oblock, FUNC_6(VAR_2->invalidate_oblock), &VAR_4);
 VAR_3 = FUNC_2(VAR_5->prison, &VAR_4,
       VAR_0, VAR_6, &VAR_2->cell);
 if (VAR_3 < 0) {
  FUNC_3(VAR_5, VAR_6);
  FUNC_5(VAR_2, 0);
  return VAR_3;
 }

 if (VAR_2->cell != VAR_6)
  FUNC_3(VAR_5, VAR_6);

 if (VAR_3)
  FUNC_8(VAR_2, VAR_1);

 else {




  FUNC_4(&VAR_2->k, VAR_1);
  FUNC_7(VAR_5->wq, &VAR_2->k.ws);
 }

 return 0;
}
