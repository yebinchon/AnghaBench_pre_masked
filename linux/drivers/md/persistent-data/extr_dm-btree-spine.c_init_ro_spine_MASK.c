
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ro_spine {int ** nodes; scalar_t__ count; struct dm_btree_info* info; } ;
struct dm_btree_info {int dummy; } ;



void FUNC_0(struct ro_spine *VAR_0, struct dm_btree_info *VAR_1)
{
 VAR_0->info = VAR_1;
 VAR_0->count = 0;
 VAR_0->nodes[0] = ((void*)0);
 VAR_0->nodes[1] = ((void*)0);
}
