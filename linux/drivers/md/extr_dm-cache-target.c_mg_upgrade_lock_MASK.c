
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_3__ {scalar_t__ input; } ;
struct dm_cache_migration {int cell; TYPE_2__* cache; TYPE_1__ k; } ;
struct TYPE_4__ {int prison; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct dm_cache_migration*,int) ;
 int FUNC_2 (struct work_struct*) ;
 int FUNC_3 (struct dm_cache_migration*,int (*) (struct work_struct*)) ;
 struct dm_cache_migration* FUNC_4 (struct work_struct*) ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_1)
{
 int VAR_2;
 struct dm_cache_migration *VAR_3 = FUNC_4(VAR_1);




 if (VAR_3->k.input)
  FUNC_1(VAR_3, 0);

 else {



  VAR_2 = FUNC_0(VAR_3->cache->prison, VAR_3->cell,
         VAR_0);
  if (VAR_2 < 0)
   FUNC_1(VAR_3, 0);

  else if (VAR_2)
   FUNC_3(VAR_3, FUNC_2);

  else
   FUNC_2(VAR_1);
 }
}
