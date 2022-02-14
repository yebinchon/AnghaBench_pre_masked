
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {TYPE_1__* type; } ;
struct dm_table {int dummy; } ;
typedef int iterate_devices_callout_fn ;
struct TYPE_2__ {int (* iterate_devices ) (struct dm_target*,int ,int*) ;int direct_access; } ;


 unsigned int FUNC_0 (struct dm_table*) ;
 struct dm_target* FUNC_1 (struct dm_table*,unsigned int) ;
 int FUNC_2 (struct dm_target*,int ,int*) ;

bool FUNC_3(struct dm_table *VAR_0,
      iterate_devices_callout_fn VAR_1, int *VAR_2)
{
 struct dm_target *VAR_3;
 unsigned VAR_4;


 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_3 = FUNC_1(VAR_0, VAR_4);

  if (!VAR_3->type->direct_access)
   return 0;

  if (!VAR_3->type->iterate_devices ||
      !VAR_3->type->iterate_devices(VAR_3, VAR_1, VAR_2))
   return 0;
 }

 return 1;
}
