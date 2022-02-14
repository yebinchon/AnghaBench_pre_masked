
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int picoMemStream_t ;
struct TYPE_7__ {int offset; } ;
typedef TYPE_2__ lwTagList ;
typedef int lwSurface ;
struct TYPE_8__ {int offset; TYPE_1__* pol; } ;
typedef TYPE_3__ lwPolygonList ;
struct TYPE_6__ {int part; int smoothgrp; int * surf; } ;





 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

int FUNC_5( picoMemStream_t *VAR_1, int VAR_2, lwTagList *VAR_3,
       lwPolygonList *VAR_4 ){
 unsigned int VAR_5;
 int VAR_6 = 0, VAR_7, VAR_8;

 FUNC_4( 0 );
 VAR_5 = FUNC_1( VAR_1 );
 VAR_6 = FUNC_3();
 if ( VAR_6 < 0 ) {
  return 0;
 }

 if ( VAR_5 != 128 && VAR_5 != 130 && VAR_5 != 129 ) {
  FUNC_0( VAR_1, VAR_2 - 4, VAR_0 );
  return 1;
 }

 while ( VAR_6 < VAR_2 ) {
  VAR_7 = FUNC_2( VAR_1 ) + VAR_4->offset;
  VAR_8 = FUNC_2( VAR_1 ) + VAR_3->offset;
  VAR_6 = FUNC_3();
  if ( VAR_6 < 0 || VAR_6 > VAR_2 ) {
   return 0;
  }

  switch ( VAR_5 ) {
  case 128: VAR_4->pol[ VAR_7 ].surf = ( lwSurface * ) ( (size_t)VAR_8 ); break;
  case 130: VAR_4->pol[ VAR_7 ].part = VAR_8; break;
  case 129: VAR_4->pol[ VAR_7 ].smoothgrp = VAR_8; break;
  }
 }

 return 1;
}
