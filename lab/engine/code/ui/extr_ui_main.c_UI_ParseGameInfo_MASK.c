
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char**,int ) ;
 scalar_t__ FUNC_1 (char**,int ) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char**) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(const char *VAR_2) {
 char *VAR_3;
 char *VAR_4;
 char *VAR_5 = ((void*)0);


 VAR_5 = FUNC_2(VAR_2);
 if (!VAR_5) {
  return;
 }

 VAR_4 = VAR_5;

 while ( 1 ) {
  VAR_3 = FUNC_0( &VAR_4, VAR_1 );
  if (!VAR_3[0] || VAR_3[0] == '}') {
   break;
  }

  if ( FUNC_4( VAR_3, "}" ) == 0 ) {
   break;
  }

  if (FUNC_4(VAR_3, "gametypes") == 0) {

   if (FUNC_1(&VAR_4, VAR_0)) {
    continue;
   } else {
    break;
   }
  }

  if (FUNC_4(VAR_3, "joingametypes") == 0) {

   if (FUNC_1(&VAR_4, VAR_1)) {
    continue;
   } else {
    break;
   }
  }

  if (FUNC_4(VAR_3, "maps") == 0) {

   FUNC_3(&VAR_4);
  }

 }
}
