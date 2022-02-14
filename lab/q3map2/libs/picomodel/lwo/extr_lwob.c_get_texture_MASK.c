
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {char* name; } ;
struct TYPE_14__ {float val; } ;
struct TYPE_15__ {int projection; float aa_strength; TYPE_4__ amplitude; } ;
struct TYPE_17__ {TYPE_6__ proc; TYPE_5__ imap; } ;
struct TYPE_13__ {float val; } ;
struct TYPE_11__ {float* val; } ;
struct TYPE_12__ {TYPE_1__ size; } ;
struct TYPE_18__ {int enabled; TYPE_7__ param; int type; TYPE_3__ opacity; TYPE_2__ tmap; } ;
typedef TYPE_8__ lwTexture ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static lwTexture *FUNC_3( char *VAR_2 ){
 lwTexture *VAR_3;

 VAR_3 = FUNC_0( 1, sizeof( lwTexture ) );
 if ( !VAR_3 ) {
  return ((void*)0);
 }

 VAR_3->tmap.size.val[ 0 ] =
  VAR_3->tmap.size.val[ 1 ] =
   VAR_3->tmap.size.val[ 2 ] = 1.0f;
 VAR_3->opacity.val = 1.0f;
 VAR_3->enabled = 1;

 if ( FUNC_2( VAR_2, "Image Map" ) ) {
  VAR_3->type = VAR_0;
  if ( FUNC_2( VAR_2, "Planar" ) ) {
   VAR_3->param.imap.projection = 0;
  }
  else if ( FUNC_2( VAR_2, "Cylindrical" ) ) {
   VAR_3->param.imap.projection = 1;
  }
  else if ( FUNC_2( VAR_2, "Spherical" ) ) {
   VAR_3->param.imap.projection = 2;
  }
  else if ( FUNC_2( VAR_2, "Cubic" ) ) {
   VAR_3->param.imap.projection = 3;
  }
  else if ( FUNC_2( VAR_2, "Front" ) ) {
   VAR_3->param.imap.projection = 4;
  }
  VAR_3->param.imap.aa_strength = 1.0f;
  VAR_3->param.imap.amplitude.val = 1.0f;
  FUNC_1( VAR_2 );
 }
 else {
  VAR_3->type = VAR_1;
  VAR_3->param.proc.name = VAR_2;
 }

 return VAR_3;
}
