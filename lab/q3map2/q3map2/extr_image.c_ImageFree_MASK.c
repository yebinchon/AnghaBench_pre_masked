
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ refCount; scalar_t__ height; scalar_t__ width; int * pixels; int * filename; int * name; } ;
typedef TYPE_1__ image_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

void FUNC_1( image_t *VAR_1 ){

 if ( VAR_1 == ((void*)0) ) {
  return;
 }


 VAR_1->refCount--;


 if ( VAR_1->refCount <= 0 ) {
  if ( VAR_1->name != ((void*)0) ) {
   FUNC_0( VAR_1->name );
  }
  VAR_1->name = ((void*)0);
  if ( VAR_1->filename != ((void*)0) ) {
   FUNC_0( VAR_1->filename );
  }
  VAR_1->filename = ((void*)0);
  FUNC_0( VAR_1->pixels );
  VAR_1->width = 0;
  VAR_1->height = 0;
  VAR_0--;
 }
}
