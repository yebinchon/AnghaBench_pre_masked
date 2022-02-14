
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashset_int {int dummy; } ;
struct connection {int In; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct hashset_int*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct hashset_int*) ;
 int FUNC_3 (struct hashset_int*,int) ;
 scalar_t__ FUNC_4 (char*,struct hashset_int*,int ) ;
 int FUNC_5 (int *,char*,int) ;
 char* VAR_2 ;

int FUNC_6 (struct connection *VAR_3, int VAR_4, int VAR_5) {
  char *VAR_6 = VAR_2;
  FUNC_0 (FUNC_5 (&VAR_3->In, VAR_6, VAR_4) == VAR_4);
  VAR_6[VAR_4] = 0;
  int VAR_7, VAR_8 = 1;
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
    if (VAR_6[VAR_7] == ',') {
      VAR_8++;
    }
  }
  if (VAR_8 < 10) {
    VAR_8 = 10;
  }
  struct hashset_int VAR_9;
  if (!FUNC_3 (&VAR_9, VAR_8)) {
    return 0;
  }

  if (FUNC_4 (VAR_2, &VAR_9, VAR_1) < 0) {
    FUNC_2 (&VAR_9);
    return 0;
  }

  int VAR_10 = FUNC_1 (&VAR_9, VAR_5);
  VAR_0 += VAR_10;
  FUNC_2 (&VAR_9);
  return 1;
}
