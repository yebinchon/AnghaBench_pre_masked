
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0( char *VAR_0 ){
 if ( VAR_0 == ((void*)0) ) {
  return;
 }
 while ( *VAR_0 )
 {
  if ( *VAR_0 == '\\' ) {
   *VAR_0 = '/';
  }
  VAR_0++;
 }
}
