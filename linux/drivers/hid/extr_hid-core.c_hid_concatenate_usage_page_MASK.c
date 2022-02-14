
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int usage_page; } ;
struct TYPE_3__ {int usage_index; int* usage_size; int* usage; } ;
struct hid_parser {TYPE_2__ global; TYPE_1__ local; } ;



__attribute__((used)) static void FUNC_0(struct hid_parser *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->local.usage_index; VAR_1++)
  if (VAR_0->local.usage_size[VAR_1] <= 2)
   VAR_0->local.usage[VAR_1] += VAR_0->global.usage_page << 16;
}
