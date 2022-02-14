
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* date_num_format; char* spec_date_time_num_format; scalar_t__ date_spec_hr; } ;


 char* FUNC_0 (char const*,char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,char) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  char *VAR_1 = ((void*)0), *VAR_2 = FUNC_2 ();
  const char *VAR_3 = VAR_0.date_num_format;

  if (!VAR_3 || !VAR_2)
    return;

  if (VAR_0.date_spec_hr && FUNC_3 (VAR_2, 'H'))
    VAR_1 = FUNC_0 (VAR_3, "%H");
  else
    VAR_1 = FUNC_4 (VAR_3);

  VAR_0.spec_date_time_num_format = VAR_1;
  FUNC_1 (VAR_2);
}
