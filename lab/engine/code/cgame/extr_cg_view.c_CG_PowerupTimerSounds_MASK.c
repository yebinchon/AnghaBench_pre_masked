
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int time; int oldTime; TYPE_3__* snap; } ;
struct TYPE_6__ {int wearOffSound; } ;
struct TYPE_9__ {TYPE_1__ media; } ;
struct TYPE_7__ {int* powerups; int clientNum; } ;
struct TYPE_8__ {TYPE_2__ ps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1( void ) {
 int VAR_6;
 int VAR_7;


 for ( VAR_6 = 0 ; VAR_6 < VAR_1 ; VAR_6++ ) {
  VAR_7 = VAR_4.snap->ps.powerups[VAR_6];
  if ( VAR_7 <= VAR_4.time ) {
   continue;
  }
  if ( VAR_7 - VAR_4.time >= VAR_2 * VAR_3 ) {
   continue;
  }
  if ( ( VAR_7 - VAR_4.time ) / VAR_3 != ( VAR_7 - VAR_4.oldTime ) / VAR_3 ) {
   FUNC_0( ((void*)0), VAR_4.snap->ps.clientNum, VAR_0, VAR_5.media.wearOffSound );
  }
 }
}
