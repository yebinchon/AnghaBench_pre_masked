
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t idx; scalar_t__ type; TYPE_2__* items; } ;
struct TYPE_5__ {char* svalue; int ivalue; } ;
struct TYPE_6__ {int key; TYPE_1__ value; } ;
typedef TYPE_3__ GRawData ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (void *VAR_1, void *VAR_2, GRawData * VAR_3)
{
  VAR_3->items[VAR_3->idx].key = (*(int *) VAR_1);
  if (VAR_3->type == VAR_0)
    VAR_3->items[VAR_3->idx].value.svalue = (char *) VAR_2;
  else
    VAR_3->items[VAR_3->idx].value.ivalue = (*(int *) VAR_2);
  VAR_3->idx++;
}
