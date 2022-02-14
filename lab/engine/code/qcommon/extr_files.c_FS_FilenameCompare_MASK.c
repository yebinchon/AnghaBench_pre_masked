
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_0( const char *VAR_2, const char *VAR_3 ) {
 int VAR_4, VAR_5;

 do {
  VAR_4 = *VAR_2++;
  VAR_5 = *VAR_3++;

  if (VAR_4 >= 'a' && VAR_4 <= 'z') {
   VAR_4 -= ('a' - 'A');
  }
  if (VAR_5 >= 'a' && VAR_5 <= 'z') {
   VAR_5 -= ('a' - 'A');
  }

  if ( VAR_4 == '\\' || VAR_4 == ':' ) {
   VAR_4 = '/';
  }
  if ( VAR_5 == '\\' || VAR_5 == ':' ) {
   VAR_5 = '/';
  }

  if (VAR_4 != VAR_5) {
   return VAR_1;
  }
 } while (VAR_4);

 return VAR_0;
}
