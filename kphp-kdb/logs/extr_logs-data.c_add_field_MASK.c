
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int field_i; int field_n; int shifts_len; TYPE_2__* fields; } ;
typedef TYPE_1__ type_desc ;
typedef int field_desc ;
struct TYPE_6__ {int max_len; int type; int shift; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

void FUNC_3 (type_desc *VAR_3, char *VAR_4, int VAR_5) {
  FUNC_0 (VAR_5 >= 0);
  VAR_3->field_i += VAR_0;
  VAR_3->field_n += VAR_0;
  VAR_3->fields -= VAR_0;
  if (VAR_3->field_i == VAR_3->field_n) {
    int VAR_6 = VAR_3->field_n + 1;
    if (VAR_6 == 0) {
      VAR_6 = 1;
    }
    VAR_3->fields = FUNC_1 (VAR_3->fields, sizeof (field_desc) * VAR_6, sizeof (field_desc) * VAR_3->field_n);
    VAR_3->field_n = VAR_6;
  } else {
    FUNC_0 (0);
  }
  VAR_3->field_i -= VAR_0;
  VAR_3->field_n -= VAR_0;
  VAR_3->fields += VAR_0;

  int VAR_7 = VAR_3->field_i++;
  if (VAR_5 > VAR_2) {
    int VAR_8 = VAR_5 - VAR_2;
    FUNC_0 (0 < VAR_8 && VAR_8 < VAR_1);
    VAR_3->fields[VAR_7].max_len = VAR_8;
    VAR_5 = VAR_2;
  } else {
    VAR_3->fields[VAR_7].max_len = 0;
  }
  VAR_3->fields[VAR_7].type = VAR_5;
  VAR_3->fields[VAR_7].name = FUNC_2 (VAR_4);

  VAR_3->fields[VAR_7].shift = VAR_3->shifts_len;
  VAR_3->shifts_len += VAR_5 == VAR_2 ? 2 : 1;
}
