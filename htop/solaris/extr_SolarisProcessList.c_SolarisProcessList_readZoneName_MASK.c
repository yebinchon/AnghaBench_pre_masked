
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* ks_name; } ;
typedef TYPE_1__ kstat_t ;
typedef int kstat_ctl_t ;
struct TYPE_6__ {scalar_t__ zoneid; } ;
typedef TYPE_2__ SolarisProcess ;


 TYPE_1__* FUNC_0 (int *,char*,scalar_t__,int *) ;
 char* FUNC_1 (char*) ;

char* FUNC_2(kstat_ctl_t* VAR_0, SolarisProcess* VAR_1) {
  char* VAR_2;
  if ( VAR_1->zoneid == 0 ) {
     VAR_2 = FUNC_1("global    ");
  } else if ( VAR_0 == ((void*)0) ) {
     VAR_2 = FUNC_1("unknown   ");
  } else {
     kstat_t* VAR_3 = FUNC_0( VAR_0, "zones", VAR_1->zoneid, ((void*)0) );
     VAR_2 = FUNC_1(VAR_3->ks_name);
  }
  return VAR_2;
}
