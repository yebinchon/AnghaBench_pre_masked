
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int field_i; TYPE_1__* fields; } ;
typedef TYPE_2__ type_desc ;
struct TYPE_4__ {scalar_t__* name; } ;


 int FUNC_0 (scalar_t__*,char*,int) ;

int FUNC_1 (type_desc *VAR_0, char *VAR_1, int VAR_2) {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0->field_i; VAR_3++) {
    if (!FUNC_0 (VAR_0->fields[VAR_3].name, VAR_1, VAR_2) && VAR_0->fields[VAR_3].name[VAR_2] == 0) {
      return VAR_3;
    }
  }

  return -1;
}
