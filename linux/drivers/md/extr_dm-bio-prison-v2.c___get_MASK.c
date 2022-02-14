
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cell_key_v2 {int dummy; } ;
struct dm_bio_prison_v2 {int dummy; } ;
struct dm_bio_prison_cell_v2 {unsigned int exclusive_level; int shared_count; int bios; scalar_t__ exclusive_lock; } ;
struct bio {int dummy; } ;


 scalar_t__ FUNC_0 (struct dm_bio_prison_v2*,struct dm_cell_key_v2*,struct dm_bio_prison_cell_v2*,struct dm_bio_prison_cell_v2**) ;
 int FUNC_1 (int *,struct bio*) ;

__attribute__((used)) static bool FUNC_2(struct dm_bio_prison_v2 *VAR_0,
    struct dm_cell_key_v2 *VAR_1,
    unsigned VAR_2,
    struct bio *VAR_3,
    struct dm_bio_prison_cell_v2 *VAR_4,
    struct dm_bio_prison_cell_v2 **VAR_5)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_4, VAR_5)) {
  if ((*VAR_5)->exclusive_lock) {
   if (VAR_2 <= (*VAR_5)->exclusive_level) {
    FUNC_1(&(*VAR_5)->bios, VAR_3);
    return 0;
   }
  }

  (*VAR_5)->shared_count++;

 } else
  (*VAR_5)->shared_count = 1;

 return 1;
}
