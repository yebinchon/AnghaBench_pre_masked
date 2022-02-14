
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {TYPE_1__* type; } ;
struct dm_table {int dummy; } ;
struct TYPE_2__ {int (* iterate_devices ) (struct dm_target*,int ,unsigned int*) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct dm_table*) ;
 struct dm_target* FUNC_1 (struct dm_table*,unsigned int) ;
 int FUNC_2 (struct dm_target*,int ,unsigned int*) ;

bool FUNC_3(struct dm_table *VAR_1)
{
 struct dm_target *VAR_2;
 unsigned VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  VAR_2 = FUNC_1(VAR_1, VAR_3);

  if (!VAR_2->type->iterate_devices)
   return 0;

  VAR_4 = 0;
  VAR_2->type->iterate_devices(VAR_2, VAR_0, &VAR_4);
  if (VAR_4)
   return 0;
 }

 return 1;
}
