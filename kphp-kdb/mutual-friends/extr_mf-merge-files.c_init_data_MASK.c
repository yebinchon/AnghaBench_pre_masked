
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 void** VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int** VAR_8 ;
 int* VAR_9 ;
 int FUNC_1 (int ,char*,char*,long long,long long) ;
 int VAR_10 ;
 char* VAR_11 ;
 long long* VAR_12 ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int,...) ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (char*) ;
 int VAR_14 ;

void FUNC_8 (void) {
  char VAR_15[50];
  int VAR_16;

  VAR_4 = FUNC_3 (sizeof (unsigned char *) * VAR_1);
  VAR_8 = FUNC_3 (sizeof (int *) * VAR_1);

  VAR_7 = FUNC_4 (sizeof (int) * VAR_1);
  VAR_6 = FUNC_4 (sizeof (int) * VAR_1);
  VAR_5 = FUNC_4 (sizeof (int) * VAR_1);

  for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
    FUNC_6 (VAR_15, "from%03d", VAR_16);
    if (FUNC_2 (VAR_16, VAR_15, -1) < 0) {
      VAR_9[VAR_16] = -1;
      continue;
    }
    VAR_4[VAR_16] = FUNC_3 (sizeof (unsigned char) * VAR_0);

    long long VAR_17;
    FUNC_5 (VAR_9[VAR_16], &VAR_17, sizeof (long long));
    if (VAR_17 != VAR_12[VAR_16]) {
      FUNC_1 (VAR_13, "something wrong with file <%s> : wrong size %lld (%lld expected)\n", VAR_15, VAR_12[VAR_16], VAR_17);
    }
    FUNC_0 (VAR_17 == VAR_12[VAR_16]);


    int VAR_18;
    FUNC_5 (VAR_9[VAR_16], &VAR_18, sizeof (int));

    FUNC_0 (VAR_18 == VAR_14 + 1);
    VAR_8[VAR_16] = FUNC_3 (sizeof (int) * VAR_18);
    FUNC_5 (VAR_9[VAR_16], VAR_8[VAR_16], sizeof (int) * VAR_18);
  }
  if (FUNC_7 (VAR_11) > 0) {
    FUNC_2 (VAR_10, VAR_11, 0);
  }
  if (FUNC_7 (VAR_3) > 0) {
    FUNC_2 (VAR_2, VAR_3, 0);
  }
}
