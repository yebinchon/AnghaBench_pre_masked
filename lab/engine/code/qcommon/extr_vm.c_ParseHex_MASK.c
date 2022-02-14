
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0( const char *VAR_0 ) {
 int VAR_1;
 int VAR_2;

 VAR_1 = 0;
 while ( ( VAR_2 = *VAR_0++ ) != 0 ) {
  if ( VAR_2 >= '0' && VAR_2 <= '9' ) {
   VAR_1 = VAR_1 * 16 + VAR_2 - '0';
   continue;
  }
  if ( VAR_2 >= 'a' && VAR_2 <= 'f' ) {
   VAR_1 = VAR_1 * 16 + 10 + VAR_2 - 'a';
   continue;
  }
  if ( VAR_2 >= 'A' && VAR_2 <= 'F' ) {
   VAR_1 = VAR_1 * 16 + 10 + VAR_2 - 'A';
   continue;
  }
 }

 return VAR_1;
}
