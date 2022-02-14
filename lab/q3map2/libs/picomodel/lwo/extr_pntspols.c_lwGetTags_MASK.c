
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int picoMemStream_t ;
struct TYPE_3__ {int offset; int count; int * tag; } ;
typedef TYPE_1__ lwTagList ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*,int,int) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char**) ;
 int FUNC_6 (char*) ;

int FUNC_7( picoMemStream_t *VAR_0, int VAR_1, lwTagList *VAR_2 ){
 char *VAR_3, *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 if ( VAR_1 == 0 ) {
  return 1;
 }



 FUNC_4( 0 );
 VAR_3 = FUNC_2( VAR_0, VAR_1 );
 if ( !VAR_3 ) {
  return 0;
 }



 VAR_7 = 0;
 VAR_4 = VAR_3;
 while ( VAR_4 < VAR_3 + VAR_1 ) {
  VAR_6 = FUNC_6( VAR_4 ) + 1;
  VAR_6 += VAR_6 & 1;
  VAR_4 += VAR_6;
  ++VAR_7;
 }



 VAR_2->offset = VAR_2->count;
 VAR_2->count += VAR_7;
 if ( !FUNC_1( (void *) &VAR_2->tag, ( VAR_2->count - VAR_7 ) * sizeof( char * ), VAR_2->count * sizeof( char * ) ) ) {
  goto Fail;
 }
 FUNC_3( &VAR_2->tag[ VAR_2->offset ], 0, VAR_7 * sizeof( char * ) );



 VAR_4 = VAR_3;
 for ( VAR_5 = 0; VAR_5 < VAR_7; VAR_5++ )
  VAR_2->tag[ VAR_5 + VAR_2->offset ] = FUNC_5( &VAR_4 );

 FUNC_0( VAR_3 );
 return 1;

Fail:
 if ( VAR_3 ) {
  FUNC_0( VAR_3 );
 }
 return 0;
}
