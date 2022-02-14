
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_cell_key_v2 {int dummy; } ;
struct TYPE_4__ {int ws; } ;
struct dm_cache_migration {TYPE_2__ k; struct dm_bio_prison_cell_v2* cell; scalar_t__ overwrite_bio; TYPE_1__* op; struct cache* cache; } ;
struct dm_bio_prison_cell_v2 {int dummy; } ;
struct cache {int prison; } ;
struct TYPE_3__ {int oblock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dm_bio_prison_cell_v2* FUNC_0 (struct cache*) ;
 int FUNC_1 (int ,int ,struct dm_cell_key_v2*) ;
 int FUNC_2 (int ,struct dm_cell_key_v2*,int ,struct dm_bio_prison_cell_v2*,struct dm_bio_prison_cell_v2**) ;
 int FUNC_3 (struct cache*,struct dm_bio_prison_cell_v2*) ;
 int FUNC_4 (struct dm_cache_migration*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct dm_cache_migration*,int (*) (int *)) ;

__attribute__((used)) static int FUNC_8(struct dm_cache_migration *VAR_2)
{
 int VAR_3;
 struct dm_cell_key_v2 VAR_4;
 struct cache *VAR_5 = VAR_2->cache;
 struct dm_bio_prison_cell_v2 *VAR_6;

 VAR_6 = FUNC_0(VAR_5);






 FUNC_1(VAR_2->op->oblock, FUNC_6(VAR_2->op->oblock), &VAR_4);
 VAR_3 = FUNC_2(VAR_5->prison, &VAR_4,
       VAR_2->overwrite_bio ? VAR_0 : VAR_1,
       VAR_6, &VAR_2->cell);
 if (VAR_3 < 0) {
  FUNC_3(VAR_5, VAR_6);
  FUNC_4(VAR_2, 0);
  return VAR_3;
 }

 if (VAR_2->cell != VAR_6)
  FUNC_3(VAR_5, VAR_6);

 if (VAR_3 == 0)
  FUNC_5(&VAR_2->k.ws);
 else
  FUNC_7(VAR_2, FUNC_5);

 return 0;
}
