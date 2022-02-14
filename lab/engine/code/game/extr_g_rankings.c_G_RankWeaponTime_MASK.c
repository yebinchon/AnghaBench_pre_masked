
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int weapon_change_time; } ;
typedef TYPE_1__ gclient_t ;
struct TYPE_6__ {TYPE_1__* client; } ;
struct TYPE_5__ {scalar_t__ warmupTime; int time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* VAR_11 ;
 TYPE_2__ VAR_12 ;
 int FUNC_0 (int,int,int ,int,int) ;

void FUNC_1( int VAR_13, int VAR_14 )
{
 gclient_t* VAR_15;
 int VAR_16;

 if( VAR_12.warmupTime != 0 )
 {

  return;
 }

 VAR_15 = VAR_11[VAR_13].client;
 VAR_16 = (VAR_12.time - VAR_15->weapon_change_time) / 1000;
 VAR_15->weapon_change_time = VAR_12.time;

 if( VAR_16 <= 0 )
 {
  return;
 }

 FUNC_0( VAR_13, -1, VAR_0, VAR_16, 1 );

 switch( VAR_14 )
 {
 case 136:
  FUNC_0( VAR_13, -1, VAR_2, VAR_16, 1 );
  break;
 case 132:
  FUNC_0( VAR_13, -1, VAR_6, VAR_16, 1 );
  break;
 case 128:
  FUNC_0( VAR_13, -1, VAR_10, VAR_16, 1 );
  break;
 case 134:
  FUNC_0( VAR_13, -1, VAR_4, VAR_16, 1 );
  break;
 case 129:
  FUNC_0( VAR_13, -1, VAR_9, VAR_16, 1 );
  break;
 case 133:
  FUNC_0( VAR_13, -1, VAR_5, VAR_16, 1 );
  break;
 case 130:
  FUNC_0( VAR_13, -1, VAR_8, VAR_16, 1 );
  break;
 case 131:
  FUNC_0( VAR_13, -1, VAR_7, VAR_16, 1 );
  break;
 case 137:
  FUNC_0( VAR_13, -1, VAR_1, VAR_16, 1 );
  break;
 case 135:
  FUNC_0( VAR_13, -1, VAR_3, VAR_16, 1 );
  break;
 default:
  break;
 }
}
