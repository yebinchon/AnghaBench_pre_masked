
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int glconfig_t ;
struct TYPE_2__ {int* visClusters; int registered; scalar_t__ visIndex; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

void FUNC_4( glconfig_t *VAR_4 ) {
 int VAR_5;

 FUNC_2();

 *VAR_4 = VAR_1;

 FUNC_3();

 VAR_3.visIndex = 0;

 for(VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3.visClusters[VAR_5] = -2;
 }

 FUNC_1();
 FUNC_0();

 VAR_3.registered = VAR_2;
}
