
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct namedobjects_head {int dummy; } ;
struct namedobj_instance {int nn_size; int nv_size; int max_blocks; int idx_mask; int cmp_f; int hash_f; struct namedobjects_head* values; struct namedobjects_head* names; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct namedobjects_head*) ;
 int FUNC_1 (int ,void*,int *) ;
 struct namedobj_instance* FUNC_2 (size_t,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

struct namedobj_instance *
FUNC_3(uint32_t VAR_6)
{
 struct namedobj_instance *VAR_7;
 int VAR_8;
 size_t VAR_9;

 VAR_9 = sizeof(struct namedobj_instance) +
     sizeof(struct namedobjects_head) * VAR_3 +
     sizeof(struct namedobjects_head) * VAR_3;

 VAR_7 = FUNC_2(VAR_9, VAR_0, VAR_1 | VAR_2);
 VAR_7->nn_size = VAR_3;
 VAR_7->nv_size = VAR_3;

 VAR_7->names = (struct namedobjects_head *)(VAR_7 +1);
 VAR_7->values = &VAR_7->names[VAR_7->nn_size];

 for (VAR_8 = 0; VAR_8 < VAR_7->nn_size; VAR_8++)
  FUNC_0(&VAR_7->names[VAR_8]);

 for (VAR_8 = 0; VAR_8 < VAR_7->nv_size; VAR_8++)
  FUNC_0(&VAR_7->values[VAR_8]);


 VAR_7->hash_f = VAR_5;
 VAR_7->cmp_f = VAR_4;


 FUNC_1(VAR_6, (void*)&VAR_7->idx_mask, &VAR_7->max_blocks);

 return (VAR_7);
}
