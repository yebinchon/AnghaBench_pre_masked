
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int picoMemStream_t ;
typedef int lwSurface ;
struct TYPE_7__ {int offset; int voffset; TYPE_2__* pol; } ;
typedef TYPE_1__ lwPolygonList ;
struct TYPE_8__ {int nverts; int * surf; TYPE_3__* v; int type; } ;
typedef TYPE_2__ lwPolygon ;
struct TYPE_9__ {int index; } ;
typedef TYPE_3__ lwPolVert ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned char**) ;
 int FUNC_6 (unsigned char**) ;

int FUNC_7( picoMemStream_t *VAR_1, int VAR_2, lwPolygonList *VAR_3, int VAR_4 ){
 lwPolygon *VAR_5;
 lwPolVert *VAR_6;
 unsigned char *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;


 if ( VAR_2 == 0 ) {
  return 1;
 }



 FUNC_4( 0 );
 VAR_7 = FUNC_1( VAR_1, VAR_2 );
 if ( !VAR_7 ) {
  goto Fail;
 }



 VAR_12 = 0;
 VAR_13 = 0;
 VAR_8 = VAR_7;

 while ( VAR_8 < VAR_7 + VAR_2 ) {
  VAR_11 = FUNC_6( &VAR_8 );
  VAR_12 += VAR_11;
  VAR_13++;
  VAR_8 += 2 * VAR_11;
  VAR_9 = FUNC_5( &VAR_8 );
  if ( VAR_9 < 0 ) {
   VAR_8 += 2;
  }
 }

 if ( !FUNC_2( VAR_3, VAR_13, VAR_12 ) ) {
  goto Fail;
 }



 VAR_8 = VAR_7;
 VAR_5 = VAR_3->pol + VAR_3->offset;
 VAR_6 = VAR_3->pol[ 0 ].v + VAR_3->voffset;

 for ( VAR_9 = 0; VAR_9 < VAR_13; VAR_9++ ) {
  VAR_11 = FUNC_6( &VAR_8 );

  VAR_5->nverts = VAR_11;
  VAR_5->type = VAR_0;
  if ( !VAR_5->v ) {
   VAR_5->v = VAR_6;
  }
  for ( VAR_10 = 0; VAR_10 < VAR_11; VAR_10++ )
   VAR_6[ VAR_10 ].index = FUNC_6( &VAR_8 ) + VAR_4;
  VAR_10 = FUNC_5( &VAR_8 );
  if ( VAR_10 < 0 ) {
   VAR_10 = -VAR_10;
   VAR_8 += 2;
  }
  VAR_10 -= 1;
  VAR_5->surf = ( lwSurface * ) ( (size_t)VAR_10 );

  VAR_5++;
  VAR_6 += VAR_11;
 }

 FUNC_0( VAR_7 );
 return 1;

Fail:
 if ( VAR_7 ) {
  FUNC_0( VAR_7 );
 }
 FUNC_3( VAR_3 );
 return 0;
}
