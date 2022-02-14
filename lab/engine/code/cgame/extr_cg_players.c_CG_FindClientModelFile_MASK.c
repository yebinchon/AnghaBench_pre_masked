
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int team; } ;
typedef TYPE_1__ clientInfo_t ;
struct TYPE_5__ {scalar_t__ gametype; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char*,char const*,char const*,char const*,char const*,...) ;
 scalar_t__ VAR_0 ;

 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static qboolean FUNC_2( char *VAR_4, int VAR_5, clientInfo_t *VAR_6, const char *VAR_7, const char *VAR_8, const char *VAR_9, const char *VAR_10, const char *VAR_11 ) {
 char *VAR_12, *VAR_13;
 int VAR_14;

 if ( VAR_1.gametype >= VAR_0 ) {
  switch ( VAR_6->team ) {
   case 128: {
    VAR_12 = "blue";
    break;
   }
   default: {
    VAR_12 = "red";
    break;
   }
  }
 }
 else {
  VAR_12 = "default";
 }
 VAR_13 = "";
 while(1) {
  for ( VAR_14 = 0; VAR_14 < 2; VAR_14++ ) {
   if ( VAR_14 == 0 && VAR_7 && *VAR_7 ) {

    FUNC_1( VAR_4, VAR_5, "models/players/%s%s/%s%s_%s_%s.%s", VAR_13, VAR_8, VAR_7, VAR_10, VAR_9, VAR_12, VAR_11 );
   }
   else {

    FUNC_1( VAR_4, VAR_5, "models/players/%s%s/%s_%s_%s.%s", VAR_13, VAR_8, VAR_10, VAR_9, VAR_12, VAR_11 );
   }
   if ( FUNC_0( VAR_4 ) ) {
    return VAR_3;
   }
   if ( VAR_1.gametype >= VAR_0 ) {
    if ( VAR_14 == 0 && VAR_7 && *VAR_7 ) {

     FUNC_1( VAR_4, VAR_5, "models/players/%s%s/%s%s_%s.%s", VAR_13, VAR_8, VAR_7, VAR_10, VAR_12, VAR_11 );
    }
    else {

     FUNC_1( VAR_4, VAR_5, "models/players/%s%s/%s_%s.%s", VAR_13, VAR_8, VAR_10, VAR_12, VAR_11 );
    }
   }
   else {
    if ( VAR_14 == 0 && VAR_7 && *VAR_7 ) {

     FUNC_1( VAR_4, VAR_5, "models/players/%s%s/%s%s_%s.%s", VAR_13, VAR_8, VAR_7, VAR_10, VAR_9, VAR_11 );
    }
    else {

     FUNC_1( VAR_4, VAR_5, "models/players/%s%s/%s_%s.%s", VAR_13, VAR_8, VAR_10, VAR_9, VAR_11 );
    }
   }
   if ( FUNC_0( VAR_4 ) ) {
    return VAR_3;
   }
   if ( !VAR_7 || !*VAR_7 ) {
    break;
   }
  }

  if ( VAR_13[0] ) {
   break;
  }
  VAR_13 = "characters/";
 }

 return VAR_2;
}
