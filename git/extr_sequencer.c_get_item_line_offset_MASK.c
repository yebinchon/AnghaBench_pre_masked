
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
struct todo_list {int nr; TYPE_2__ buf; TYPE_1__* items; } ;
struct TYPE_3__ {int offset_in_buf; } ;



__attribute__((used)) static int FUNC_0(struct todo_list *VAR_0, int VAR_1)
{
 return VAR_1 < VAR_0->nr ?
  VAR_0->items[VAR_1].offset_in_buf : VAR_0->buf.len;
}
