
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int dummy; } ;
struct dm_table {unsigned int depth; struct dm_target* targets; } ;
typedef scalar_t__ sector_t ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct dm_table*) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 scalar_t__* FUNC_2 (struct dm_table*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (int) ;

struct dm_target *FUNC_4(struct dm_table *VAR_1, sector_t VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0, VAR_5 = 0;
 sector_t *VAR_6;

 if (FUNC_3(VAR_2 >= FUNC_0(VAR_1)))
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_1->depth; VAR_3++) {
  VAR_4 = FUNC_1(VAR_4, VAR_5);
  VAR_6 = FUNC_2(VAR_1, VAR_3, VAR_4);

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   if (VAR_6[VAR_5] >= VAR_2)
    break;
 }

 return &VAR_1->targets[(VAR_0 * VAR_4) + VAR_5];
}
