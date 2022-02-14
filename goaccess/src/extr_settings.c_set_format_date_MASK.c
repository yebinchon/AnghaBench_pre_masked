
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int date_format; } ;


 char* FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3 (void)
{
  char *VAR_1 = ((void*)0);

  if (FUNC_1 (VAR_0.date_format))
    VAR_1 = FUNC_2 ("%Y%m%d");
  else
    VAR_1 = FUNC_0 (VAR_0.date_format);

  return VAR_1;
}
