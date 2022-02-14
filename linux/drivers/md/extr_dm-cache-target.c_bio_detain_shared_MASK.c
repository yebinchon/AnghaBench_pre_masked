
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_bio_data {struct dm_bio_prison_cell_v2* cell; } ;
struct dm_cell_key_v2 {int dummy; } ;
struct dm_bio_prison_cell_v2 {int dummy; } ;
struct cache {int prison; } ;
struct bio {int dummy; } ;
typedef int dm_oblock_t ;


 struct dm_bio_prison_cell_v2* FUNC_0 (struct cache*) ;
 int FUNC_1 (int ,int ,struct dm_cell_key_v2*) ;
 int FUNC_2 (int ,struct dm_cell_key_v2*,int ,struct bio*,struct dm_bio_prison_cell_v2*,struct dm_bio_prison_cell_v2**) ;
 int FUNC_3 (struct cache*,struct dm_bio_prison_cell_v2*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct per_bio_data* FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static bool FUNC_8(struct cache *VAR_0, dm_oblock_t VAR_1, struct bio *VAR_2)
{
 bool VAR_3;
 struct per_bio_data *VAR_4;
 struct dm_cell_key_v2 VAR_5;
 dm_oblock_t VAR_6 = FUNC_7(FUNC_4(VAR_1) + 1ULL);
 struct dm_bio_prison_cell_v2 *VAR_7, *VAR_8;

 VAR_7 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, VAR_6, &VAR_5);
 VAR_3 = FUNC_2(VAR_0->prison, &VAR_5, FUNC_6(VAR_2), VAR_2, VAR_7, &VAR_8);
 if (!VAR_3) {



  FUNC_3(VAR_0, VAR_7);
  return VAR_3;
 }

 if (VAR_8 != VAR_7)
  FUNC_3(VAR_0, VAR_7);

 VAR_4 = FUNC_5(VAR_2);
 VAR_4->cell = VAR_8;

 return VAR_3;
}
