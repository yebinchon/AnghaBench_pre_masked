
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {int rewardStack; int* rewardCount; int * rewardShader; int * rewardSound; int rewardTime; int time; } ;
struct TYPE_3__ {int integer; } ;


 int FUNC_0 (float,float,int,int,int ) ;
 int FUNC_1 (float,float,char*,float*,int ,int ,int,int ,int ) ;
 int FUNC_2 (char*) ;
 float* FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (char*,int,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (float*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7( void ) {
 float *VAR_10;
 int VAR_11, VAR_12;
 float VAR_13, VAR_14;
 char VAR_15[32];

 if ( !VAR_7.integer ) {
  return;
 }

 VAR_10 = FUNC_3( VAR_6.rewardTime, VAR_2 );
 if ( !VAR_10 ) {
  if (VAR_6.rewardStack > 0) {
   for(VAR_11 = 0; VAR_11 < VAR_6.rewardStack; VAR_11++) {
    VAR_6.rewardSound[VAR_11] = VAR_6.rewardSound[VAR_11+1];
    VAR_6.rewardShader[VAR_11] = VAR_6.rewardShader[VAR_11+1];
    VAR_6.rewardCount[VAR_11] = VAR_6.rewardCount[VAR_11+1];
   }
   VAR_6.rewardTime = VAR_6.time;
   VAR_6.rewardStack--;
   VAR_10 = FUNC_3( VAR_6.rewardTime, VAR_2 );
   FUNC_6(VAR_6.rewardSound[0], VAR_0);
  } else {
   return;
  }
 }

 FUNC_5( VAR_10 );
 if ( VAR_6.rewardCount[0] >= 10 ) {
  VAR_14 = 56;
  VAR_13 = 320 - VAR_1/2;
  FUNC_0( VAR_13, VAR_14, VAR_1-4, VAR_1-4, VAR_6.rewardShader[0] );
  FUNC_4(VAR_15, sizeof(VAR_15), "%d", VAR_6.rewardCount[0]);
  VAR_13 = ( VAR_3 - VAR_5 * FUNC_2( VAR_15 ) ) / 2;
  FUNC_1( VAR_13, VAR_14+VAR_1, VAR_15, VAR_10, VAR_8, VAR_9,
        VAR_5, VAR_4, 0 );
 }
 else {

  VAR_12 = VAR_6.rewardCount[0];

  VAR_14 = 56;
  VAR_13 = 320 - VAR_12 * VAR_1/2;
  for ( VAR_11 = 0 ; VAR_11 < VAR_12 ; VAR_11++ ) {
   FUNC_0( VAR_13, VAR_14, VAR_1-4, VAR_1-4, VAR_6.rewardShader[0] );
   VAR_13 += VAR_1;
  }
 }
 FUNC_5( ((void*)0) );
}
