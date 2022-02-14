
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2( int VAR_1 ) {
 if ( VAR_1 >= 'a' && VAR_1 <= 'f' ) {
  return 10 + VAR_1 - 'a';
 }
 if ( VAR_1 >= 'A' && VAR_1 <= 'F' ) {
  return 10 + VAR_1 - 'A';
 }
 if ( VAR_1 >= '0' && VAR_1 <= '9' ) {
  return VAR_1 - '0';
 }

 FUNC_1();
 FUNC_0( VAR_0, "Hex: bad char '%c'", VAR_1 );

 return 0;
}
