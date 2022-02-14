
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int* FUNC_3 (char*) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,int*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_6 (void) {
  int VAR_5, VAR_6;
  if (!VAR_1 || !*VAR_1) {
    VAR_1 = FUNC_3 ("HOSTNAME");
    if (!VAR_1 || !*VAR_1) {
      int VAR_7 = FUNC_4 ("/etc/hostname", VAR_0);
      if (VAR_7 < 0) {
        FUNC_2 (VAR_3, "cannot read /etc/hostname: %m\n");
        FUNC_1 (2);
      }
      VAR_5 = FUNC_5 (VAR_7, VAR_2, 256);
      if (VAR_5 <= 0 || VAR_5 >= 256) {
        FUNC_2 (VAR_3, "cannot read hostname from /etc/hostname: %d bytes read\n", VAR_5);
        FUNC_1 (2);
      }
      VAR_2[VAR_5] = 0;
      FUNC_0 (VAR_7);
      VAR_1 = VAR_2;
      while (*VAR_1 == 9 || *VAR_1 == 32) {
        VAR_1++;
      }
      VAR_6 = 0;
      while (VAR_1[VAR_6] > 32) {
        VAR_6++;
      }
      VAR_1[VAR_6] = 0;
    }
  }
  if (!VAR_1 || !*VAR_1) {
    FUNC_2 (VAR_3, "fatal: cannot detect hostname\n");
    FUNC_1 (2);
  }
  VAR_6 = 0;
  while ((VAR_1[VAR_6] >= '0' && VAR_1[VAR_6] <= '9') || VAR_1[VAR_6] == '.' || VAR_1[VAR_6] == '-' || VAR_1[VAR_6] == '_' || (VAR_1[VAR_6] >= 'A' && VAR_1[VAR_6] <= 'Z') || (VAR_1[VAR_6] >= 'a' && VAR_1[VAR_6] <= 'z')) {
    VAR_6++;
  }
  if (VAR_1[VAR_6] || VAR_6 >= 64) {
    FUNC_2 (VAR_3, "fatal: bad hostname '%s'\n", VAR_1);
    FUNC_1 (2);
  }
  if (VAR_4 > 0) {
    FUNC_2 (VAR_3, "hostname is %s\n", VAR_1);
  }
  return 0;
}
