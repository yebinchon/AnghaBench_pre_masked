
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {TYPE_1__* type; } ;
struct dm_table {int dummy; } ;
typedef enum blk_zoned_model { ____Placeholder_blk_zoned_model } blk_zoned_model ;
struct TYPE_2__ {int (* iterate_devices ) (struct dm_target*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct dm_table*) ;
 struct dm_target* FUNC_1 (struct dm_table*,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct dm_target*,int ,int*) ;

__attribute__((used)) static bool FUNC_4(struct dm_table *VAR_2,
       enum blk_zoned_model VAR_3)
{
 struct dm_target *VAR_4;
 unsigned VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  VAR_4 = FUNC_1(VAR_2, VAR_5);

  if (VAR_3 == VAR_0 &&
      !FUNC_2(VAR_4->type))
   return 0;

  if (!VAR_4->type->iterate_devices ||
      !VAR_4->type->iterate_devices(VAR_4, VAR_1, &VAR_3))
   return 0;
 }

 return 1;
}
