
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int geo_db; int * geoip_database; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

void
FUNC_2 (void)
{

  if (VAR_0.geoip_database != ((void*)0))
    VAR_1 = FUNC_1 (VAR_0.geoip_database);

  else
    VAR_1 = FUNC_0 (VAR_0.geo_db);
}
