
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ping; int snapFlags; } ;
typedef TYPE_1__ snapshot_t ;
struct TYPE_5__ {int* snapshotSamples; int snapshotCount; int * snapshotFlags; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_0( snapshot_t *VAR_2 ) {

 if ( !VAR_2 ) {
  VAR_1.snapshotSamples[ VAR_1.snapshotCount & ( VAR_0 - 1) ] = -1;
  VAR_1.snapshotCount++;
  return;
 }


 VAR_1.snapshotSamples[ VAR_1.snapshotCount & ( VAR_0 - 1) ] = VAR_2->ping;
 VAR_1.snapshotFlags[ VAR_1.snapshotCount & ( VAR_0 - 1) ] = VAR_2->snapFlags;
 VAR_1.snapshotCount++;
}
