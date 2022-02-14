
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int dummy; } ;
struct dm_table {unsigned int num_allocated; struct dm_target* targets; int * highs; } ;
typedef int sector_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dm_table *VAR_1, unsigned int VAR_2)
{
 sector_t *VAR_3;
 struct dm_target *VAR_4;




 VAR_3 = (sector_t *) FUNC_0(VAR_2, sizeof(struct dm_target) +
       sizeof(sector_t));
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = (struct dm_target *) (VAR_3 + VAR_2);

 FUNC_1(VAR_3, -1, sizeof(*VAR_3) * VAR_2);
 FUNC_2(VAR_1->highs);

 VAR_1->num_allocated = VAR_2;
 VAR_1->highs = VAR_3;
 VAR_1->targets = VAR_4;

 return 0;
}
