
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int brush_t ;
struct TYPE_4__ {int* portalareas; int compileFlags; int brushNum; scalar_t__ entityNum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_4( qboolean VAR_9 ){
 brush_t *VAR_10;



 FUNC_1( VAR_9 );


 if ( VAR_9 ) {
  return;
 }


 VAR_3->portalareas[ 0 ] = -1;
 VAR_3->portalareas[ 1 ] = -1;
 VAR_3->entityNum = VAR_8 - 1;
 VAR_3->brushNum = VAR_4;


 if ( !FUNC_2( VAR_3 ) ) {
  return;
 }


 FUNC_3( VAR_3 );


 if ( VAR_6 && ( VAR_3->compileFlags & VAR_0 ) ) {

  return;
 }


 if ( VAR_7 && ( VAR_3->compileFlags & VAR_2 ) ) {

  return;
 }


 if ( VAR_5 && ( VAR_3->compileFlags & VAR_1 ) ) {

  return;
 }


 VAR_10 = FUNC_0();
}
