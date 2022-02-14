
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


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ) ;

void FUNC_2 (type_desc *VAR_1) {
  FUNC_1 (VAR_1->name);
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->field_i; VAR_2++) {
    FUNC_1 (VAR_1->fields[VAR_2].name);
  }
  FUNC_0 (VAR_1->fields - VAR_0, sizeof (field_desc) * (VAR_1->field_n + VAR_0));
}
