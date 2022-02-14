
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int) ;

qboolean FUNC_2(char *VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if ( !FUNC_0(VAR_3, FUNC_1("%s/pak%d", VAR_4, VAR_6)) ) {
   break;
  }
 }
 if (VAR_6 < VAR_5) {
  return VAR_2;
 }
 return VAR_1;
}
