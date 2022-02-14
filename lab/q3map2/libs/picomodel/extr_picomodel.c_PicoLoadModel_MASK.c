
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * load; int * canload; } ;
typedef TYPE_1__ picoModule_t ;
typedef int picoModel_t ;
typedef int picoByte_t ;


 int VAR_0 ;
 TYPE_1__** FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__ const*,char*,int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int **,int*) ;
 int FUNC_4 (int ,char*,...) ;

picoModel_t *FUNC_5( char *VAR_1, int VAR_2 ){
 const picoModule_t **VAR_3, *VAR_4;
 picoModel_t *VAR_5;
 picoByte_t *VAR_6;
 int VAR_7;



 VAR_5 = ((void*)0);


 if ( VAR_1 == ((void*)0) ) {
  FUNC_4( VAR_0, "PicoLoadModel: No filename given (fileName == NULL)" );
  return ((void*)0);
 }


 FUNC_3( VAR_1, &VAR_6, &VAR_7 );
 if ( VAR_7 < 0 ) {
  FUNC_4( VAR_0, "PicoLoadModel: Failed loading model %s", VAR_1 );
  return ((void*)0);
 }


 VAR_3 = FUNC_0( ((void*)0) );



 for ( ; *VAR_3 != ((void*)0); VAR_3++ )
 {

  VAR_4 = *VAR_3;


  if ( VAR_4 == ((void*)0) ) {
   break;
  }


  if ( VAR_4->canload == ((void*)0) || VAR_4->load == ((void*)0) ) {
   continue;
  }

  VAR_5 = FUNC_1( VAR_4, VAR_1, VAR_6, VAR_7, VAR_2 );
  if ( VAR_5 != ((void*)0) ) {

   break;
  }
 }


 if ( VAR_6 ) {
  FUNC_2( VAR_6 );
 }

 return VAR_5;
}
