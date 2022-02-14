
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * geoip_database; } ;
typedef int GTypeIP ;






 unsigned char FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (char const*,char*,int ) ;

void
FUNC_3 (const char *VAR_4, char *VAR_5, GTypeIP VAR_6)
{
  unsigned char VAR_7 = FUNC_0 (VAR_3);

  if (VAR_2.geoip_database == ((void*)0) || VAR_3 == ((void*)0))
    return;

  switch (VAR_7) {
  case 131:
  case 129:
    if (VAR_0 == VAR_6)
      FUNC_2 (VAR_4, VAR_5, VAR_0);
    else
      FUNC_1 (((void*)0), ((void*)0), VAR_5);
    break;
  case 130:
  case 128:
    if (VAR_1 == VAR_6)
      FUNC_2 (VAR_4, VAR_5, VAR_1);
    else
      FUNC_1 (((void*)0), ((void*)0), VAR_5);
    break;
  }
}
