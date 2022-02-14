
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (char const*) ;

char* FUNC_3( const char* VAR_4 ) {
 char *VAR_5;
 int VAR_6 = FUNC_2(VAR_4) + 1;
 if ( VAR_2 + VAR_6 > VAR_0 ) {
  FUNC_0( VAR_1, "Failed to Allocate new string!" );
 }
 VAR_5 = &VAR_3[VAR_2];
 FUNC_1( VAR_5, VAR_4, VAR_6 );

 VAR_2 += VAR_6;
 return VAR_5;
}
