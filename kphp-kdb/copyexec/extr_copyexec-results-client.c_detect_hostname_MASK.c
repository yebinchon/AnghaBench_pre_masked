
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int* FUNC_2 (char*) ;
 int* VAR_1 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int,char*,int*) ;

int FUNC_7 (void) {
  static char VAR_2[256];
  int VAR_3, VAR_4;
  if (!VAR_1 || !*VAR_1) {
    VAR_1 = FUNC_2 ("HOSTNAME");
    if (!VAR_1 || !*VAR_1) {
      int VAR_5 = FUNC_4 ("/etc/hostname", VAR_0);
      if (VAR_5 < 0) {
        FUNC_3 ("cannot read /etc/hostname: %m\n");
        FUNC_1 (2);
      }
      VAR_3 = FUNC_5 (VAR_5, VAR_2, 256);
      if (VAR_3 <= 0 || VAR_3 >= 256) {
        FUNC_3 ("cannot read hostname from /etc/hostname: %d bytes read\n", VAR_3);
        FUNC_1 (2);
      }
      VAR_2[VAR_3] = 0;
      FUNC_0 (VAR_5);
      VAR_1 = VAR_2;
      while (*VAR_1 == 9 || *VAR_1 == 32) {
        VAR_1++;
      }
      VAR_4 = 0;
      while (VAR_1[VAR_4] > 32) {
        VAR_4++;
      }
      VAR_1[VAR_4] = 0;
    }
  }
  if (!VAR_1 || !*VAR_1) {
    FUNC_3 ("fatal: cannot detect hostname\n");
    FUNC_1 (2);
  }
  VAR_4 = 0;
  while ((VAR_1[VAR_4] >= '0' && VAR_1[VAR_4] <= '9') || VAR_1[VAR_4] == '.' || VAR_1[VAR_4] == '-' || VAR_1[VAR_4] == '_' || (VAR_1[VAR_4] >= 'A' && VAR_1[VAR_4] <= 'Z') || (VAR_1[VAR_4] >= 'a' && VAR_1[VAR_4] <= 'z')) {
    VAR_4++;
  }
  if (VAR_1[VAR_4] || VAR_4 >= 64) {
    FUNC_3 ("fatal: bad hostname '%s'\n", VAR_1);
    FUNC_1 (2);
  }
  FUNC_6 (1, "hostname is %s\n", VAR_1);
  return 0;
}
