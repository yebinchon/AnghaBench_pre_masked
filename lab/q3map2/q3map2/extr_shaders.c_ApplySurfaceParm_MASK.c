
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int contentFlagsClear; int contentFlags; int surfaceFlagsClear; int surfaceFlags; int compileFlagsClear; int compileFlags; int * name; } ;
typedef TYPE_1__ surfaceParm_t ;
typedef int qboolean ;
struct TYPE_5__ {TYPE_1__* surfaceParms; } ;


 int FUNC_0 (char*,int *) ;
 TYPE_1__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

qboolean FUNC_1( char *VAR_5, int *VAR_6, int *VAR_7, int *VAR_8 ){
 int VAR_9, VAR_10;
 surfaceParm_t *VAR_11;



 if ( VAR_5 == ((void*)0) ) {
  VAR_5 = "";
 }
 if ( VAR_6 == ((void*)0) ) {
  VAR_6 = &VAR_10;
 }
 if ( VAR_7 == ((void*)0) ) {
  VAR_7 = &VAR_10;
 }
 if ( VAR_8 == ((void*)0) ) {
  VAR_8 = &VAR_10;
 }


 VAR_11 = VAR_1->surfaceParms;
 while ( VAR_11->name != ((void*)0) )
 {

  if ( !FUNC_0( VAR_5, VAR_11->name ) ) {

   *VAR_6 &= ~( VAR_11->contentFlagsClear );
   *VAR_6 |= VAR_11->contentFlags;
   *VAR_7 &= ~( VAR_11->surfaceFlagsClear );
   *VAR_7 |= VAR_11->surfaceFlags;
   *VAR_8 &= ~( VAR_11->compileFlagsClear );
   *VAR_8 |= VAR_11->compileFlags;


   return VAR_4;
  }


  VAR_11++;
 }


 for ( VAR_9 = 0; VAR_9 < VAR_2; VAR_9++ )
 {

  VAR_11 = &VAR_0[ VAR_9 ];


  if ( !FUNC_0( VAR_5, VAR_11->name ) ) {

   *VAR_6 &= ~( VAR_11->contentFlagsClear );
   *VAR_6 |= VAR_11->contentFlags;
   *VAR_7 &= ~( VAR_11->surfaceFlagsClear );
   *VAR_7 |= VAR_11->surfaceFlags;
   *VAR_8 &= ~( VAR_11->compileFlagsClear );
   *VAR_8 |= VAR_11->compileFlags;


   return VAR_4;
  }
 }


 return VAR_3;
}
