
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int time; int latestSnapshotTime; } ;
struct TYPE_3__ {int* frameSamples; int frameCount; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_0( void ) {
 int VAR_3;

 VAR_3 = VAR_1.time - VAR_1.latestSnapshotTime;
 VAR_2.frameSamples[ VAR_2.frameCount & ( VAR_0 - 1) ] = VAR_3;
 VAR_2.frameCount++;
}
