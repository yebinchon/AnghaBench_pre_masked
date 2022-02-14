
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; } ;
struct object_entry {TYPE_1__ idx; scalar_t__ size; int type; } ;
struct base_data {void* data; scalar_t__ size; struct base_data* base; struct object_entry* obj; } ;
struct TYPE_4__ {int base_cache_used; } ;


 int FUNC_0 (struct base_data**,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct base_data**) ;
 void* FUNC_4 (struct object_entry*) ;
 TYPE_2__* FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 void* FUNC_7 (void*,scalar_t__,void*,scalar_t__,scalar_t__*) ;
 int FUNC_8 (struct base_data*) ;

__attribute__((used)) static void *FUNC_9(struct base_data *VAR_0)
{
 if (!VAR_0->data) {
  struct object_entry *VAR_1 = VAR_0->obj;
  struct base_data **VAR_2 = ((void*)0);
  int VAR_3 = 0, VAR_4 = 0;

  while (FUNC_6(VAR_0->obj->type) && !VAR_0->data) {
   FUNC_0(VAR_2, VAR_3 + 1, VAR_4);
   VAR_2[VAR_3++] = VAR_0;
   VAR_0 = VAR_0->base;
  }
  if (!VAR_3) {
   VAR_0->data = FUNC_4(VAR_1);
   VAR_0->size = VAR_1->size;
   FUNC_5()->base_cache_used += VAR_0->size;
   FUNC_8(VAR_0);
  }
  for (; VAR_3 > 0; VAR_3--) {
   void *VAR_5, *VAR_6;
   VAR_0 = VAR_2[VAR_3 - 1];
   VAR_1 = VAR_0->obj;
   VAR_5 = FUNC_9(VAR_0->base);
   VAR_6 = FUNC_4(VAR_1);
   VAR_0->data = FUNC_7(
    VAR_5, VAR_0->base->size,
    VAR_6, VAR_1->size,
    &VAR_0->size);
   FUNC_3(VAR_6);
   if (!VAR_0->data)
    FUNC_2(VAR_1->idx.offset, FUNC_1("failed to apply delta"));
   FUNC_5()->base_cache_used += VAR_0->size;
   FUNC_8(VAR_0);
  }
  FUNC_3(VAR_2);
 }
 return VAR_0->data;
}
