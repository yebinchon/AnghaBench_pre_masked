
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int type; } ;
struct dm_table {int dummy; } ;


 unsigned int FUNC_0 (struct dm_table*) ;
 struct dm_target* FUNC_1 (struct dm_table*,unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;

struct dm_target *FUNC_3(struct dm_table *VAR_0)
{
 struct dm_target *VAR_1;
 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_1 = FUNC_1(VAR_0, VAR_2);
  if (FUNC_2(VAR_1->type))
   return VAR_1;
 }

 return ((void*)0);
}
