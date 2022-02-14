
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* spec_date_time_num_format; char* spec_date_time_format; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,char*) ;
 scalar_t__ FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (int,int) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  char *VAR_1 = ((void*)0);
  const char *VAR_2 = VAR_0.spec_date_time_num_format;
  int VAR_3 = 0, VAR_4 = 0;

  if (!VAR_2)
    return;

  VAR_4 = (FUNC_2 (VAR_2) * 2) + 1;
  VAR_1 = FUNC_3 (VAR_4, sizeof (char));

  if (FUNC_1 (VAR_2, 'd'))
    VAR_3 += FUNC_0 (VAR_1 + VAR_3, VAR_4 - VAR_3, "%%d/");
  if (FUNC_1 (VAR_2, 'm'))
    VAR_3 += FUNC_0 (VAR_1 + VAR_3, VAR_4 - VAR_3, "%%b/");
  if (FUNC_1 (VAR_2, 'Y'))
    VAR_3 += FUNC_0 (VAR_1 + VAR_3, VAR_4 - VAR_3, "%%Y");
  if (FUNC_1 (VAR_2, 'H'))
    VAR_3 += FUNC_0 (VAR_1 + VAR_3, VAR_4 - VAR_3, ":%%H");

  VAR_0.spec_date_time_format = VAR_1;
}
