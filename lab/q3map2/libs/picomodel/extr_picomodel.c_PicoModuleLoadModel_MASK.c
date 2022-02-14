
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ (* canload ) (char*,int *,int) ;TYPE_2__* (* load ) (char*,int,int *,int) ;} ;
typedef TYPE_1__ picoModule_t ;
struct TYPE_9__ {TYPE_1__ const* module; } ;
typedef TYPE_2__ picoModel_t ;
typedef int picoByte_t ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,int *,int) ;
 TYPE_2__* FUNC_8 (char*,int,int *,int) ;

picoModel_t *FUNC_9( const picoModule_t* VAR_1, char* VAR_2, picoByte_t* VAR_3, int VAR_4, int VAR_5 ){
 char *VAR_6, *VAR_7;


 if ( VAR_1->canload( VAR_2, VAR_3, VAR_4 ) == VAR_0 ) {

  picoModel_t* VAR_8 = VAR_1->load( VAR_2, VAR_5, VAR_3, VAR_4 );
  if ( VAR_8 == ((void*)0) ) {
   return ((void*)0);
  }


  VAR_8->module = VAR_1;


  VAR_6 = FUNC_0( VAR_8 );


  if ( FUNC_6( VAR_6 ) ) {

   VAR_7 = FUNC_2( FUNC_6( VAR_6 ) + 20 );
   if ( VAR_7 != ((void*)0) ) {

    FUNC_5( VAR_7, VAR_6 );
    FUNC_4( VAR_7, "remap" );


    FUNC_1( VAR_8, VAR_7 );


    FUNC_3( VAR_7 );
   }
  }

  return VAR_8;
 }

 return ((void*)0);
}
