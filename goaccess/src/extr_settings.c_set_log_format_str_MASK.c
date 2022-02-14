
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* log_format; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 void* FUNC_6 (char const*) ;

void
FUNC_7 (const char *VAR_1)
{
  char *VAR_2 = ((void*)0);
  int VAR_3 = FUNC_2 (VAR_1);


  if (VAR_0.log_format)
    FUNC_1 (VAR_0.log_format);


  if (VAR_3 == -1) {
    VAR_0.log_format = FUNC_6 (VAR_1);
    return;
  }


  if ((VAR_2 = FUNC_3 (VAR_3)) == ((void*)0)) {
    FUNC_0 (("Unable to set log format from enum: %s\n", VAR_1));
    return;
  }

  VAR_0.log_format = FUNC_6 (VAR_2);

  FUNC_5 (VAR_1);
  FUNC_4 (VAR_1);
  FUNC_1 (VAR_2);
}
