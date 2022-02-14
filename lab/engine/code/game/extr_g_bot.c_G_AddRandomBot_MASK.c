
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,float,char*,int ) ;

void FUNC_3( int VAR_3 ) {
 char *VAR_4;
 float VAR_5;

 VAR_5 = FUNC_0( "g_spSkill" );
 if (VAR_3 == VAR_2) VAR_4 = "red";
 else if (VAR_3 == VAR_1) VAR_4 = "blue";
 else VAR_4 = "free";
 FUNC_1( VAR_0, FUNC_2("addbot random %f %s %i\n", VAR_5, VAR_4, 0) );
}
