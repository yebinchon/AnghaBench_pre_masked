
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int picoMemStream_t ;
struct TYPE_7__ {void** ikey; TYPE_1__* key; void* repeat; void* end; void* start; void* itemname; void* paramname; } ;
struct TYPE_8__ {TYPE_2__ grad; } ;
struct TYPE_9__ {TYPE_3__ param; int tmap; } ;
typedef TYPE_4__ lwTexture ;
typedef int lwGradKey ;
struct TYPE_6__ {void** rgba; void* value; } ;
 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int *,unsigned short,int ) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned short,int *) ;
 int FUNC_9 (int) ;

int FUNC_10( picoMemStream_t *VAR_1, int VAR_2, lwTexture *VAR_3 ){
 unsigned int VAR_4;
 unsigned short VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_2( VAR_1 );
 VAR_4 = FUNC_6( VAR_1 );
 VAR_5 = FUNC_5( VAR_1 );
 if ( 0 > FUNC_7() ) {
  return 0;
 }

 while ( 1 ) {
  VAR_5 += VAR_5 & 1;
  FUNC_9( 0 );

  switch ( VAR_4 ) {
  case 128:
   if ( !FUNC_8( VAR_1, VAR_5, &VAR_3->tmap ) ) {
    return 0;
   }
   break;

  case 129:
   VAR_3->param.grad.paramname = FUNC_4( VAR_1 );
   break;

  case 130:
   VAR_3->param.grad.itemname = FUNC_4( VAR_1 );
   break;

  case 132:
   VAR_3->param.grad.start = FUNC_3( VAR_1 );
   break;

  case 134:
   VAR_3->param.grad.end = FUNC_3( VAR_1 );
   break;

  case 133:
   VAR_3->param.grad.repeat = FUNC_5( VAR_1 );
   break;

  case 135:
   VAR_10 = VAR_5 / sizeof( lwGradKey );
   VAR_3->param.grad.key = FUNC_0( VAR_10, sizeof( lwGradKey ) );
   if ( !VAR_3->param.grad.key ) {
    return 0;
   }
   for ( VAR_8 = 0; VAR_8 < VAR_10; VAR_8++ ) {
    VAR_3->param.grad.key[ VAR_8 ].value = FUNC_3( VAR_1 );
    for ( VAR_9 = 0; VAR_9 < 4; VAR_9++ )
     VAR_3->param.grad.key[ VAR_8 ].rgba[ VAR_9 ] = FUNC_3( VAR_1 );
   }
   break;

  case 131:
   VAR_10 = VAR_5 / 2;
   VAR_3->param.grad.ikey = FUNC_0( VAR_10, sizeof( short ) );
   if ( !VAR_3->param.grad.ikey ) {
    return 0;
   }
   for ( VAR_8 = 0; VAR_8 < VAR_10; VAR_8++ )
    VAR_3->param.grad.ikey[ VAR_8 ] = FUNC_5( VAR_1 );
   break;

  default:
   break;
  }



  VAR_6 = FUNC_7();
  if ( VAR_6 < 0 || VAR_6 > VAR_5 ) {
   return 0;
  }



  if ( VAR_6 < VAR_5 ) {
   FUNC_1( VAR_1, VAR_5 - VAR_6, VAR_0 );
  }



  if ( VAR_2 <= FUNC_2( VAR_1 ) - VAR_7 ) {
   break;
  }



  FUNC_9( 0 );
  VAR_4 = FUNC_6( VAR_1 );
  VAR_5 = FUNC_5( VAR_1 );
  if ( 6 != FUNC_7() ) {
   return 0;
  }
 }

 FUNC_9( FUNC_2( VAR_1 ) - VAR_7 );
 return 1;
}
