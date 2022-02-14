
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int picoMemStream_t ;
struct TYPE_15__ {float val; } ;
struct TYPE_13__ {float* val; } ;
struct TYPE_14__ {TYPE_1__ size; } ;
struct TYPE_16__ {unsigned int type; int enabled; TYPE_3__ opacity; TYPE_2__ tmap; } ;
typedef TYPE_4__ lwTexture ;





 int VAR_0 ;
 TYPE_4__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,unsigned short,int ) ;
 unsigned short FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,unsigned short,TYPE_4__*) ;
 int FUNC_6 (int *,unsigned short,TYPE_4__*) ;
 int FUNC_7 (int *,unsigned short,TYPE_4__*) ;
 int FUNC_8 (int *,unsigned short,TYPE_4__*) ;
 int FUNC_9 (int) ;

lwTexture *FUNC_10( picoMemStream_t *VAR_1, int VAR_2, unsigned int VAR_3 ){
 lwTexture *VAR_4;
 unsigned short VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0( 1, sizeof( lwTexture ) );
 if ( !VAR_4 ) {
  return ((void*)0);
 }

 VAR_4->type = VAR_3;
 VAR_4->tmap.size.val[ 0 ] =
  VAR_4->tmap.size.val[ 1 ] =
   VAR_4->tmap.size.val[ 2 ] = 1.0f;
 VAR_4->opacity.val = 1.0f;
 VAR_4->enabled = 1;

 VAR_5 = FUNC_3( VAR_1 );
 if ( !FUNC_8( VAR_1, VAR_5, VAR_4 ) ) {
  FUNC_1( VAR_4 );
  return ((void*)0);
 }

 VAR_5 = VAR_2 - VAR_5 - 6;
 switch ( VAR_3 ) {
 case 129: VAR_6 = FUNC_6( VAR_1, VAR_5, VAR_4 ); break;
 case 128: VAR_6 = FUNC_7( VAR_1, VAR_5, VAR_4 ); break;
 case 130: VAR_6 = FUNC_5( VAR_1, VAR_5, VAR_4 ); break;
 default:
  VAR_6 = !FUNC_2( VAR_1, VAR_5, VAR_0 );
 }

 if ( !VAR_6 ) {
  FUNC_4( VAR_4 );
  return ((void*)0);
 }

 FUNC_9( VAR_2 );
 return VAR_4;
}
