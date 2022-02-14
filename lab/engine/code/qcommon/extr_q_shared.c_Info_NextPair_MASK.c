
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0( const char **VAR_0, char *VAR_1, char *VAR_2 ) {
 char *VAR_3;
 const char *VAR_4;

 VAR_4 = *VAR_0;

 if ( *VAR_4 == '\\' ) {
  VAR_4++;
 }
 VAR_1[0] = 0;
 VAR_2[0] = 0;

 VAR_3 = VAR_1;
 while ( *VAR_4 != '\\' ) {
  if ( !*VAR_4 ) {
   *VAR_3 = 0;
   *VAR_0 = VAR_4;
   return;
  }
  *VAR_3++ = *VAR_4++;
 }
 *VAR_3 = 0;
 VAR_4++;

 VAR_3 = VAR_2;
 while ( *VAR_4 != '\\' && *VAR_4 ) {
  *VAR_3++ = *VAR_4++;
 }
 *VAR_3 = 0;

 *VAR_0 = VAR_4;
}
