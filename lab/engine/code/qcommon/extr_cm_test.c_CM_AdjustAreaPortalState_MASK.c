
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_2__ {int numAreas; scalar_t__* areaPortals; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_2( int VAR_2, int VAR_3, qboolean VAR_4 ) {
 if ( VAR_2 < 0 || VAR_3 < 0 ) {
  return;
 }

 if ( VAR_2 >= VAR_1.numAreas || VAR_3 >= VAR_1.numAreas ) {
  FUNC_1 (VAR_0, "CM_ChangeAreaPortalState: bad area number");
 }

 if ( VAR_4 ) {
  VAR_1.areaPortals[ VAR_2 * VAR_1.numAreas + VAR_3 ]++;
  VAR_1.areaPortals[ VAR_3 * VAR_1.numAreas + VAR_2 ]++;
 } else {
  VAR_1.areaPortals[ VAR_2 * VAR_1.numAreas + VAR_3 ]--;
  VAR_1.areaPortals[ VAR_3 * VAR_1.numAreas + VAR_2 ]--;
  if ( VAR_1.areaPortals[ VAR_3 * VAR_1.numAreas + VAR_2 ] < 0 ) {
   FUNC_1 (VAR_0, "CM_AdjustAreaPortalState: negative reference count");
  }
 }

 FUNC_0 ();
}
