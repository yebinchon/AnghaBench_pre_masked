
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_btree_cursor {scalar_t__ depth; } ;


 int FUNC_0 (struct dm_btree_cursor*) ;

void FUNC_1(struct dm_btree_cursor *VAR_0)
{
 while (VAR_0->depth)
  FUNC_0(VAR_0);
}
