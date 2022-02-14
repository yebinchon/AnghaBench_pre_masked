
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct packing_data {size_t nr_objects; int in_pack_by_idx; scalar_t__ objects; int * in_pack; int nr_alloc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct packing_data*,scalar_t__) ;

void FUNC_3(struct packing_data *VAR_0)
{
 uint32_t VAR_1;

 FUNC_1(VAR_0->in_pack, VAR_0->nr_alloc);

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_objects; VAR_1++)
  VAR_0->in_pack[VAR_1] = FUNC_2(VAR_0, VAR_0->objects + VAR_1);

 FUNC_0(VAR_0->in_pack_by_idx);
}
