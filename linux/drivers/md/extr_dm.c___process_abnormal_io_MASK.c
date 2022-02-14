
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int dummy; } ;
struct clone_info {struct bio* bio; } ;
struct bio {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct clone_info*,struct dm_target*) ;
 int FUNC_1 (struct clone_info*,struct dm_target*) ;
 int FUNC_2 (struct clone_info*,struct dm_target*) ;
 int FUNC_3 (struct clone_info*,struct dm_target*) ;
 scalar_t__ FUNC_4 (struct bio*) ;

__attribute__((used)) static bool FUNC_5(struct clone_info *VAR_4, struct dm_target *VAR_5,
      int *VAR_6)
{
 struct bio *VAR_7 = VAR_4->bio;

 if (FUNC_4(VAR_7) == VAR_0)
  *VAR_6 = FUNC_0(VAR_4, VAR_5);
 else if (FUNC_4(VAR_7) == VAR_1)
  *VAR_6 = FUNC_1(VAR_4, VAR_5);
 else if (FUNC_4(VAR_7) == VAR_2)
  *VAR_6 = FUNC_2(VAR_4, VAR_5);
 else if (FUNC_4(VAR_7) == VAR_3)
  *VAR_6 = FUNC_3(VAR_4, VAR_5);
 else
  return 0;

 return 1;
}
