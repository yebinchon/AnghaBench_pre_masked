
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* dir; TYPE_3__* pack; struct TYPE_8__* next; } ;
typedef TYPE_2__ searchpath_t ;
typedef int qboolean ;
struct TYPE_9__ {int numfiles; TYPE_4__* buildBuffer; } ;
typedef TYPE_3__ pack_t ;
struct TYPE_10__ {char* name; } ;
typedef TYPE_4__ fileInPack_t ;
struct TYPE_7__ {int gamedir; int path; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,char**,int) ;
 char* FUNC_3 (int ,int ,char const*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char const*,char*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (char**) ;
 char** FUNC_9 (char*,char const*,char*,int*,int ) ;
 char** FUNC_10 (int) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (char const*) ;

char **FUNC_12( const char *VAR_6, const char *VAR_7, char *VAR_8, int *VAR_9, qboolean VAR_10 ) {
 int VAR_11;
 char **VAR_12;
 char *VAR_13[VAR_1];
 searchpath_t *VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18, VAR_19, VAR_20;
 pack_t *VAR_21;
 fileInPack_t *VAR_22;
 char VAR_23[VAR_2];

 if ( !VAR_4 ) {
  FUNC_0( VAR_0, "Filesystem call made without initialization" );
 }

 if ( !VAR_6 ) {
  *VAR_9 = 0;
  return ((void*)0);
 }
 if ( !VAR_7 ) {
  VAR_7 = "";
 }

 VAR_16 = FUNC_11( VAR_6 );
 if ( VAR_6[VAR_16-1] == '\\' || VAR_6[VAR_16-1] == '/' ) {
  VAR_16--;
 }
 VAR_17 = FUNC_11( VAR_7 );
 VAR_11 = 0;
 FUNC_5(VAR_6, VAR_23, &VAR_19);




 for (VAR_14 = VAR_4 ; VAR_14 ; VAR_14 = VAR_14->next) {

  if (VAR_14->pack) {



   if ( !FUNC_4(VAR_14->pack) ) {
    continue;
   }


   VAR_21 = VAR_14->pack;
   VAR_22 = VAR_21->buildBuffer;
   for (VAR_15 = 0; VAR_15 < VAR_21->numfiles; VAR_15++) {
    char *VAR_24;
    int VAR_25, VAR_26;


    VAR_24 = VAR_22[VAR_15].name;

    if (VAR_8) {

     if (!FUNC_1( VAR_8, VAR_24, VAR_5 ))
      continue;

     VAR_11 = FUNC_2( VAR_24, VAR_13, VAR_11 );
    }
    else {

     VAR_25 = FUNC_5(VAR_24, VAR_23, &VAR_26);

     if ( (VAR_26-VAR_19)>2 || VAR_16 > VAR_25 || FUNC_7( VAR_24, VAR_6, VAR_16 ) ) {
      continue;
     }


     VAR_18 = FUNC_11( VAR_24 );
     if ( VAR_18 < VAR_17 ) {
      continue;
     }

     if ( FUNC_6( VAR_24 + VAR_18 - VAR_17, VAR_7 ) ) {
      continue;
     }


     VAR_20 = VAR_16;
     if (VAR_16) {
      VAR_20++;
     }
     VAR_11 = FUNC_2( VAR_24 + VAR_20, VAR_13, VAR_11 );
    }
   }
  } else if (VAR_14->dir) {
   char *VAR_27;
   int VAR_28;
   char **VAR_29;
   char *VAR_30;


   if ( VAR_3 && !VAR_10 ) {
    continue;
   } else {
    VAR_27 = FUNC_3( VAR_14->dir->path, VAR_14->dir->gamedir, VAR_6 );
    VAR_29 = FUNC_9( VAR_27, VAR_7, VAR_8, &VAR_28, VAR_5 );
    for ( VAR_15 = 0 ; VAR_15 < VAR_28 ; VAR_15++ ) {

     VAR_30 = VAR_29[VAR_15];
     VAR_11 = FUNC_2( VAR_30, VAR_13, VAR_11 );
    }
    FUNC_8( VAR_29 );
   }
  }
 }


 *VAR_9 = VAR_11;

 if ( !VAR_11 ) {
  return ((void*)0);
 }

 VAR_12 = FUNC_10( ( VAR_11 + 1 ) * sizeof( *VAR_12 ) );
 for ( VAR_15 = 0 ; VAR_15 < VAR_11 ; VAR_15++ ) {
  VAR_12[VAR_15] = VAR_13[VAR_15];
 }
 VAR_12[VAR_15] = ((void*)0);

 return VAR_12;
}
