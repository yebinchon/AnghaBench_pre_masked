
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static qboolean FUNC_3(int VAR_3, float *VAR_4, int VAR_5) {
 int VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 != 0) {
  int VAR_7 = FUNC_2( "g_spSkill" );

  VAR_7 += VAR_6;

  if (VAR_7 < 1) {
   VAR_7 = VAR_0;
  } else if (VAR_7 > VAR_0) {
   VAR_7 = 1;
  }

  FUNC_1("g_spSkill", VAR_7);
  return VAR_2;
 }
 return VAR_1;
}
