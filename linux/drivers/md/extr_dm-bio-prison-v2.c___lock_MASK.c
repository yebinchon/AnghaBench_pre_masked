
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cell_key_v2 {int dummy; } ;
struct dm_bio_prison_v2 {int dummy; } ;
struct dm_bio_prison_cell_v2 {int exclusive_lock; unsigned int exclusive_level; scalar_t__ shared_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dm_bio_prison_v2*,struct dm_cell_key_v2*,struct dm_bio_prison_cell_v2*,struct dm_bio_prison_cell_v2**) ;

__attribute__((used)) static int FUNC_1(struct dm_bio_prison_v2 *VAR_1,
    struct dm_cell_key_v2 *VAR_2,
    unsigned VAR_3,
    struct dm_bio_prison_cell_v2 *VAR_4,
    struct dm_bio_prison_cell_v2 **VAR_5)
{
 struct dm_bio_prison_cell_v2 *VAR_6;

 if (FUNC_0(VAR_1, VAR_2, VAR_4, &VAR_6)) {
  if (VAR_6->exclusive_lock)
   return -VAR_0;

  VAR_6->exclusive_lock = 1;
  VAR_6->exclusive_level = VAR_3;
  *VAR_5 = VAR_6;



  return VAR_6->shared_count > 0;

 } else {
  VAR_6 = VAR_4;
  VAR_6->shared_count = 0;
  VAR_6->exclusive_lock = 1;
  VAR_6->exclusive_level = VAR_3;
  *VAR_5 = VAR_6;
 }

 return 0;
}
