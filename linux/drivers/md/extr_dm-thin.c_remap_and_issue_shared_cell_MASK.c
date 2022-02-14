
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int pool; } ;
struct remap_info {int issue_bios; int defer_bios; struct thin_c* tc; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct bio {int dummy; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct bio* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,struct remap_info*,struct dm_bio_prison_cell*) ;
 int FUNC_3 (struct thin_c*,struct bio*,int ) ;
 int FUNC_4 (struct thin_c*,struct bio*) ;

__attribute__((used)) static void FUNC_5(struct thin_c *VAR_1,
     struct dm_bio_prison_cell *VAR_2,
     dm_block_t VAR_3)
{
 struct bio *VAR_4;
 struct remap_info VAR_5;

 VAR_5.tc = VAR_1;
 FUNC_0(&VAR_5.defer_bios);
 FUNC_0(&VAR_5.issue_bios);

 FUNC_2(VAR_1->pool, VAR_0,
      &VAR_5, VAR_2);

 while ((VAR_4 = FUNC_1(&VAR_5.defer_bios)))
  FUNC_4(VAR_1, VAR_4);

 while ((VAR_4 = FUNC_1(&VAR_5.issue_bios)))
  FUNC_3(VAR_1, VAR_4, VAR_3);
}
