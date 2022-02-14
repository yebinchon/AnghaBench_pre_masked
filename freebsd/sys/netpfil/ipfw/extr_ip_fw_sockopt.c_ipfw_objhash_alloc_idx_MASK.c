
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_long ;
struct namedobj_instance {int* free_off; int* idx_mask; int max_blocks; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

int
FUNC_1(void *VAR_1, uint16_t *VAR_2)
{
 struct namedobj_instance *VAR_3;
 u_long *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_3 = (struct namedobj_instance *)VAR_1;

 VAR_6 = VAR_3->free_off[0];
 VAR_4 = &VAR_3->idx_mask[VAR_6];

 for (VAR_5 = VAR_6; VAR_5 < VAR_3->max_blocks; VAR_5++, VAR_4++) {
  if ((VAR_7 = FUNC_0(*VAR_4)) == 0)
   continue;


  *VAR_4 &= ~ ((u_long)1 << (VAR_7 - 1));

  VAR_3->free_off[0] = VAR_5;

  VAR_7 = VAR_0 * VAR_5 + VAR_7 - 1;

  *VAR_2 = VAR_7;
  return (0);
 }

 return (1);
}
