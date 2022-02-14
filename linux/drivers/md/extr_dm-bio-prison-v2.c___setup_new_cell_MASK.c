
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cell_key_v2 {int dummy; } ;
struct dm_bio_prison_cell_v2 {int bios; int key; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct dm_cell_key_v2*,int) ;
 int FUNC_2 (struct dm_bio_prison_cell_v2*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dm_cell_key_v2 *VAR_0,
        struct dm_bio_prison_cell_v2 *VAR_1)
{
 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 FUNC_1(&VAR_1->key, VAR_0, sizeof(VAR_1->key));
 FUNC_0(&VAR_1->bios);
}
