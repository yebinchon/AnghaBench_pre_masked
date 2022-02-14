
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * defaultExts; } ;
typedef TYPE_1__ picoModule_t ;
typedef int picoModel_t ;
typedef char picoByte_t ;
typedef scalar_t__ (* PicoInputStreamReadFunc ) (void*,char*,size_t) ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__ const*,char*,char*,int,int) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int ,int) ;

picoModel_t *FUNC_5( const picoModule_t* VAR_1, void* VAR_2, PicoInputStreamReadFunc VAR_3, size_t VAR_4, int VAR_5 ) {
 picoModel_t *VAR_6;
 picoByte_t *VAR_7;
 int VAR_8;


 VAR_6 = ((void*)0);

 if ( VAR_2 == ((void*)0) ) {
  FUNC_3( VAR_0, "PicoLoadModel: invalid input stream (inputStream == NULL)" );
  return ((void*)0);
 }

 if ( VAR_3 == ((void*)0) ) {
  FUNC_3( VAR_0, "PicoLoadModel: invalid input stream (inputStreamRead == NULL) ");
  return ((void*)0);
 }

 VAR_7 = FUNC_1( VAR_4 + 1 );

 VAR_8 = (int)VAR_3( VAR_2, VAR_7, VAR_4 );
 VAR_7[ VAR_8 ] = '\0';

 {

  char VAR_9[128];
  VAR_9[0] = '.';
  FUNC_4( VAR_9 + 1, VAR_1->defaultExts[ 0 ], 126 );
  VAR_9[127] = '\0';
  VAR_6 = FUNC_0( VAR_1, VAR_9, VAR_7, VAR_8, VAR_5 );
 }


 if ( VAR_6 != 0 ) {
  FUNC_2( VAR_7 );
 }

 return VAR_6;
}
