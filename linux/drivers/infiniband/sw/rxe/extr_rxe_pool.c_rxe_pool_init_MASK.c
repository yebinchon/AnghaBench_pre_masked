
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_pool {int type; unsigned int max_elem; int flags; int state; int key_size; int key_offset; int pool_lock; int ref_cnt; int num_elem; int cleanup; int tree; int elem_size; struct rxe_dev* rxe; } ;
struct rxe_dev {int dummy; } ;
typedef enum rxe_elem_type { ____Placeholder_rxe_elem_type } rxe_elem_type ;
struct TYPE_2__ {size_t size; int flags; int key_size; int key_offset; int min_index; int max_index; int cleanup; } ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rxe_pool*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rxe_pool*,int ,int ) ;
 TYPE_1__* VAR_5 ;

int FUNC_6(
 struct rxe_dev *VAR_6,
 struct rxe_pool *VAR_7,
 enum rxe_elem_type VAR_8,
 unsigned int VAR_9)
{
 int VAR_10 = 0;
 size_t VAR_11 = VAR_5[VAR_8].size;

 FUNC_3(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->rxe = VAR_6;
 VAR_7->type = VAR_8;
 VAR_7->max_elem = VAR_9;
 VAR_7->elem_size = FUNC_0(VAR_11, VAR_1);
 VAR_7->flags = VAR_5[VAR_8].flags;
 VAR_7->tree = VAR_0;
 VAR_7->cleanup = VAR_5[VAR_8].cleanup;

 FUNC_1(&VAR_7->num_elem, 0);

 FUNC_2(&VAR_7->ref_cnt);

 FUNC_4(&VAR_7->pool_lock);

 if (VAR_5[VAR_8].flags & VAR_2) {
  VAR_10 = FUNC_5(VAR_7,
       VAR_5[VAR_8].max_index,
       VAR_5[VAR_8].min_index);
  if (VAR_10)
   goto out;
 }

 if (VAR_5[VAR_8].flags & VAR_3) {
  VAR_7->key_offset = VAR_5[VAR_8].key_offset;
  VAR_7->key_size = VAR_5[VAR_8].key_size;
 }

 VAR_7->state = VAR_4;

out:
 return VAR_10;
}
