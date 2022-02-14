
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct object {int type; int oid; } ;
struct eindex {size_t count; int * hashes; struct object** objects; } ;
struct bitmap_index {TYPE_1__* pack; struct eindex ext_index; struct bitmap* result; } ;
struct bitmap {int dummy; } ;
typedef int (* show_reachable_fn ) (int *,int ,int ,int ,int *,int ) ;
struct TYPE_2__ {scalar_t__ num_objects; } ;


 int FUNC_0 (struct bitmap*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct bitmap_index *VAR_0,
      show_reachable_fn VAR_1)
{
 struct bitmap *VAR_2 = VAR_0->result;
 struct eindex *VAR_3 = &VAR_0->ext_index;
 uint32_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->count; ++VAR_4) {
  struct object *VAR_5;

  if (!FUNC_0(VAR_2, VAR_0->pack->num_objects + VAR_4))
   continue;

  VAR_5 = VAR_3->objects[VAR_4];
  VAR_1(&VAR_5->oid, VAR_5->type, 0, VAR_3->hashes[VAR_4], ((void*)0), 0);
 }
}
