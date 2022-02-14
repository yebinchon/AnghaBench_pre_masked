
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cell_key {int dummy; } ;
struct dm_bio_prison_cell {int bios; struct bio* holder; int key; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct dm_cell_key*,int) ;

__attribute__((used)) static void FUNC_2(struct dm_cell_key *VAR_0,
        struct bio *VAR_1,
        struct dm_bio_prison_cell *VAR_2)
{
       FUNC_1(&VAR_2->key, VAR_0, sizeof(VAR_2->key));
       VAR_2->holder = VAR_1;
       FUNC_0(&VAR_2->bios);
}
