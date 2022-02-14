
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ floodvalid; int floodnum; } ;
typedef TYPE_1__ cArea_t ;
struct TYPE_4__ {scalar_t__ floodvalid; int* areaPortals; int numAreas; TYPE_1__* areas; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_1( int VAR_2, int VAR_3) {
 int VAR_4;
 cArea_t *VAR_5;
 int *VAR_6;

 VAR_5 = &VAR_1.areas[ VAR_2 ];

 if ( VAR_5->floodvalid == VAR_1.floodvalid ) {
  if (VAR_5->floodnum == VAR_3)
   return;
  FUNC_0 (VAR_0, "FloodArea_r: reflooded");
 }

 VAR_5->floodnum = VAR_3;
 VAR_5->floodvalid = VAR_1.floodvalid;
 VAR_6 = VAR_1.areaPortals + VAR_2 * VAR_1.numAreas;
 for ( VAR_4=0 ; VAR_4 < VAR_1.numAreas ; VAR_4++ ) {
  if ( VAR_6[VAR_4] > 0 ) {
   FUNC_1( VAR_4, VAR_3 );
  }
 }
}
