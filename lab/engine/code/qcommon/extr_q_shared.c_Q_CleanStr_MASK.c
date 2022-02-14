
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;

char *FUNC_1( char *VAR_0 ) {
 char* VAR_1;
 char* VAR_2;
 int VAR_3;

 VAR_2 = VAR_0;
 VAR_1 = VAR_0;
 while ((VAR_3 = *VAR_2) != 0 ) {
  if ( FUNC_0( VAR_2 ) ) {
   VAR_2++;
  }
  else if ( VAR_3 >= 0x20 && VAR_3 <= 0x7E ) {
   *VAR_1++ = VAR_3;
  }
  VAR_2++;
 }
 *VAR_1 = '\0';

 return VAR_0;
}
