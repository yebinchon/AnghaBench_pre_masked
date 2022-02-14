
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clientNum; } ;


 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_4( void ) {
 int VAR_3;

 FUNC_2(VAR_2.clientNum);
 FUNC_3(VAR_2.clientNum);

 for (VAR_3=0 ; VAR_3<VAR_1 ; VAR_3++) {
  const char *VAR_4;

  if (VAR_2.clientNum == VAR_3) {
   continue;
  }

  VAR_4 = FUNC_1( VAR_0+VAR_3 );
  if ( !VAR_4[0]) {
   continue;
  }
  FUNC_2( VAR_3 );
  FUNC_3( VAR_3 );
 }
 FUNC_0();
}
