
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,char*,...) ;
 int VAR_0 ;

void FUNC_1( int VAR_1, char *VAR_2 ) {
 int VAR_3,VAR_4,VAR_5,VAR_6;

 if ( VAR_1 < 0 || VAR_1 > 9999 ) {
  FUNC_0( VAR_2, VAR_0, "screenshots/shot9999.tga" );
  return;
 }

 VAR_3 = VAR_1 / 1000;
 VAR_1 -= VAR_3*1000;
 VAR_4 = VAR_1 / 100;
 VAR_1 -= VAR_4*100;
 VAR_5 = VAR_1 / 10;
 VAR_1 -= VAR_5*10;
 VAR_6 = VAR_1;

 FUNC_0( VAR_2, VAR_0, "screenshots/shot%i%i%i%i.tga"
  , VAR_3, VAR_4, VAR_5, VAR_6 );
}
