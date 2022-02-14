
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int picoMemStream_t ;
struct TYPE_12__ {void* eindex; void* val; } ;
struct TYPE_11__ {void* eindex; void* val; } ;
struct TYPE_10__ {void* eindex; void* val; } ;
struct TYPE_9__ {void* eindex; void* val; } ;
struct TYPE_13__ {TYPE_4__ amplitude; TYPE_3__ stck; void* pblend; void* aa_strength; void* aas_flags; TYPE_2__ wraph; TYPE_1__ wrapw; void* wraph_type; void* wrapw_type; void* cindex; void* axis; int vmap_name; void* projection; } ;
struct TYPE_14__ {TYPE_5__ imap; } ;
struct TYPE_15__ {TYPE_6__ param; int tmap; } ;
typedef TYPE_7__ lwTexture ;
 int VAR_0 ;
 int FUNC_0 (int *,unsigned short,int ) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned short,int *) ;
 int FUNC_9 (int) ;

int FUNC_10( picoMemStream_t *VAR_1, int VAR_2, lwTexture *VAR_3 ){
 unsigned int VAR_4;
 unsigned short VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_1( VAR_1 );
 VAR_4 = FUNC_5( VAR_1 );
 VAR_5 = FUNC_4( VAR_1 );
 if ( 0 > FUNC_7() ) {
  return 0;
 }

 while ( 1 ) {
  VAR_5 += VAR_5 & 1;
  FUNC_9( 0 );

  switch ( VAR_4 ) {
  case 132:
   if ( !FUNC_8( VAR_1, VAR_5, &VAR_3->tmap ) ) {
    return 0;
   }
   break;

  case 135:
   VAR_3->param.imap.projection = FUNC_4( VAR_1 );
   break;

  case 131:
   VAR_3->param.imap.vmap_name = FUNC_3( VAR_1 );
   break;

  case 138:
   VAR_3->param.imap.axis = FUNC_4( VAR_1 );
   break;

  case 137:
   VAR_3->param.imap.cindex = FUNC_6( VAR_1 );
   break;

  case 130:
   VAR_3->param.imap.wrapw_type = FUNC_4( VAR_1 );
   VAR_3->param.imap.wraph_type = FUNC_4( VAR_1 );
   break;

  case 128:
   VAR_3->param.imap.wrapw.val = FUNC_2( VAR_1 );
   VAR_3->param.imap.wrapw.eindex = FUNC_6( VAR_1 );
   break;

  case 129:
   VAR_3->param.imap.wraph.val = FUNC_2( VAR_1 );
   VAR_3->param.imap.wraph.eindex = FUNC_6( VAR_1 );
   break;

  case 139:
   VAR_3->param.imap.aas_flags = FUNC_4( VAR_1 );
   VAR_3->param.imap.aa_strength = FUNC_2( VAR_1 );
   break;

  case 136:
   VAR_3->param.imap.pblend = FUNC_4( VAR_1 );
   break;

  case 134:
   VAR_3->param.imap.stck.val = FUNC_2( VAR_1 );
   VAR_3->param.imap.stck.eindex = FUNC_6( VAR_1 );
   break;

  case 133:
   VAR_3->param.imap.amplitude.val = FUNC_2( VAR_1 );
   VAR_3->param.imap.amplitude.eindex = FUNC_6( VAR_1 );
   break;

  default:
   break;
  }



  VAR_6 = FUNC_7();
  if ( VAR_6 < 0 || VAR_6 > VAR_5 ) {
   return 0;
  }



  if ( VAR_6 < VAR_5 ) {
   FUNC_0( VAR_1, VAR_5 - VAR_6, VAR_0 );
  }



  if ( VAR_2 <= FUNC_1( VAR_1 ) - VAR_7 ) {
   break;
  }



  FUNC_9( 0 );
  VAR_4 = FUNC_5( VAR_1 );
  VAR_5 = FUNC_4( VAR_1 );
  if ( 6 != FUNC_7() ) {
   return 0;
  }
 }

 FUNC_9( FUNC_1( VAR_1 ) - VAR_7 );
 return 1;
}
