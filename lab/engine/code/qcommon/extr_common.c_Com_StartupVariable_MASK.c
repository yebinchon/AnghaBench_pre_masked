
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (char*,char const*) ;

void FUNC_7( const char *VAR_5 ) {
 int VAR_6;
 char *VAR_7;

 for (VAR_6=0 ; VAR_6 < VAR_3 ; VAR_6++) {
  FUNC_2( VAR_2[VAR_6] );
  if ( FUNC_6( FUNC_1(0), "set" ) ) {
   continue;
  }

  VAR_7 = FUNC_1(1);

  if(!VAR_5 || !FUNC_6(VAR_7, VAR_5))
  {
   if(FUNC_3(VAR_7) == VAR_0)
    FUNC_4(VAR_7, FUNC_0(2), VAR_1);
   else
    FUNC_5(VAR_7, FUNC_0(2), VAR_4);
  }
 }
}
