
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__* picoVec3_t ;
typedef int picoShader_t ;
struct TYPE_9__ {char* token; } ;
typedef TYPE_1__ picoParser_t ;
typedef int picoModel_t ;
typedef int* picoColor_t ;
typedef int picoByte_t ;


 int * FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*,int**,int*) ;
 TYPE_1__* FUNC_11 (int*,int) ;
 int * FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int,char*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,scalar_t__*) ;
 int FUNC_17 (char*,char*) ;
 int VAR_0 ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*) ;

int FUNC_20( picoModel_t *VAR_1, char *VAR_2 ){
 picoParser_t *VAR_3;
 picoByte_t *VAR_4;
 int VAR_5;



 if ( VAR_1 == ((void*)0) || VAR_2 == ((void*)0) ) {
  return 0;
 }


 FUNC_10( VAR_2, &VAR_4, &VAR_5 );


 if ( VAR_5 == 0 ) {
  return 1;
 }
 if ( VAR_5 < 0 ) {
  return 0;

 }

 VAR_3 = FUNC_11( VAR_4, VAR_5 );
 if ( VAR_3 == ((void*)0) ) {

  VAR_0;
 }


 while ( 1 )
 {

  if ( !FUNC_12( VAR_3, 1 ) ) {
   break;
  }


  if ( !FUNC_17( VAR_3->token, "//" ) ) {
   FUNC_15( VAR_3 );
   continue;
  }



  if ( !FUNC_17( VAR_3->token, "materials" ) ) {
   int VAR_6 = 1;


   if ( !FUNC_13( VAR_3, 1, "{" ) ) {
    VAR_0;
   }


   while ( 1 )
   {
    picoShader_t *VAR_7;
    char *VAR_8;


    if ( FUNC_12( VAR_3, 1 ) == ((void*)0) ) {
     break;
    }
    if ( !FUNC_19( VAR_3->token ) ) {
     continue;
    }
    VAR_8 = FUNC_6( VAR_3->token );
    if ( VAR_8 == ((void*)0) ) {
     VAR_0;
    }


    if ( VAR_3->token[0] == '{' ) {
     VAR_6++;
    }
    if ( VAR_3->token[0] == '}' ) {
     VAR_6--;
    }
    if ( !VAR_6 ) {
     break;
    }


    if ( !FUNC_12( VAR_3, 0 ) ) {
     FUNC_7( VAR_8 );
     VAR_0;
    }

    if ( !FUNC_18( VAR_3->token, "=>" ) ||
      !FUNC_18( VAR_3->token, "->" ) ||
      !FUNC_18( VAR_3->token, "=" ) ) {

     if ( !FUNC_12( VAR_3, 0 ) ) {
      FUNC_7( VAR_8 );
      VAR_0;
     }
    }

    VAR_7 = FUNC_0( VAR_1, VAR_8, 0 );


    if ( VAR_7 != ((void*)0) ) {
     FUNC_4( VAR_7, VAR_3->token );
    }

    FUNC_7( VAR_8 );


    FUNC_15( VAR_3 );
   }
  }


  else if ( !FUNC_17( VAR_3->token, "materials[" ) ) {
   picoShader_t *VAR_9;
   char *VAR_10;
   int VAR_11 = 1;


   if ( !FUNC_12( VAR_3, 0 ) ) {
    VAR_0;
   }


   VAR_10 = FUNC_6( VAR_3->token );
   if ( VAR_10 == ((void*)0) ) {
    VAR_0;
   }


   if ( !FUNC_13( VAR_3, 0, "]" ) ) {
    VAR_0;
   }


   VAR_9 = FUNC_0( VAR_1, VAR_10, 0 );


   FUNC_7( VAR_10 );




   if ( VAR_9 == ((void*)0) ) {
    FUNC_14( VAR_3 );
    continue;
   }

   if ( !FUNC_13( VAR_3, 1, "{" ) ) {
    VAR_0;
   }


   while ( 1 )
   {

    if ( FUNC_12( VAR_3, 1 ) == ((void*)0) ) {
     break;
    }
    if ( !FUNC_19( VAR_3->token ) ) {
     continue;
    }


    if ( VAR_3->token[0] == '{' ) {
     VAR_11++;
    }
    if ( VAR_3->token[0] == '}' ) {
     VAR_11--;
    }
    if ( !VAR_11 ) {
     break;
    }


    if ( !FUNC_17( VAR_3->token, "shader" ) ) {
     if ( !FUNC_12( VAR_3, 0 ) ) {
      VAR_0;
     }
     FUNC_4( VAR_9, VAR_3->token );
    }

    else if ( !FUNC_17( VAR_3->token, "mapname" ) ) {
     if ( !FUNC_12( VAR_3, 0 ) ) {
      VAR_0;
     }
     FUNC_3( VAR_9, VAR_3->token );
    }

    else if ( !FUNC_17( VAR_3->token, "ambient" ) ) {
     picoColor_t VAR_12;
     picoVec3_t VAR_13;


     if ( !FUNC_16( VAR_3, VAR_13 ) ) {
      VAR_0;
     }


     VAR_12[ 0 ] = (picoByte_t)VAR_13[ 0 ];
     VAR_12[ 1 ] = (picoByte_t)VAR_13[ 1 ];
     VAR_12[ 2 ] = (picoByte_t)VAR_13[ 2 ];
     VAR_12[ 3 ] = 1;


     FUNC_1( VAR_9, VAR_12 );
    }

    else if ( !FUNC_17( VAR_3->token, "diffuse" ) ) {
     picoColor_t VAR_14;
     picoVec3_t VAR_15;


     if ( !FUNC_16( VAR_3, VAR_15 ) ) {
      VAR_0;
     }


     VAR_14[ 0 ] = (picoByte_t)VAR_15[ 0 ];
     VAR_14[ 1 ] = (picoByte_t)VAR_15[ 1 ];
     VAR_14[ 2 ] = (picoByte_t)VAR_15[ 2 ];
     VAR_14[ 3 ] = 1;


     FUNC_2( VAR_9, VAR_14 );
    }

    else if ( !FUNC_17( VAR_3->token, "specular" ) ) {
     picoColor_t VAR_16;
     picoVec3_t VAR_17;


     if ( !FUNC_16( VAR_3,VAR_17 ) ) {
      VAR_0;
     }


     VAR_16[ 0 ] = (picoByte_t)VAR_17[ 0 ];
     VAR_16[ 1 ] = (picoByte_t)VAR_17[ 1 ];
     VAR_16[ 2 ] = (picoByte_t)VAR_17[ 2 ];
     VAR_16[ 3 ] = 1;


     FUNC_5( VAR_9, VAR_16 );
    }

    FUNC_15( VAR_3 );
   }
  }

 }


 FUNC_9( VAR_3 );
 FUNC_8( VAR_4 );


 return 1;
}
