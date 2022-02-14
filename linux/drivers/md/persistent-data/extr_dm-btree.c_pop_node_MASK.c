
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_btree_cursor {size_t depth; TYPE_1__* nodes; int info; } ;
struct TYPE_2__ {int b; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dm_btree_cursor *VAR_0)
{
 VAR_0->depth--;
 FUNC_0(VAR_0->info, VAR_0->nodes[VAR_0->depth].b);
}
