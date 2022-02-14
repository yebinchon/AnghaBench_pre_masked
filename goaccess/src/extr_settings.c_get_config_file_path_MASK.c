
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* iconfigfile; scalar_t__ load_global_config; } ;
typedef int FILE ;


 int FUNC_0 (char*,int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 () ;
 char* FUNC_5 () ;
 char* FUNC_6 (char*,int *) ;
 int FUNC_7 (int ) ;

char *
FUNC_8 (void)
{
  char *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
  FILE *VAR_4;


  if (VAR_0.iconfigfile != ((void*)0)) {
    VAR_3 = FUNC_6 (VAR_0.iconfigfile, ((void*)0));
    if (VAR_3 == ((void*)0))
      FUNC_0 ("Unable to open the specified config file. %s", FUNC_7 (VAR_1));
    return VAR_3;
  }


  VAR_2 = FUNC_5 ();
  VAR_3 = FUNC_6 (VAR_2, ((void*)0));
  if (VAR_2) {
    FUNC_3 (VAR_2);
  }


  if ((VAR_4 = FUNC_2 (VAR_3, "r")) == ((void*)0) && VAR_0.load_global_config) {
    VAR_2 = FUNC_4 ();
    VAR_3 = FUNC_6 (VAR_2, ((void*)0));
    if (VAR_2) {
      FUNC_3 (VAR_2);
    }
  } else {
    FUNC_1 (VAR_4);
  }

  return VAR_3;
}
