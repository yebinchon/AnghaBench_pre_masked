
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int texnum; int frameUsed; } ;
typedef TYPE_2__ image_t ;
struct TYPE_12__ {int* currenttextures; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {int frameCount; TYPE_1__* dlightImage; } ;
struct TYPE_8__ {int texnum; } ;
typedef int GLuint ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_1 (int ,int) ;
 TYPE_4__* VAR_2 ;
 TYPE_3__ VAR_3 ;

void FUNC_2( image_t *VAR_4, GLuint VAR_5, image_t *VAR_6, GLuint VAR_7 ) {
 int VAR_8, VAR_9;

 VAR_8 = VAR_4->texnum;
 VAR_9 = VAR_6->texnum;

 if ( VAR_2->integer && VAR_3.dlightImage ) {
  VAR_8 = VAR_9 = VAR_3.dlightImage->texnum;
 }

 if ( VAR_1.currenttextures[1] != VAR_9 ) {
  FUNC_0( 1 );
  VAR_6->frameUsed = VAR_3.frameCount;
  VAR_1.currenttextures[1] = VAR_9;
  FUNC_1( VAR_0, VAR_9 );
 }
 if ( VAR_1.currenttextures[0] != VAR_8 ) {
  FUNC_0( 0 );
  VAR_4->frameUsed = VAR_3.frameCount;
  VAR_1.currenttextures[0] = VAR_8;
  FUNC_1( VAR_0, VAR_8 );
 }
}
