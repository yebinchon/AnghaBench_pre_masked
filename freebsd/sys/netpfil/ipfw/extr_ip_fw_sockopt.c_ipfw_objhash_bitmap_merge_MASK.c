
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct namedobj_instance {int max_blocks; int * idx_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

void
FUNC_1(struct namedobj_instance *VAR_1, void **VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;
 u_long *VAR_6, *VAR_7;
 int VAR_8;

 VAR_6 = VAR_1->idx_mask;
 VAR_4 = VAR_1->max_blocks;
 VAR_7 = *VAR_2;
 VAR_5 = *VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  FUNC_0(&VAR_7[VAR_5 * VAR_8], &VAR_6[VAR_4 * VAR_8],
      VAR_4 * sizeof(u_long));
 }
}
