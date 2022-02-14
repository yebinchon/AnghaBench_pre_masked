
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (void**,int) ;
 char** FUNC_1 (void**,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 () ;
 int * VAR_4 ;

void
FUNC_7 (int VAR_5)
{
  FILE *VAR_6 = VAR_4;
  int VAR_7 = FUNC_6 ();







  (void) FUNC_3 ();
  FUNC_5 (VAR_6, "\n");
  FUNC_5 (VAR_6, "==%d== GoAccess %s crashed by Sig %d\n", VAR_7, VAR_2, VAR_5);
  FUNC_5 (VAR_6, "==%d==\n", VAR_7);

  FUNC_2 (VAR_6);
  FUNC_5 (VAR_6, "==%d==\n", VAR_7);
  FUNC_5 (VAR_6, "==%d== %s:\n", VAR_7, VAR_0);
  FUNC_5 (VAR_6, "==%d== https://github.com/allinurl/goaccess/issues\n\n", VAR_7);
  FUNC_4 (VAR_1);
}
