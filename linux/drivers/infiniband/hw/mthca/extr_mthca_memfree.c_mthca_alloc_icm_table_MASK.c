
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct mthca_icm_table {int num_icm; int num_obj; int obj_size; int lowmem; int coherent; TYPE_1__** icm; int mutex; scalar_t__ virt; } ;
struct mthca_dev {int dummy; } ;
struct TYPE_4__ {int refcount; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mthca_icm_table*) ;
 struct mthca_icm_table* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct mthca_dev*,TYPE_1__*,scalar_t__) ;
 int FUNC_4 (struct mthca_dev*,scalar_t__,int) ;
 TYPE_1__* FUNC_5 (struct mthca_dev*,unsigned int,int,int) ;
 int FUNC_6 (struct mthca_dev*,TYPE_1__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mthca_icm_table*,int ,int) ;

struct mthca_icm_table *FUNC_9(struct mthca_dev *VAR_7,
           u64 VAR_8, int VAR_9,
           int VAR_10, int VAR_11,
           int VAR_12, int VAR_13)
{
 struct mthca_icm_table *VAR_14;
 int VAR_15;
 int VAR_16;
 unsigned VAR_17;
 int VAR_18;

 VAR_15 = VAR_3 / VAR_9;
 VAR_16 = FUNC_0(VAR_10, VAR_15);

 VAR_14 = FUNC_2(FUNC_8(VAR_14, VAR_6, VAR_16), VAR_1);
 if (!VAR_14)
  return ((void*)0);

 VAR_14->virt = VAR_8;
 VAR_14->num_icm = VAR_16;
 VAR_14->num_obj = VAR_10;
 VAR_14->obj_size = VAR_9;
 VAR_14->lowmem = VAR_12;
 VAR_14->coherent = VAR_13;
 FUNC_7(&VAR_14->mutex);

 for (VAR_18 = 0; VAR_18 < VAR_16; ++VAR_18)
  VAR_14->icm[VAR_18] = ((void*)0);

 for (VAR_18 = 0; VAR_18 * VAR_3 < VAR_11 * VAR_9; ++VAR_18) {
  VAR_17 = VAR_3;
  if ((VAR_18 + 1) * VAR_3 > VAR_10 * VAR_9)
   VAR_17 = VAR_10 * VAR_9 - VAR_18 * VAR_3;

  VAR_14->icm[VAR_18] = FUNC_5(VAR_7, VAR_17 >> VAR_4,
      (VAR_12 ? VAR_1 : VAR_0) |
      VAR_5, VAR_13);
  if (!VAR_14->icm[VAR_18])
   goto err;
  if (FUNC_3(VAR_7, VAR_14->icm[VAR_18],
      VAR_8 + VAR_18 * VAR_3)) {
   FUNC_6(VAR_7, VAR_14->icm[VAR_18], VAR_14->coherent);
   VAR_14->icm[VAR_18] = ((void*)0);
   goto err;
  }





  ++VAR_14->icm[VAR_18]->refcount;
 }

 return VAR_14;

err:
 for (VAR_18 = 0; VAR_18 < VAR_16; ++VAR_18)
  if (VAR_14->icm[VAR_18]) {
   FUNC_4(VAR_7, VAR_8 + VAR_18 * VAR_3,
     VAR_3 / VAR_2);
   FUNC_6(VAR_7, VAR_14->icm[VAR_18], VAR_14->coherent);
  }

 FUNC_1(VAR_14);

 return ((void*)0);
}
