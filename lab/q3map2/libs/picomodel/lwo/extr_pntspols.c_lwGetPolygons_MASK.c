
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int picoMemStream_t ;
struct TYPE_7__ {int offset; int voffset; TYPE_2__* pol; } ;
typedef TYPE_1__ lwPolygonList ;
struct TYPE_8__ {int nverts; int flags; unsigned int type; TYPE_3__* v; } ;
typedef TYPE_2__ lwPolygon ;
struct TYPE_9__ {int index; } ;
typedef TYPE_3__ lwPolVert ;


 int FUNC_0 (unsigned char*) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 () ;
 unsigned char* FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned char**) ;
 int FUNC_8 (unsigned char**) ;

int FUNC_9( picoMemStream_t *VAR_0, int VAR_1, lwPolygonList *VAR_2, int VAR_3 ){
 lwPolygon *VAR_4;
 lwPolVert *VAR_5;
 unsigned char *VAR_6, *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14;


 if ( VAR_1 == 0 ) {
  return 1;
 }



 FUNC_6( 0 );
 VAR_14 = FUNC_1( VAR_0 );
 VAR_6 = FUNC_3( VAR_0, VAR_1 - 4 );
 if ( VAR_1 != FUNC_2() ) {
  goto Fail;
 }



 VAR_12 = 0;
 VAR_13 = 0;
 VAR_7 = VAR_6;

 while ( VAR_7 < VAR_6 + VAR_1 - 4 ) {
  VAR_11 = FUNC_7( &VAR_7 );
  VAR_11 &= 0x03FF;
  VAR_12 += VAR_11;
  VAR_13++;
  for ( VAR_8 = 0; VAR_8 < VAR_11; VAR_8++ )
   VAR_9 = FUNC_8( &VAR_7 );
 }

 if ( !FUNC_4( VAR_2, VAR_13, VAR_12 ) ) {
  goto Fail;
 }



 VAR_7 = VAR_6;
 VAR_4 = VAR_2->pol + VAR_2->offset;
 VAR_5 = VAR_2->pol[ 0 ].v + VAR_2->voffset;

 for ( VAR_8 = 0; VAR_8 < VAR_13; VAR_8++ ) {
  VAR_11 = FUNC_7( &VAR_7 );
  VAR_10 = VAR_11 & 0xFC00;
  VAR_11 &= 0x03FF;

  VAR_4->nverts = VAR_11;
  VAR_4->flags = VAR_10;
  VAR_4->type = VAR_14;
  if ( !VAR_4->v ) {
   VAR_4->v = VAR_5;
  }
  for ( VAR_9 = 0; VAR_9 < VAR_11; VAR_9++ )
   VAR_4->v[ VAR_9 ].index = FUNC_8( &VAR_7 ) + VAR_3;

  VAR_4++;
  VAR_5 += VAR_11;
 }

 FUNC_0( VAR_6 );
 return 1;

Fail:
 if ( VAR_6 ) {
  FUNC_0( VAR_6 );
 }
 FUNC_5( VAR_2 );
 return 0;
}
