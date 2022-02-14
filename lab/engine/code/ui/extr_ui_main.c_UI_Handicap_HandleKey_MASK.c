
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static qboolean FUNC_4(int VAR_2, float *VAR_3, int VAR_4) {
 int VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 != 0) {
  int VAR_6;

  VAR_6 = FUNC_0( 5, 100, FUNC_3("handicap") );
  VAR_6 += 5 * VAR_5;

  if (VAR_6 > 100) {
   VAR_6 = 5;
  } else if (VAR_6 < 5) {
   VAR_6 = 100;
  }

  FUNC_2( "handicap", VAR_6 );
  return VAR_1;
 }
 return VAR_0;
}
