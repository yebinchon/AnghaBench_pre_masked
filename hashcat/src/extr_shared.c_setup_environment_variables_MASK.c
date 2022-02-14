
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* profile_dir; } ;
typedef TYPE_1__ folder_config_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char**,char*,char*) ;
 int FUNC_4 (char*) ;

void FUNC_5 (const folder_config_t *VAR_1)
{
  char *VAR_2 = FUNC_2 ("COMPUTE");

  if (VAR_2)
  {
    char *VAR_3;

    FUNC_3 (&VAR_3, "DISPLAY=%s", VAR_2);

    FUNC_4 (VAR_3);

    FUNC_1 (VAR_3);
  }
  else
  {
    if (FUNC_2 ("DISPLAY") == ((void*)0))
      FUNC_4 ((char *) "DISPLAY=:0");
  }
  if (FUNC_2 ("TMPDIR") == ((void*)0))
  {
    char *VAR_4 = ((void*)0);

    FUNC_3 (&VAR_4, "TMPDIR=%s", VAR_1->profile_dir);

    FUNC_4 (VAR_4);


  }

  if (FUNC_2 ("CL_CONFIG_USE_VECTORIZER") == ((void*)0))
    FUNC_4 ((char *) "CL_CONFIG_USE_VECTORIZER=False");




}
