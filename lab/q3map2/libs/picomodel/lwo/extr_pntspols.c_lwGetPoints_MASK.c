
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int picoMemStream_t ;
struct TYPE_4__ {int offset; int count; TYPE_2__* pt; } ;
typedef TYPE_1__ lwPointList ;
typedef int lwPoint ;
struct TYPE_5__ {float* pos; } ;


 int FUNC_0 (float*) ;
 int FUNC_1 (void*,int,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (float*,int,int) ;

int FUNC_5( picoMemStream_t *VAR_0, int VAR_1, lwPointList *VAR_2 ){
 float *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 if ( VAR_1 == 1 ) {
  return 1;
 }



 VAR_4 = VAR_1 / 12;
 VAR_2->offset = VAR_2->count;
 VAR_2->count += VAR_4;
 if ( !FUNC_1( (void *) &VAR_2->pt, ( VAR_2->count - VAR_4 ) * sizeof( lwPoint ), VAR_2->count * sizeof( lwPoint ) ) ) {
  return 0;
 }
 FUNC_3( &VAR_2->pt[ VAR_2->offset ], 0, VAR_4 * sizeof( lwPoint ) );



 VAR_3 = ( float * ) FUNC_2( VAR_0, VAR_1 );
 if ( !VAR_3 ) {
  return 0;
 }
 FUNC_4( VAR_3, 4, VAR_4 * 3 );



 for ( VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_4; VAR_5++, VAR_6 += 3 ) {
  VAR_2->pt[ VAR_5 ].pos[ 0 ] = VAR_3[ VAR_6 ];
  VAR_2->pt[ VAR_5 ].pos[ 1 ] = VAR_3[ VAR_6 + 1 ];
  VAR_2->pt[ VAR_5 ].pos[ 2 ] = VAR_3[ VAR_6 + 2 ];
 }

 FUNC_0( VAR_3 );
 return 1;
}
