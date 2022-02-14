
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {size_t crosshairClientNum; int crosshairClientTime; scalar_t__ renderingThirdPerson; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {TYPE_1__* clientinfo; } ;
struct TYPE_6__ {char* name; } ;


 float VAR_0 ;
 int FUNC_0 (int,int,char*,float) ;
 float FUNC_1 (char*) ;
 float* FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,float,float*,char*,int ,int ,int ) ;
 float FUNC_5 (char*,float,int ) ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7( void ) {
 float *VAR_6;
 char *VAR_7;
 float VAR_8;

 if ( !VAR_3.integer ) {
  return;
 }
 if ( !VAR_4.integer ) {
  return;
 }
 if ( VAR_2.renderingThirdPerson ) {
  return;
 }


 FUNC_3();


 VAR_6 = FUNC_2( VAR_2.crosshairClientTime, 1000 );
 if ( !VAR_6 ) {
  FUNC_6( ((void*)0) );
  return;
 }

 VAR_7 = VAR_5.clientinfo[ VAR_2.crosshairClientNum ].name;





 VAR_8 = FUNC_1( VAR_7 ) * VAR_0;
 FUNC_0( 320 - VAR_8 / 2, 170, VAR_7, VAR_6[3] * 0.5f );

 FUNC_6( ((void*)0) );
}
