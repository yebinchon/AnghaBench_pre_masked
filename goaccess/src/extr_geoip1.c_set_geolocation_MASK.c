
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ geoip_database; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,int*) ;
 int FUNC_4 () ;

int
FUNC_5 (char *VAR_1, char *VAR_2, char *VAR_3, char *VAR_4)
{
  int VAR_5 = 0;

  if (!FUNC_4 ())
    return 1;

  if (FUNC_3 (VAR_1, &VAR_5))
    return 1;

  FUNC_2 (VAR_1, VAR_3, VAR_5);
  FUNC_1 (VAR_1, VAR_2, VAR_5);
  if (VAR_0.geoip_database)
    FUNC_0 (VAR_1, VAR_4, VAR_5);

  return 0;
}
