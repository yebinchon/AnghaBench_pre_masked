
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int field_i; int field_n; TYPE_3__* fields; int name; } ;
typedef TYPE_1__ type_desc ;
typedef int field_desc ;
struct TYPE_5__ {int name; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ) ;

void FUNC_2 (type_desc *VAR_0) {
  FUNC_1 (VAR_0->name);
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->field_i; VAR_1++) {
    FUNC_1 (VAR_0->fields[VAR_1].name);
  }
  FUNC_0 (VAR_0->fields, sizeof (field_desc) * VAR_0->field_n);
}
