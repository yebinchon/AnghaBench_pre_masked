
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* killerName; } ;


 TYPE_1__ VAR_0 ;
 char* FUNC_0 (char*,scalar_t__*) ;

const char *FUNC_1(void) {
 const char *VAR_1 = "";
 if ( VAR_0.killerName[0] ) {
  VAR_1 = FUNC_0("Tagged by %s", VAR_0.killerName );
 }
 return VAR_1;
}
