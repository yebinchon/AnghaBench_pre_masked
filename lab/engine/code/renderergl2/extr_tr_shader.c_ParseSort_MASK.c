
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* Printf ) (int ,char*,int ) ;} ;
struct TYPE_3__ {int sort; int name; } ;


 char* FUNC_0 (char**,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_3 (int ,char*,int ) ;

void FUNC_4( char **VAR_13 ) {
 char *VAR_14;

 VAR_14 = FUNC_0( VAR_13, VAR_10 );
 if ( VAR_14[0] == 0 ) {
  VAR_11.Printf( VAR_0, "WARNING: missing sort parameter in shader '%s'\n", VAR_12.name );
  return;
 }

 if ( !FUNC_1( VAR_14, "portal" ) ) {
  VAR_12.sort = VAR_7;
 } else if ( !FUNC_1( VAR_14, "sky" ) ) {
  VAR_12.sort = VAR_4;
 } else if ( !FUNC_1( VAR_14, "opaque" ) ) {
  VAR_12.sort = VAR_6;
 }else if ( !FUNC_1( VAR_14, "decal" ) ) {
  VAR_12.sort = VAR_3;
 } else if ( !FUNC_1( VAR_14, "seeThrough" ) ) {
  VAR_12.sort = VAR_8;
 } else if ( !FUNC_1( VAR_14, "banner" ) ) {
  VAR_12.sort = VAR_1;
 } else if ( !FUNC_1( VAR_14, "additive" ) ) {
  VAR_12.sort = VAR_2;
 } else if ( !FUNC_1( VAR_14, "nearest" ) ) {
  VAR_12.sort = VAR_5;
 } else if ( !FUNC_1( VAR_14, "underwater" ) ) {
  VAR_12.sort = VAR_9;
 } else {
  VAR_12.sort = FUNC_2( VAR_14 );
 }
}
