
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (char const**) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,char const*,int,int ) ;
 int FUNC_2 (int,int,char*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3( void ) {
 int VAR_8;
 int VAR_9;


 static const char *VAR_10[] = {
  "DeepMind Team",
  ((void*)0)
 };


 VAR_8 = (VAR_2 - FUNC_0(VAR_10) * (1.42 * VAR_0 * VAR_1)) / 2;

 VAR_8 += 1.42 * VAR_0 * VAR_1;

 for (VAR_9 = 0; VAR_10[VAR_9]; VAR_9++) {
  FUNC_1( 320, VAR_8, VAR_10[VAR_9], VAR_4|VAR_3, VAR_6 );
  VAR_8 += 1.42 * VAR_0 * VAR_1;
 }

 FUNC_2( 320, 459, "www.deepmind.com", VAR_4|VAR_5, VAR_7 );
}
