
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * geoip_database; } ;
struct TYPE_5__ {char* country_name; char* country_code; } ;
typedef TYPE_1__ GeoIPRecord ;
typedef int GTypeIP ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_3__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char const*,char const*,char*) ;
 TYPE_1__* FUNC_2 (char const*,int ) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_2, char *VAR_3, GTypeIP VAR_4)
{
  GeoIPRecord *VAR_5 = ((void*)0);
  const char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = VAR_2;

  if (VAR_0.geoip_database == ((void*)0) || VAR_1 == ((void*)0))
    return;


  if ((VAR_5 = FUNC_2 (VAR_8, VAR_4))) {
    VAR_6 = VAR_5->country_name;
    VAR_7 = VAR_5->country_code;
  }

  FUNC_1 (VAR_6, VAR_7, VAR_3);
  if (VAR_5 != ((void*)0)) {
    FUNC_0 (VAR_5);
  }
}
