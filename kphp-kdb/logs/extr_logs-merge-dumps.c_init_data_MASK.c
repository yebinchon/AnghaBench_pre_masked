
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 void** VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int* VAR_7 ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_8 ;
 int FUNC_5 (char*,int,char*,char*,int) ;
 int VAR_9 ;

void FUNC_6 (void) {
  char VAR_10[100];
  int VAR_11;

  VAR_4 = FUNC_0 (sizeof (char *) * VAR_3);
  VAR_6 = FUNC_1 (sizeof (int) * VAR_3);
  VAR_5 = FUNC_1 (sizeof (int) * VAR_3);

  for (VAR_11 = VAR_2; VAR_11 < VAR_3; VAR_11++) {

    if (FUNC_5 (VAR_10, 100, "%s%d.dump", VAR_1, VAR_11) >= 100) {
      FUNC_4 (VAR_9, "Filename is too long.\n");
      FUNC_3 (1);
    }
    if (FUNC_2 (VAR_11, VAR_10, -1) < 0) {
      FUNC_4 (VAR_9, "File '%s' not found.\n", VAR_10);
      VAR_7[VAR_11] = -1;
      continue;
    } else {

    }
    VAR_8++;
    VAR_4[VAR_11] = FUNC_0 (sizeof (char) * VAR_0);
  }
}
