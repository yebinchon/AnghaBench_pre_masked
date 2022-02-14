
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashset_ll {int filled; } ;
struct connection {int In; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct hashset_ll*) ;
 int FUNC_2 (struct hashset_ll*) ;
 int FUNC_3 (struct hashset_ll*,int) ;
 int FUNC_4 (struct hashset_ll*,long long) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (char*,char*,long long*) ;
 char* FUNC_7 (char*,char) ;
 char* VAR_1 ;
 int FUNC_8 (int,char*,long long) ;

int FUNC_9 (struct connection *VAR_2, int VAR_3) {
  char *VAR_4 = VAR_1;
  FUNC_0 (FUNC_5 (&VAR_2->In, VAR_4, VAR_3) == VAR_3);
  VAR_4[VAR_3] = 0;
  int VAR_5, VAR_6 = 1;
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
    if (VAR_4[VAR_5] == ',') {
      VAR_6++;
    }
  }
  if (VAR_6 < 10) {
    VAR_6 = 10;
  }
  struct hashset_ll VAR_7;
  if (!FUNC_3 (&VAR_7, VAR_6)) {
    return 0;
  }
  char *VAR_8 = VAR_4;
  while (*VAR_8) {
    char *VAR_9 = FUNC_7 (VAR_8, ',');
    if (VAR_9 != ((void*)0)) {
      *VAR_9 = 0;
    }
    long long VAR_10;
    if (FUNC_6 (VAR_8, "%llx", &VAR_10) != 1) {
      break;
    }
    if (VAR_7.filled >= VAR_6) { break; }
    FUNC_8 (3, "u = %llx\n", VAR_10);
    if (VAR_10) {
      FUNC_4 (&VAR_7, VAR_10);
    }
    if (VAR_9 == ((void*)0)) {
      break;
    }
    VAR_8 = VAR_9 + 1;
  }
  int VAR_11 = FUNC_1 (&VAR_7);
  VAR_0 += VAR_11;
  FUNC_2 (&VAR_7);
  return 1;
}
