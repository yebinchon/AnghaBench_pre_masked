
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct namedobj_instance {int max_blocks; int * idx_mask; } ;



void
FUNC_0(struct namedobj_instance *VAR_0, void **VAR_1, int *VAR_2)
{
 int VAR_3;
 u_long *VAR_4;

 VAR_4 = VAR_0->idx_mask;
 VAR_3 = VAR_0->max_blocks;

 VAR_0->idx_mask = *VAR_1;
 VAR_0->max_blocks = *VAR_2;


 *VAR_1 = VAR_4;
 *VAR_2 = VAR_3;
}
