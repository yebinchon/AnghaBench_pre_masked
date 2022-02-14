
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int prison; } ;
struct dm_cell_key {int dummy; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct dm_cell_key*,struct bio*,struct dm_bio_prison_cell*,struct dm_bio_prison_cell**) ;
 struct dm_bio_prison_cell* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct dm_bio_prison_cell*) ;

__attribute__((used)) static int FUNC_3(struct pool *VAR_1, struct dm_cell_key *VAR_2, struct bio *VAR_3,
        struct dm_bio_prison_cell **VAR_4)
{
 int VAR_5;
 struct dm_bio_prison_cell *VAR_6;





 VAR_6 = FUNC_1(VAR_1->prison, VAR_0);

 VAR_5 = FUNC_0(VAR_1->prison, VAR_2, VAR_3, VAR_6, VAR_4);
 if (VAR_5)




  FUNC_2(VAR_1->prison, VAR_6);

 return VAR_5;
}
