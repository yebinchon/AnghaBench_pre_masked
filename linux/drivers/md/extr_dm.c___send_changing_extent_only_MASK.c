
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int dummy; } ;
struct clone_info {unsigned int sector; scalar_t__ sector_count; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct clone_info*,struct dm_target*,unsigned int,unsigned int*) ;
 int FUNC_1 (unsigned int,struct dm_target*) ;
 unsigned int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct clone_info *VAR_1, struct dm_target *VAR_2,
           unsigned VAR_3)
{
 unsigned VAR_4;







 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_2((sector_t)VAR_1->sector_count, FUNC_1(VAR_1->sector, VAR_2));

 FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_4);

 VAR_1->sector += VAR_4;
 VAR_1->sector_count -= VAR_4;

 return 0;
}
