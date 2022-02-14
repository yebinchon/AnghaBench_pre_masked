
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* usage; } ;
struct hid_parser {int collection_stack_ptr; int collection_stack_size; unsigned int* collection_stack; TYPE_2__* device; TYPE_1__ local; } ;
struct hid_collection {unsigned int type; unsigned int usage; int level; int parent_idx; } ;
struct TYPE_4__ {int maxcollection; int collection_size; int maxapplication; struct hid_collection* collection; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (struct hid_collection*) ;
 struct hid_collection* FUNC_3 (int ,int ) ;
 unsigned int* FUNC_4 (unsigned int*,unsigned int,int ) ;
 int FUNC_5 (struct hid_collection*,struct hid_collection*,int) ;
 int FUNC_6 (struct hid_collection*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct hid_parser *VAR_4, unsigned VAR_5)
{
 struct hid_collection *VAR_6;
 unsigned VAR_7;
 int VAR_8;

 VAR_7 = VAR_4->local.usage[0];

 if (VAR_4->collection_stack_ptr == VAR_4->collection_stack_size) {
  unsigned int *VAR_9;
  unsigned int VAR_10 = VAR_4->collection_stack_size +
     VAR_3;

  VAR_9 = FUNC_4(VAR_4->collection_stack,
         VAR_10 * sizeof(unsigned int),
         VAR_1);
  if (!VAR_9)
   return -VAR_0;

  VAR_4->collection_stack = VAR_9;
  VAR_4->collection_stack_size = VAR_10;
 }

 if (VAR_4->device->maxcollection == VAR_4->device->collection_size) {
  VAR_6 = FUNC_3(
    FUNC_0(sizeof(struct hid_collection),
         VAR_4->device->collection_size,
         2),
    VAR_1);
  if (VAR_6 == ((void*)0)) {
   FUNC_1(VAR_4->device, "failed to reallocate collection array\n");
   return -VAR_0;
  }
  FUNC_5(VAR_6, VAR_4->device->collection,
   sizeof(struct hid_collection) *
   VAR_4->device->collection_size);
  FUNC_6(VAR_6 + VAR_4->device->collection_size, 0,
   sizeof(struct hid_collection) *
   VAR_4->device->collection_size);
  FUNC_2(VAR_4->device->collection);
  VAR_4->device->collection = VAR_6;
  VAR_4->device->collection_size *= 2;
 }

 VAR_4->collection_stack[VAR_4->collection_stack_ptr++] =
  VAR_4->device->maxcollection;

 VAR_8 = VAR_4->device->maxcollection++;
 VAR_6 = VAR_4->device->collection + VAR_8;
 VAR_6->type = VAR_5;
 VAR_6->usage = VAR_7;
 VAR_6->level = VAR_4->collection_stack_ptr - 1;
 VAR_6->parent_idx = (VAR_6->level == 0) ? -1 :
  VAR_4->collection_stack[VAR_6->level - 1];

 if (VAR_5 == VAR_2)
  VAR_4->device->maxapplication++;

 return 0;
}
