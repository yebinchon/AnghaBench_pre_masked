
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 () ;
 int VAR_2 ;

void
FUNC_3 (void)
{
  char *VAR_3 = FUNC_2 ();

  if (!VAR_3) {
    FUNC_0 (VAR_2, "%s\n", VAR_0);
    FUNC_0 (VAR_2, "%s `-p /path/goaccess.conf`\n", VAR_1);
  } else {
    FUNC_0 (VAR_2, "%s\n", VAR_3);
    FUNC_1 (VAR_3);
  }
}
