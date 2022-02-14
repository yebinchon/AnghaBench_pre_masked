
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ serverTime; } ;
typedef TYPE_1__ snapshot_t ;
typedef scalar_t__ qboolean ;
struct TYPE_9__ {scalar_t__ latestSnapshotNum; TYPE_1__* snap; TYPE_1__* activeSnapshots; } ;
struct TYPE_8__ {scalar_t__ processedSnapshotNum; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static snapshot_t *FUNC_3( void ) {
 qboolean VAR_2;
 snapshot_t *VAR_3;

 if ( VAR_0.latestSnapshotNum > VAR_1.processedSnapshotNum + 1000 ) {
  FUNC_1( "WARNING: CG_ReadNextSnapshot: way out of range, %i > %i\n",
   VAR_0.latestSnapshotNum, VAR_1.processedSnapshotNum );
 }

 while ( VAR_1.processedSnapshotNum < VAR_0.latestSnapshotNum ) {

  if ( VAR_0.snap == &VAR_0.activeSnapshots[0] ) {
   VAR_3 = &VAR_0.activeSnapshots[1];
  } else {
   VAR_3 = &VAR_0.activeSnapshots[0];
  }


  VAR_1.processedSnapshotNum++;
  VAR_2 = FUNC_2( VAR_1.processedSnapshotNum, VAR_3 );


  if ( VAR_0.snap && VAR_2 && VAR_3->serverTime == VAR_0.snap->serverTime ) {

  }


  if ( VAR_2 ) {
   FUNC_0( VAR_3 );
   return VAR_3;
  }







  FUNC_0( ((void*)0) );



 }


 return ((void*)0);
}
