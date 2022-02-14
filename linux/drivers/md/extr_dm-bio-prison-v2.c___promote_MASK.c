
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison_v2 {int dummy; } ;
struct dm_bio_prison_cell_v2 {unsigned int exclusive_level; scalar_t__ shared_count; int exclusive_lock; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dm_bio_prison_v2 *VAR_1,
       struct dm_bio_prison_cell_v2 *VAR_2,
       unsigned VAR_3)
{
 if (!VAR_2->exclusive_lock)
  return -VAR_0;

 VAR_2->exclusive_level = VAR_3;
 return VAR_2->shared_count > 0;
}
