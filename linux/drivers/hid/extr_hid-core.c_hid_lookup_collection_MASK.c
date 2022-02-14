
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_parser {int collection_stack_ptr; unsigned int* collection_stack; TYPE_1__* device; } ;
struct hid_collection {unsigned int type; int usage; } ;
struct TYPE_2__ {struct hid_collection* collection; } ;



__attribute__((used)) static unsigned FUNC_0(struct hid_parser *VAR_0, unsigned VAR_1)
{
 struct hid_collection *VAR_2 = VAR_0->device->collection;
 int VAR_3;

 for (VAR_3 = VAR_0->collection_stack_ptr - 1; VAR_3 >= 0; VAR_3--) {
  unsigned VAR_4 = VAR_0->collection_stack[VAR_3];
  if (VAR_2[VAR_4].type == VAR_1)
   return VAR_2[VAR_4].usage;
 }
 return 0;
}
