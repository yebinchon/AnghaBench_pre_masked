
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_array_cursor {int cursor; scalar_t__ block; int info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct dm_array_cursor *VAR_0)
{
 if (VAR_0->block) {
  FUNC_1(VAR_0->info, VAR_0->block);
  FUNC_0(&VAR_0->cursor);
 }
}
