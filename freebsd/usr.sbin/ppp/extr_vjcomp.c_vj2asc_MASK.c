
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int FUNC_0 (char*,int,char*,int,char*) ;
 int FUNC_1 (char*,char*) ;

const char *
FUNC_2(u_int32_t VAR_0)
{
  static char VAR_1[50];

  if (VAR_0)
    FUNC_0(VAR_1, sizeof VAR_1, "%d VJ slots with%s slot compression",
            (int)((VAR_0>>8)&15)+1, VAR_0 & 1 ? "" : "out");
  else
    FUNC_1(VAR_1, "VJ disabled");
  return VAR_1;
}
