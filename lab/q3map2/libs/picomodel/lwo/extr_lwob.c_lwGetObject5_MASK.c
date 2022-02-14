
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int picoMemStream_t ;
struct TYPE_11__ {int nlayers; int nsurfs; int surf; int taglist; TYPE_2__* layer; } ;
typedef TYPE_1__ lwObject ;
typedef int lwNode ;
struct TYPE_13__ {int offset; } ;
struct TYPE_12__ {int polygon; TYPE_3__ point; int bbox; } ;
typedef TYPE_2__ lwLayer ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;




 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int *,unsigned int,int ) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (int *,unsigned int,TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (int *,unsigned int,int *,int ) ;
 scalar_t__ FUNC_11 (int *,unsigned int,TYPE_1__*) ;
 int FUNC_12 (int *,unsigned int,int *) ;
 int FUNC_13 (TYPE_3__*,int *) ;
 int FUNC_14 (void**,int *) ;
 int FUNC_15 (int *,int *,int *,int *) ;
 int FUNC_16 (int ) ;

lwObject *FUNC_17( char *VAR_3, picoMemStream_t *VAR_4, unsigned int *VAR_5, int *VAR_6 ){
 lwObject *VAR_7;
 lwLayer *VAR_8;
 lwNode *VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13;




 if ( !VAR_4 ) {
  return ((void*)0);
 }



 FUNC_16( 0 );
 VAR_10 = FUNC_3( VAR_4 );
 VAR_11 = FUNC_3( VAR_4 );
 VAR_12 = FUNC_3( VAR_4 );
 if ( 12 != FUNC_4() ) {
  return ((void*)0);
 }



 if ( VAR_10 != VAR_0 || VAR_12 != VAR_1 ) {
  if ( VAR_6 ) {
   *VAR_6 = 12;
  }
  return ((void*)0);
 }



 VAR_7 = FUNC_0( 1, sizeof( lwObject ) );
 if ( !VAR_7 ) {
  goto Fail;
 }

 VAR_8 = FUNC_0( 1, sizeof( lwLayer ) );
 if ( !VAR_8 ) {
  goto Fail;
 }
 VAR_7->layer = VAR_8;
 VAR_7->nlayers = 1;



 VAR_10 = FUNC_3( VAR_4 );
 VAR_13 = FUNC_3( VAR_4 );
 if ( 0 > FUNC_4() ) {
  goto Fail;
 }



 while ( 1 ) {
  VAR_13 += VAR_13 & 1;

  switch ( VAR_10 )
  {
  case 131:
   if ( !FUNC_8( VAR_4, VAR_13, &VAR_8->point ) ) {
    goto Fail;
   }
   break;

  case 130:
   if ( !FUNC_10( VAR_4, VAR_13, &VAR_8->polygon,
          VAR_8->point.offset ) ) {
    goto Fail;
   }
   break;

  case 129:
   if ( !FUNC_12( VAR_4, VAR_13, &VAR_7->taglist ) ) {
    goto Fail;
   }
   break;

  case 128:
   VAR_9 = ( lwNode * ) FUNC_11( VAR_4, VAR_13, VAR_7 );
   if ( !VAR_9 ) {
    goto Fail;
   }
   FUNC_14( (void **) &VAR_7->surf, VAR_9 );
   VAR_7->nsurfs++;
   break;

  default:
   FUNC_1( VAR_4, VAR_13, VAR_2 );
   break;
  }



  if ( VAR_11 <= FUNC_2( VAR_4 ) - 8 ) {
   break;
  }



  FUNC_16( 0 );
  VAR_10 = FUNC_3( VAR_4 );
  VAR_13 = FUNC_3( VAR_4 );
  if ( 8 != FUNC_4() ) {
   goto Fail;
  }
 }

 FUNC_6( &VAR_8->point, VAR_8->bbox );
 FUNC_9( &VAR_8->point, &VAR_8->polygon );
 if ( !FUNC_7( &VAR_8->point, &VAR_8->polygon ) ) {
  goto Fail;
 }
 if ( !FUNC_15( &VAR_8->polygon, &VAR_7->taglist,
         &VAR_7->surf, &VAR_7->nsurfs ) ) {
  goto Fail;
 }
 FUNC_13( &VAR_8->point, &VAR_8->polygon );

 return VAR_7;

Fail:
 if ( VAR_5 ) {
  *VAR_5 = VAR_10;
 }
 if ( VAR_4 ) {
  if ( VAR_6 ) {
   *VAR_6 = FUNC_2( VAR_4 );
  }
 }
 FUNC_5( VAR_7 );
 return ((void*)0);
}
