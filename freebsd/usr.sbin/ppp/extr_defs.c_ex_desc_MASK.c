
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,int) ;

const char *
FUNC_1(int VAR_0)
{
  static char VAR_1[12];
  static const char * const VAR_2[] = {
    "normal", "start", "sock", "modem", "dial", "dead", "done",
    "reboot", "errdead", "hangup", "term", "nodial", "nologin",
    "redial", "reconnect"
  };

  if (VAR_0 >= 0 && VAR_0 < (int)(sizeof VAR_2 / sizeof *VAR_2))
    return VAR_2[VAR_0];
  FUNC_0(VAR_1, sizeof VAR_1, "%d", VAR_0);
  return VAR_1;
}
