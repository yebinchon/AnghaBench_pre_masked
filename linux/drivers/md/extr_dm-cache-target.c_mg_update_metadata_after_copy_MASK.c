
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ input; } ;
struct dm_cache_migration {TYPE_1__ k; } ;


 int FUNC_0 (struct dm_cache_migration*,int) ;
 int FUNC_1 (struct work_struct*) ;
 struct dm_cache_migration* FUNC_2 (struct work_struct*) ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_0)
{
 struct dm_cache_migration *VAR_1 = FUNC_2(VAR_0);




 if (VAR_1->k.input)
  FUNC_0(VAR_1, 0);
 else
  FUNC_1(VAR_0);
}
