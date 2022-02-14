
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int dummy; } ;
struct clone_info {unsigned int sector; unsigned int sector_count; int map; } ;


 int VAR_0 ;
 int FUNC_0 (struct clone_info*,struct dm_target*,unsigned int,unsigned int*) ;
 scalar_t__ FUNC_1 (struct clone_info*,struct dm_target*,int*) ;
 struct dm_target* FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (unsigned int,struct dm_target*) ;
 unsigned int FUNC_4 (int ,int ,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct clone_info *VAR_2)
{
 struct dm_target *VAR_3;
 unsigned VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_2->map, VAR_2->sector);
 if (!VAR_3)
  return -VAR_0;

 if (FUNC_1(VAR_2, VAR_3, &VAR_5))
  return VAR_5;

 VAR_4 = FUNC_4(VAR_1, FUNC_3(VAR_2->sector, VAR_3), VAR_2->sector_count);

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_2->sector, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_2->sector += VAR_4;
 VAR_2->sector_count -= VAR_4;

 return 0;
}
