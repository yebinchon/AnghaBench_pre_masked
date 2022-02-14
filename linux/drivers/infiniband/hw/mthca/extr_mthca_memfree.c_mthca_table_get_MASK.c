
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mthca_icm_table {int num_obj; int obj_size; int mutex; TYPE_1__** icm; int coherent; scalar_t__ virt; scalar_t__ lowmem; } ;
struct mthca_dev {int dummy; } ;
struct TYPE_4__ {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct mthca_dev*,TYPE_1__*,scalar_t__) ;
 TYPE_1__* FUNC_1 (struct mthca_dev*,int,int,int ) ;
 int FUNC_2 (struct mthca_dev*,TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mthca_dev *VAR_6, struct mthca_icm_table *VAR_7, int VAR_8)
{
 int VAR_9 = (VAR_8 & (VAR_7->num_obj - 1)) * VAR_7->obj_size / VAR_3;
 int VAR_10 = 0;

 FUNC_3(&VAR_7->mutex);

 if (VAR_7->icm[VAR_9]) {
  ++VAR_7->icm[VAR_9]->refcount;
  goto out;
 }

 VAR_7->icm[VAR_9] = FUNC_1(VAR_6, VAR_3 >> VAR_4,
     (VAR_7->lowmem ? VAR_2 : VAR_1) |
     VAR_5, VAR_7->coherent);
 if (!VAR_7->icm[VAR_9]) {
  VAR_10 = -VAR_0;
  goto out;
 }

 if (FUNC_0(VAR_6, VAR_7->icm[VAR_9],
     VAR_7->virt + VAR_9 * VAR_3)) {
  FUNC_2(VAR_6, VAR_7->icm[VAR_9], VAR_7->coherent);
  VAR_7->icm[VAR_9] = ((void*)0);
  VAR_10 = -VAR_0;
  goto out;
 }

 ++VAR_7->icm[VAR_9]->refcount;

out:
 FUNC_4(&VAR_7->mutex);
 return VAR_10;
}
