
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int etherbuf ;


 int FUNC_0 (char*,int,char*,int const,int const,int const,int const,int const,int const) ;

__attribute__((used)) static const char*
FUNC_1(const u_int8_t *VAR_0)
{
 static char VAR_1[18];
 FUNC_0(VAR_1, sizeof(VAR_1), "%02x:%02x:%02x:%02x:%02x:%02x",
  VAR_0[0], VAR_0[1], VAR_0[2], VAR_0[3], VAR_0[4], VAR_0[5]);
 return VAR_1;
}
