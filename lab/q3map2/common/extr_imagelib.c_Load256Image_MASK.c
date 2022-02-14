
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int w; int h; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*,int **,int **,int*,int*) ;
 int FUNC_3 (char const*,int **,int **) ;
 int FUNC_4 (char const*,int **,int **,int*,int*) ;
 int FUNC_5 (char*,char*) ;
 TYPE_1__ VAR_0 ;

void FUNC_6( const char *VAR_1, byte **VAR_2, byte **VAR_3, int *VAR_4, int *VAR_5 ){
 char VAR_6[128];

 FUNC_1( VAR_1, VAR_6 );
 if ( !FUNC_5( VAR_6, "lbm" ) ) {
  FUNC_3( VAR_1, VAR_2, VAR_3 );
  if ( VAR_4 ) {
   *VAR_4 = VAR_0.w;
  }
  if ( VAR_5 ) {
   *VAR_5 = VAR_0.h;
  }
 }
 else if ( !FUNC_5( VAR_6, "pcx" ) ) {
  FUNC_4( VAR_1, VAR_2, VAR_3, VAR_4, VAR_5 );
 }
 else if ( !FUNC_5( VAR_6, "bmp" ) ) {
  FUNC_2( VAR_1, VAR_2, VAR_3, VAR_4, VAR_5 );
 }
 else{
  FUNC_0( "%s doesn't have a known image extension", VAR_1 );
 }
}
