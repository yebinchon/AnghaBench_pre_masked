
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int texnum; } ;
struct TYPE_5__ {TYPE_3__** currenttextures; } ;
struct TYPE_4__ {int numImages; TYPE_3__** images; } ;


 int FUNC_0 (TYPE_3__**,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int *) ;
 TYPE_1__ VAR_3 ;

void FUNC_4( void ) {
 int VAR_4;

 for ( VAR_4=0; VAR_4<VAR_3.numImages ; VAR_4++ ) {
  FUNC_3( 1, &VAR_3.images[VAR_4]->texnum );
 }
 FUNC_0( VAR_3.images, 0, sizeof( VAR_3.images ) );

 VAR_3.numImages = 0;

 FUNC_0( VAR_1.currenttextures, 0, sizeof( VAR_1.currenttextures ) );
 if ( VAR_2 ) {
  FUNC_1( 1 );
  FUNC_2( VAR_0, 0 );
  FUNC_1( 0 );
  FUNC_2( VAR_0, 0 );
 } else {
  FUNC_2( VAR_0, 0 );
 }
}
