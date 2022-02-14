
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {scalar_t__ gametype; size_t newBotIndex; int * playerNameBuffers; TYPE_2__* playerTeam; TYPE_1__* playerType; } ;
struct TYPE_5__ {scalar_t__ curvalue; } ;
struct TYPE_4__ {int curvalue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static qboolean FUNC_1( const char *VAR_5 ) {
 int VAR_6;

 for( VAR_6 = 1; VAR_6 < VAR_1; VAR_6++ ) {
  if( VAR_4.playerType[VAR_6].curvalue != 1 ) {
   continue;
  }
  if( (VAR_4.gametype >= VAR_0) &&
   (VAR_4.playerTeam[VAR_6].curvalue != VAR_4.playerTeam[VAR_4.newBotIndex].curvalue ) ) {
   continue;
  }
  if( FUNC_0( VAR_5, VAR_4.playerNameBuffers[VAR_6] ) == 0 ) {
   return VAR_3;
  }
 }

 return VAR_2;
}
