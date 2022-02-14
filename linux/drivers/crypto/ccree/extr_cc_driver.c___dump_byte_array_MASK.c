
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int prefix ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int,int,int const*,size_t,int) ;
 int FUNC_1 (char*,int,char*,char const*,size_t) ;

void FUNC_2(const char *VAR_2, const u8 *VAR_3, size_t VAR_4)
{
 char VAR_5[64];

 if (!VAR_3)
  return;

 FUNC_1(VAR_5, sizeof(VAR_5), "%s[%zu]: ", VAR_2, VAR_4);

 FUNC_0(VAR_1, VAR_5, VAR_0, 16, 1, VAR_3,
         VAR_4, 0);
}
