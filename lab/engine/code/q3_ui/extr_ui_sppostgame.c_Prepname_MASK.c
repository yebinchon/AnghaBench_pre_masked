
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int name ;
struct TYPE_2__ {char** placeNames; scalar_t__* clientNums; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,char*,int) ;

__attribute__((used)) static void FUNC_6( int VAR_3 ) {
 int VAR_4;
 char VAR_5[64];
 char VAR_6[VAR_1];

 FUNC_5( VAR_0 + VAR_2.clientNums[VAR_3], VAR_6, VAR_1 );
 FUNC_2( VAR_5, FUNC_0( VAR_6, "n" ), sizeof(VAR_5) );
 FUNC_1( VAR_5 );
 VAR_4 = FUNC_4( VAR_5 );

 while( VAR_4 && FUNC_3( VAR_5 ) > 256 ) {
  VAR_4--;
  VAR_5[VAR_4] = 0;
 }

 FUNC_2( VAR_2.placeNames[VAR_3], VAR_5, sizeof(VAR_2.placeNames[VAR_3]) );
}
