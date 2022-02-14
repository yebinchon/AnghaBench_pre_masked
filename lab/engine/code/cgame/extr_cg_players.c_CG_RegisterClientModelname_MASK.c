
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
typedef int newTeamName ;
typedef int filename ;
struct TYPE_6__ {scalar_t__ team; void* modelIcon; void* headModel; void* torsoModel; void* legsModel; } ;
typedef TYPE_1__ clientInfo_t ;


 scalar_t__ FUNC_0 (char*,int,TYPE_1__*,char const*,char const*,char const*,char*,char*) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,char const*,char const*,char const*,char const*) ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (char*,int,char*,char const*,...) ;
 char const* VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_5 (char*) ;
 void* FUNC_6 (char*) ;

__attribute__((used)) static qboolean FUNC_7( clientInfo_t *VAR_6, const char *VAR_7, const char *VAR_8, const char *VAR_9, const char *VAR_10, const char *VAR_11 ) {
 char VAR_12[VAR_2];
 const char *VAR_13;
 char VAR_14[VAR_2];

 if ( VAR_9[0] == '\0' ) {
  VAR_13 = VAR_7;
 }
 else {
  VAR_13 = VAR_9;
 }
 FUNC_4( VAR_12, sizeof( VAR_12 ), "models/players/%s/lower.md3", VAR_7 );
 VAR_6->legsModel = FUNC_5( VAR_12 );
 if ( !VAR_6->legsModel ) {
  FUNC_4( VAR_12, sizeof( VAR_12 ), "models/players/characters/%s/lower.md3", VAR_7 );
  VAR_6->legsModel = FUNC_5( VAR_12 );
  if ( !VAR_6->legsModel ) {
   FUNC_3( "Failed to load model file %s\n", VAR_12 );
   return VAR_4;
  }
 }

 FUNC_4( VAR_12, sizeof( VAR_12 ), "models/players/%s/upper.md3", VAR_7 );
 VAR_6->torsoModel = FUNC_5( VAR_12 );
 if ( !VAR_6->torsoModel ) {
  FUNC_4( VAR_12, sizeof( VAR_12 ), "models/players/characters/%s/upper.md3", VAR_7 );
  VAR_6->torsoModel = FUNC_5( VAR_12 );
  if ( !VAR_6->torsoModel ) {
   FUNC_3( "Failed to load model file %s\n", VAR_12 );
   return VAR_4;
  }
 }

 if( VAR_13[0] == '*' ) {
  FUNC_4( VAR_12, sizeof( VAR_12 ), "models/players/heads/%s/%s.md3", &VAR_9[1], &VAR_9[1] );
 }
 else {
  FUNC_4( VAR_12, sizeof( VAR_12 ), "models/players/%s/head.md3", VAR_13 );
 }
 VAR_6->headModel = FUNC_5( VAR_12 );

 if ( !VAR_6->headModel && VAR_13[0] != '*' ) {
  FUNC_4( VAR_12, sizeof( VAR_12 ), "models/players/heads/%s/%s.md3", VAR_9, VAR_9 );
  VAR_6->headModel = FUNC_5( VAR_12 );
 }
 if ( !VAR_6->headModel ) {
  FUNC_3( "Failed to load model file %s\n", VAR_12 );
  return VAR_4;
 }


 if ( !FUNC_2( VAR_6, VAR_11, VAR_7, VAR_8, VAR_13, VAR_10 ) ) {
  if ( VAR_11 && *VAR_11) {
   FUNC_3( "Failed to load skin file: %s : %s : %s, %s : %s\n", VAR_11, VAR_7, VAR_8, VAR_13, VAR_10 );
   if( VAR_6->team == VAR_3 ) {
    FUNC_4(VAR_14, sizeof(VAR_14), "%s/", VAR_0);
   }
   else {
    FUNC_4(VAR_14, sizeof(VAR_14), "%s/", VAR_1);
   }
   if ( !FUNC_2( VAR_6, VAR_14, VAR_7, VAR_8, VAR_13, VAR_10 ) ) {
    FUNC_3( "Failed to load skin file: %s : %s : %s, %s : %s\n", VAR_14, VAR_7, VAR_8, VAR_13, VAR_10 );
    return VAR_4;
   }
  } else {
   FUNC_3( "Failed to load skin file: %s : %s, %s : %s\n", VAR_7, VAR_8, VAR_13, VAR_10 );
   return VAR_4;
  }
 }


 FUNC_4( VAR_12, sizeof( VAR_12 ), "models/players/%s/animation.cfg", VAR_7 );
 if ( !FUNC_1( VAR_12, VAR_6 ) ) {
  FUNC_4( VAR_12, sizeof( VAR_12 ), "models/players/characters/%s/animation.cfg", VAR_7 );
  if ( !FUNC_1( VAR_12, VAR_6 ) ) {
   FUNC_3( "Failed to load animation file %s\n", VAR_12 );
   return VAR_4;
  }
 }

 if ( FUNC_0( VAR_12, sizeof(VAR_12), VAR_6, VAR_11, VAR_13, VAR_10, "icon", "skin" ) ) {
  VAR_6->modelIcon = FUNC_6( VAR_12 );
 }
 else if ( FUNC_0( VAR_12, sizeof(VAR_12), VAR_6, VAR_11, VAR_13, VAR_10, "icon", "tga" ) ) {
  VAR_6->modelIcon = FUNC_6( VAR_12 );
 }

 if ( !VAR_6->modelIcon ) {
  return VAR_4;
 }

 return VAR_5;
}
