
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * name; } ;
typedef TYPE_1__ picoShader_t ;
struct TYPE_6__ {int numShaders; TYPE_1__** shader; } ;
typedef TYPE_2__ picoModel_t ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int *) ;

picoShader_t *FUNC_2( picoModel_t *VAR_0, char *VAR_1, int VAR_2 ){
 int VAR_3;


 if ( VAR_0 == ((void*)0) || VAR_1 == ((void*)0) ) {
  return ((void*)0);
 }


 for ( VAR_3 = 0; VAR_3 < VAR_0->numShaders; VAR_3++ )
 {

  if ( VAR_0->shader[ VAR_3 ] == ((void*)0) ||
    VAR_0->shader[ VAR_3 ]->name == ((void*)0) ) {
   continue;
  }


  if ( VAR_2 ) {
   if ( !FUNC_1( VAR_1, VAR_0->shader[ VAR_3 ]->name ) ) {
    return VAR_0->shader[ VAR_3 ];
   }
  }
  else if ( !FUNC_0( VAR_1, VAR_0->shader[ VAR_3 ]->name ) ) {
   return VAR_0->shader[ VAR_3 ];
  }
 }


 return ((void*)0);
}
