
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; scalar_t__* r; int ** k; } ;
typedef TYPE_1__ qkey_group ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;

char *FUNC_2 (qkey_group *VAR_7) {
  VAR_4 = VAR_2;
  VAR_0 = 1;

  VAR_6 = 1;
  if (VAR_7->n > 1) {
    FUNC_0 ("[");
  }
  int VAR_8, VAR_9 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_7->n; VAR_8++) {
    if (VAR_7->k[VAR_8] != ((void*)0)) {
      FUNC_1 (VAR_7->k[VAR_8]);
      VAR_9++;
    } else {
      int VAR_10 = (int)VAR_7->r[VAR_8];
      FUNC_0 ("{\"failed\":2,\"err\":%d}", VAR_10);
      VAR_0 = 0;
      VAR_5[2 + VAR_10 / 4]++;
    }
    if (VAR_3) {
      VAR_6 = 0;

      VAR_5[3]++;
      VAR_1++;

      VAR_3 = 0;
      VAR_4 = VAR_2;
      FUNC_0 ("{\"failed\":3}");

      return VAR_2;
    }
    if (VAR_8 + 1 != VAR_7->n) {
      FUNC_0 (",");
    }
  }
  if (VAR_7->n > 1) {
    FUNC_0 ("]");
  }
  if (!VAR_0) {
    VAR_5[0] += VAR_9;
  }

  VAR_6 = 0;
  return VAR_2;
}
