
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashset_ll {int filled; } ;
struct connection {int In; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct hashset_ll*,int,int) ;
 int FUNC_2 (struct hashset_ll*) ;
 int FUNC_3 (struct hashset_ll*,int) ;
 int FUNC_4 (struct hashset_ll*,long long) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (char*,char*,long long*) ;
 char* FUNC_7 (char*,char) ;
 char* VAR_0 ;
 int FUNC_8 (int,char*,long long) ;

int FUNC_9 (struct connection *VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  char *VAR_5 = VAR_0;
  FUNC_0 (FUNC_5 (&VAR_1->In, VAR_5, VAR_2) == VAR_2);
  VAR_5[VAR_2] = 0;
  int VAR_6, VAR_7 = 1;
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    if (VAR_5[VAR_6] == ',') {
      VAR_7++;
    }
  }
  if (VAR_7 < 10) {
    VAR_7 = 10;
  }
  struct hashset_ll VAR_8;
  if (!FUNC_3 (&VAR_8, VAR_7)) {
    return 0;
  }
  char *VAR_9 = VAR_5;
  while (*VAR_9) {
    char *VAR_10 = FUNC_7 (VAR_9, ',');
    if (VAR_10 != ((void*)0)) {
      *VAR_10 = 0;
    }
    long long VAR_11;
    if (FUNC_6 (VAR_9, "%llx", &VAR_11) != 1) {
      break;
    }
    if (VAR_8.filled >= VAR_7) { break; }
    FUNC_8 (3, "u = %llx\n", VAR_11);
    if (VAR_11) {
      FUNC_4 (&VAR_8, VAR_11);
    }
    if (VAR_10 == ((void*)0)) {
      break;
    }
    VAR_9 = VAR_10 + 1;
  }

  int VAR_12 = FUNC_1 (&VAR_8, VAR_3, VAR_4);
  FUNC_2 (&VAR_8);
  return VAR_12;
}
