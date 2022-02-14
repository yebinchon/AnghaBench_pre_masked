
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int picoMemStream_t ;
struct TYPE_4__ {int perpoly; int dim; int nverts; float** val; void** pindex; void** vindex; int name; int type; } ;
typedef TYPE_1__ lwVMap ;


 float* FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 () ;
 unsigned char* FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 float FUNC_7 (unsigned char**) ;
 int FUNC_8 (unsigned char**) ;
 int FUNC_9 (unsigned char**) ;
 int FUNC_10 (unsigned char**) ;
 void* FUNC_11 (unsigned char**) ;

lwVMap *FUNC_12( picoMemStream_t *VAR_0, int VAR_1, int VAR_2, int VAR_3,
       int VAR_4 ){
 unsigned char *VAR_5, *VAR_6;
 lwVMap *VAR_7;
 float *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;




 FUNC_6( 0 );
 VAR_5 = FUNC_4( VAR_0, VAR_1 );
 if ( !VAR_5 ) {
  return ((void*)0);
 }

 VAR_7 = FUNC_1( 1, sizeof( lwVMap ) );
 if ( !VAR_7 ) {
  FUNC_2( VAR_5 );
  return ((void*)0);
 }



 VAR_7->perpoly = VAR_4;

 VAR_6 = VAR_5;
 FUNC_6( 0 );
 VAR_7->type = FUNC_10( &VAR_6 );
 VAR_7->dim = FUNC_9( &VAR_6 );
 VAR_7->name = FUNC_8( &VAR_6 );
 VAR_12 = FUNC_3();



 VAR_11 = 0;
 while ( VAR_6 < VAR_5 + VAR_1 ) {
  VAR_9 = FUNC_11( &VAR_6 );
  if ( VAR_4 ) {
   VAR_9 = FUNC_11( &VAR_6 );
  }
  VAR_6 += VAR_7->dim * sizeof( float );
  ++VAR_11;
 }



 VAR_7->nverts = VAR_11;
 VAR_7->vindex = FUNC_1( VAR_11, sizeof( int ) );
 if ( !VAR_7->vindex ) {
  goto Fail;
 }
 if ( VAR_4 ) {
  VAR_7->pindex = FUNC_1( VAR_11, sizeof( int ) );
  if ( !VAR_7->pindex ) {
   goto Fail;
  }
 }

 if ( VAR_7->dim > 0 ) {
  VAR_7->val = FUNC_1( VAR_11, sizeof( float * ) );
  if ( !VAR_7->val ) {
   goto Fail;
  }
  VAR_8 = FUNC_0( VAR_11 * VAR_7->dim * sizeof( float ) );
  if ( !VAR_8 ) {
   goto Fail;
  }
  for ( VAR_9 = 0; VAR_9 < VAR_11; VAR_9++ )
   VAR_7->val[ VAR_9 ] = VAR_8 + VAR_9 * VAR_7->dim;
 }



 VAR_6 = VAR_5 + VAR_12;
 for ( VAR_9 = 0; VAR_9 < VAR_11; VAR_9++ ) {
  VAR_7->vindex[ VAR_9 ] = FUNC_11( &VAR_6 );
  if ( VAR_4 ) {
   VAR_7->pindex[ VAR_9 ] = FUNC_11( &VAR_6 );
  }
  for ( VAR_10 = 0; VAR_10 < VAR_7->dim; VAR_10++ )
   VAR_7->val[ VAR_9 ][ VAR_10 ] = FUNC_7( &VAR_6 );
 }

 FUNC_2( VAR_5 );
 return VAR_7;

Fail:
 if ( VAR_5 ) {
  FUNC_2( VAR_5 );
 }
 FUNC_5( VAR_7 );
 return ((void*)0);
}
