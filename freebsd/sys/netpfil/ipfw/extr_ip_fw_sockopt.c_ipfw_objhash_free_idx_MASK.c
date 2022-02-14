
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_long ;
struct namedobj_instance {int max_blocks; int* idx_mask; int* free_off; } ;


 int VAR_0 ;

int
FUNC_0(struct namedobj_instance *VAR_1, uint16_t VAR_2)
{
 u_long *VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = VAR_2 / VAR_0;
 VAR_5 = VAR_2 % VAR_0;

 if (VAR_4 >= VAR_1->max_blocks)
  return (1);

 VAR_3 = &VAR_1->idx_mask[VAR_4];

 if ((*VAR_3 & ((u_long)1 << VAR_5)) != 0)
  return (1);


 *VAR_3 |= (u_long)1 << VAR_5;


 if (VAR_1->free_off[0] > VAR_4)
  VAR_1->free_off[0] = VAR_4;

 return (0);
}
