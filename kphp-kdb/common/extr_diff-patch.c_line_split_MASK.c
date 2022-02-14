
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; int length; } ;
typedef TYPE_1__ diff_string_t ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (unsigned char *VAR_0, int VAR_1, diff_string_t **VAR_2) {
  int VAR_3, VAR_4 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    if (VAR_0[VAR_3] == '\n') {
      VAR_4++;
    }
  }
  diff_string_t *VAR_5 = FUNC_1 ((VAR_4 + 1) * sizeof (diff_string_t));
  int VAR_6 = 0, VAR_7 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_1 - 1; VAR_3++) {
    if (VAR_0[VAR_3] == '\n') {
      VAR_5[VAR_7].offset = VAR_6;
      VAR_5[VAR_7].length = VAR_3 - VAR_6 + 1;
      VAR_7++;
      VAR_6 = VAR_3 + 1;
    }
  }
  VAR_5[VAR_7].offset = VAR_6;
  VAR_5[VAR_7].length = VAR_1 - VAR_6;
  VAR_7++;
  FUNC_0 (VAR_7 <= VAR_4 + 1);
  *VAR_2 = VAR_5;







  return VAR_7;
}
