
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct packing_data {size_t index_size; scalar_t__* index; TYPE_2__* objects; } ;
struct object_id {int dummy; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ idx; } ;


 scalar_t__ FUNC_0 (struct object_id const*,int *) ;
 size_t FUNC_1 (struct object_id const*) ;

__attribute__((used)) static uint32_t FUNC_2(struct packing_data *VAR_0,
      const struct object_id *VAR_1,
      int *VAR_2)
{
 uint32_t VAR_3, VAR_4 = (VAR_0->index_size - 1);

 VAR_3 = FUNC_1(VAR_1) & VAR_4;

 while (VAR_0->index[VAR_3] > 0) {
  uint32_t VAR_5 = VAR_0->index[VAR_3] - 1;

  if (FUNC_0(VAR_1, &VAR_0->objects[VAR_5].idx.oid)) {
   *VAR_2 = 1;
   return VAR_3;
  }

  VAR_3 = (VAR_3 + 1) & VAR_4;
 }

 *VAR_2 = 0;
 return VAR_3;
}
