
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int quad_t ;


 char** VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static char *
FUNC_1(int VAR_2, int VAR_3)
{
 char *VAR_4 = VAR_0[VAR_1];

 if (VAR_2 + VAR_3) {
  FUNC_0(VAR_4, "%3d%%",
      (int)(char)((quad_t)VAR_2 * 100 / (VAR_2 + VAR_3)));
 } else {
  FUNC_0(VAR_4, "   -");
 }
 VAR_1 = (VAR_1 + 1) & 63;
 return(VAR_4);
}
