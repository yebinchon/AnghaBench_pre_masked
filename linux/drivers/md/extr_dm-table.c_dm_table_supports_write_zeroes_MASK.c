
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {TYPE_1__* type; int num_write_zeroes_bios; } ;
struct dm_table {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* iterate_devices ) (struct dm_target*,int ,int *) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct dm_table*) ;
 struct dm_target* FUNC_1 (struct dm_table*,int ) ;
 scalar_t__ FUNC_2 (struct dm_target*,int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct dm_table *VAR_1)
{
 struct dm_target *VAR_2;
 unsigned VAR_3 = 0;

 while (VAR_3 < FUNC_0(VAR_1)) {
  VAR_2 = FUNC_1(VAR_1, VAR_3++);

  if (!VAR_2->num_write_zeroes_bios)
   return 0;

  if (!VAR_2->type->iterate_devices ||
      VAR_2->type->iterate_devices(VAR_2, VAR_0, ((void*)0)))
   return 0;
 }

 return 1;
}
