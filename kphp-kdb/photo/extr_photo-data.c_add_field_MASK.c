
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int field_i; int field_n; int shifts_len; TYPE_2__* fields; } ;
typedef TYPE_1__ type_desc ;
typedef int field_desc ;
struct TYPE_6__ {int type; int is_const; int id; int shift; int name; } ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4 (type_desc *VAR_2, char *VAR_3, int VAR_4, int VAR_5) {
  FUNC_0 (VAR_4 >= 0);
  if (VAR_2->field_i == VAR_2->field_n) {
    int VAR_6 = VAR_2->field_n + 1;
    if (FUNC_3 (VAR_6 <= 0)) {
      VAR_6 = 1;
    }
    VAR_2->fields = FUNC_1 (VAR_2->fields, sizeof (field_desc) * VAR_6, sizeof (field_desc) * VAR_2->field_n);
    VAR_2->field_n = VAR_6;
  } else {
    FUNC_0 (0);
  }

  int VAR_7 = VAR_2->field_i++;
  VAR_2->fields[VAR_7].type = VAR_4;
  VAR_2->fields[VAR_7].name = FUNC_2 (VAR_3);
  VAR_2->fields[VAR_7].is_const = VAR_5;
  VAR_2->fields[VAR_7].id = VAR_7;

  VAR_2->fields[VAR_7].shift = VAR_2->shifts_len;
  VAR_2->shifts_len += (VAR_4 == VAR_1 || VAR_4 == VAR_0) ? 2 : 1;
}
