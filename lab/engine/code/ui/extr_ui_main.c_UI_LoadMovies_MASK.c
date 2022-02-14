
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int movieCount; int * movieList; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,char*,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_5( void ) {
 char VAR_2[4096];
 char *VAR_3;
 int VAR_4, VAR_5;

 VAR_1.movieCount = FUNC_4( "video", "roq", VAR_2, 4096 );

 if (VAR_1.movieCount) {
  if (VAR_1.movieCount > VAR_0) {
   VAR_1.movieCount = VAR_0;
  }
  VAR_3 = VAR_2;
  for ( VAR_4 = 0; VAR_4 < VAR_1.movieCount; VAR_4++ ) {
   VAR_5 = FUNC_3( VAR_3 );
   if (!FUNC_0(VAR_3 + VAR_5 - 4,".roq")) {
    VAR_3[VAR_5-4] = '\0';
   }
   FUNC_1(VAR_3);
   VAR_1.movieList[VAR_4] = FUNC_2(VAR_3);
   VAR_3 += VAR_5 + 1;
  }
 }

}
