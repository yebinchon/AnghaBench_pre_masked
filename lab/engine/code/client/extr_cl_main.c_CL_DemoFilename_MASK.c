
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,int,int,int,int) ;

void FUNC_1( int VAR_0, char *VAR_1, int VAR_2 ) {
 int VAR_3,VAR_4,VAR_5,VAR_6;

 if(VAR_0 < 0 || VAR_0 > 9999)
  VAR_0 = 9999;

 VAR_3 = VAR_0 / 1000;
 VAR_0 -= VAR_3*1000;
 VAR_4 = VAR_0 / 100;
 VAR_0 -= VAR_4*100;
 VAR_5 = VAR_0 / 10;
 VAR_0 -= VAR_5*10;
 VAR_6 = VAR_0;

 FUNC_0( VAR_1, VAR_2, "demo%i%i%i%i"
  , VAR_3, VAR_4, VAR_5, VAR_6 );
}
