
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pathname ;
typedef int imgFlags_t ;
struct TYPE_8__ {int (* Printf ) (int ,char*,int ) ;} ;
struct TYPE_5__ {int cloudHeight; void** innerbox; void** outerbox; } ;
struct TYPE_7__ {int isSky; TYPE_1__ sky; int name; } ;
struct TYPE_6__ {void* defaultImage; } ;


 char* FUNC_0 (char**,int ) ;
 int FUNC_1 (char*,int,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 TYPE_3__ VAR_9 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,char*,int ) ;
 TYPE_2__ VAR_10 ;

__attribute__((used)) static void FUNC_9( char **VAR_11 ) {
 char *VAR_12;
 static char *VAR_13[6] = {"rt", "bk", "lf", "ft", "up", "dn"};
 char VAR_14[VAR_4];
 int VAR_15;
 imgFlags_t VAR_16 = VAR_1 | VAR_2;


 VAR_12 = FUNC_0( VAR_11, VAR_6 );
 if ( VAR_12[0] == 0 ) {
  VAR_8.Printf( VAR_5, "WARNING: 'skyParms' missing parameter in shader '%s'\n", VAR_9.name );
  return;
 }
 if ( FUNC_5( VAR_12, "-" ) ) {
  for (VAR_15=0 ; VAR_15<6 ; VAR_15++) {
   FUNC_1( VAR_14, sizeof(VAR_14), "%s_%s.tga"
    , VAR_12, VAR_13[VAR_15] );
   VAR_9.sky.outerbox[VAR_15] = FUNC_2( ( char * ) VAR_14, VAR_3, VAR_16 | VAR_0 );

   if ( !VAR_9.sky.outerbox[VAR_15] ) {
    VAR_9.sky.outerbox[VAR_15] = VAR_10.defaultImage;
   }
  }
 }


 VAR_12 = FUNC_0( VAR_11, VAR_6 );
 if ( VAR_12[0] == 0 ) {
  VAR_8.Printf( VAR_5, "WARNING: 'skyParms' missing parameter in shader '%s'\n", VAR_9.name );
  return;
 }
 VAR_9.sky.cloudHeight = FUNC_4( VAR_12 );
 if ( !VAR_9.sky.cloudHeight ) {
  VAR_9.sky.cloudHeight = 512;
 }
 FUNC_3( VAR_9.sky.cloudHeight );



 VAR_12 = FUNC_0( VAR_11, VAR_6 );
 if ( VAR_12[0] == 0 ) {
  VAR_8.Printf( VAR_5, "WARNING: 'skyParms' missing parameter in shader '%s'\n", VAR_9.name );
  return;
 }
 if ( FUNC_5( VAR_12, "-" ) ) {
  for (VAR_15=0 ; VAR_15<6 ; VAR_15++) {
   FUNC_1( VAR_14, sizeof(VAR_14), "%s_%s.tga"
    , VAR_12, VAR_13[VAR_15] );
   VAR_9.sky.innerbox[VAR_15] = FUNC_2( ( char * ) VAR_14, VAR_3, VAR_16 );
   if ( !VAR_9.sky.innerbox[VAR_15] ) {
    VAR_9.sky.innerbox[VAR_15] = VAR_10.defaultImage;
   }
  }
 }

 VAR_9.isSky = VAR_7;
}
