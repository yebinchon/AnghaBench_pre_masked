
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* date_num_format; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (int,int) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8 (void)
{
  char *VAR_1 = ((void*)0), *VAR_2 = ((void*)0);
  int VAR_3 = 0, VAR_4 = 0;

  VAR_1 = FUNC_2 ();
  if (!VAR_1)
    return 1;

  if (FUNC_1 (VAR_1)) {
    FUNC_0 (VAR_1);
    VAR_0.date_num_format = FUNC_7 ("%Y%m%d");
    return 0;
  }

  VAR_4 = FUNC_4 (VAR_1) + 1;
  VAR_2 = FUNC_6 (VAR_4, sizeof (char));

  if (FUNC_5 (VAR_1, "Yy"))
    VAR_3 += FUNC_3 (VAR_2 + VAR_3, VAR_4 - VAR_3, "%%Y");
  if (FUNC_5 (VAR_1, "hbmB"))
    VAR_3 += FUNC_3 (VAR_2 + VAR_3, VAR_4 - VAR_3, "%%m");
  if (FUNC_5 (VAR_1, "de"))
    VAR_3 += FUNC_3 (VAR_2 + VAR_3, VAR_4 - VAR_3, "%%d");

  VAR_0.date_num_format = VAR_2;
  FUNC_0 (VAR_1);

  return VAR_3 == 0 ? 1 : 0;
}
