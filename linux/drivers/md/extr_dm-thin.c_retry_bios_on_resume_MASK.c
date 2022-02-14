
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int dummy; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct bio_list {int dummy; } ;
struct bio {int dummy; } ;
typedef scalar_t__ blk_status_t ;


 int FUNC_0 (struct bio_list*) ;
 struct bio* FUNC_1 (struct bio_list*) ;
 int FUNC_2 (struct pool*,struct dm_bio_prison_cell*,scalar_t__) ;
 int FUNC_3 (struct pool*,struct dm_bio_prison_cell*,struct bio_list*) ;
 int FUNC_4 (struct bio*) ;
 scalar_t__ FUNC_5 (struct pool*) ;

__attribute__((used)) static void FUNC_6(struct pool *VAR_0, struct dm_bio_prison_cell *VAR_1)
{
 struct bio *VAR_2;
 struct bio_list VAR_3;
 blk_status_t VAR_4;

 VAR_4 = FUNC_5(VAR_0);
 if (VAR_4) {
  FUNC_2(VAR_0, VAR_1, VAR_4);
  return;
 }

 FUNC_0(&VAR_3);
 FUNC_3(VAR_0, VAR_1, &VAR_3);

 while ((VAR_2 = FUNC_1(&VAR_3)))
  FUNC_4(VAR_2);
}
