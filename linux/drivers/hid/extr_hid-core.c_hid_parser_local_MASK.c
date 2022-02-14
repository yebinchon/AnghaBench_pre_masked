
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int delimiter_depth; int delimiter_branch; unsigned int usage_minimum; unsigned int usage_index; } ;
struct hid_parser {TYPE_1__ local; TYPE_2__* device; } ;
struct hid_item {int tag; int size; } ;
typedef unsigned int __u32 ;
struct TYPE_5__ {int dev; } ;






 unsigned int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hid_parser*,unsigned int,int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 unsigned int FUNC_5 (struct hid_item*) ;

__attribute__((used)) static int FUNC_6(struct hid_parser *VAR_1, struct hid_item *VAR_2)
{
 __u32 VAR_3;
 unsigned VAR_4;
 __u32 VAR_5;

 VAR_3 = FUNC_5(VAR_2);

 switch (VAR_2->tag) {
 case 131:

  if (VAR_3) {






   if (VAR_1->local.delimiter_depth != 0) {
    FUNC_3(VAR_1->device, "nested delimiters\n");
    return -1;
   }
   VAR_1->local.delimiter_depth++;
   VAR_1->local.delimiter_branch++;
  } else {
   if (VAR_1->local.delimiter_depth < 1) {
    FUNC_3(VAR_1->device, "bogus close delimiter\n");
    return -1;
   }
   VAR_1->local.delimiter_depth--;
  }
  return 0;

 case 130:

  if (VAR_1->local.delimiter_branch > 1) {
   FUNC_0("alternative usage ignored\n");
   return 0;
  }

  return FUNC_2(VAR_1, VAR_3, VAR_2->size);

 case 128:

  if (VAR_1->local.delimiter_branch > 1) {
   FUNC_0("alternative usage ignored\n");
   return 0;
  }

  VAR_1->local.usage_minimum = VAR_3;
  return 0;

 case 129:

  if (VAR_1->local.delimiter_branch > 1) {
   FUNC_0("alternative usage ignored\n");
   return 0;
  }

  VAR_5 = VAR_3 - VAR_1->local.usage_minimum;
  if (VAR_5 + VAR_1->local.usage_index >= VAR_0) {




   if (FUNC_1(&VAR_1->device->dev))
    FUNC_4(VAR_1->device,
      "ignoring exceeding usage max\n");
   VAR_3 = VAR_0 - VAR_1->local.usage_index +
    VAR_1->local.usage_minimum - 1;
   if (VAR_3 <= 0) {
    FUNC_3(VAR_1->device,
     "no more usage index available\n");
    return -1;
   }
  }

  for (VAR_4 = VAR_1->local.usage_minimum; VAR_4 <= VAR_3; VAR_4++)
   if (FUNC_2(VAR_1, VAR_4, VAR_2->size)) {
    FUNC_0("hid_add_usage failed\n");
    return -1;
   }
  return 0;

 default:

  FUNC_0("unknown local item tag 0x%x\n", VAR_2->tag);
  return 0;
 }
 return 0;
}
