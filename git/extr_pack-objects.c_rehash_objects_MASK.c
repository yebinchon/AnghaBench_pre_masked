
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct packing_data {int index_size; int nr_objects; scalar_t__* index; struct object_entry* objects; } ;
struct TYPE_2__ {int oid; } ;
struct object_entry {TYPE_1__ idx; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (struct packing_data*,int *,int*) ;
 scalar_t__* FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct packing_data *VAR_0)
{
 uint32_t VAR_1;
 struct object_entry *VAR_2;

 VAR_0->index_size = FUNC_1(VAR_0->nr_objects * 3);
 if (VAR_0->index_size < 1024)
  VAR_0->index_size = 1024;

 FUNC_2(VAR_0->index);
 VAR_0->index = FUNC_4(VAR_0->index_size, sizeof(*VAR_0->index));

 VAR_2 = VAR_0->objects;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_objects; VAR_1++) {
  int VAR_3;
  uint32_t VAR_4 = FUNC_3(VAR_0,
             &VAR_2->idx.oid,
             &VAR_3);

  if (VAR_3)
   FUNC_0("Duplicate object in hash");

  VAR_0->index[VAR_4] = VAR_1 + 1;
  VAR_2++;
 }
}
