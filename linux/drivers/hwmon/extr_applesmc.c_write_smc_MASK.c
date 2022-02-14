
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int const,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(u8 VAR_2, const char *VAR_3, const u8 *VAR_4, u8 VAR_5)
{
 int VAR_6;

 if (FUNC_3(VAR_2) || FUNC_1(VAR_3)) {
  FUNC_0("%s: write arg fail\n", VAR_3);
  return -VAR_1;
 }

 if (FUNC_2(VAR_5, VAR_0)) {
  FUNC_0("%.4s: write len fail\n", VAR_3);
  return -VAR_1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (FUNC_2(VAR_4[VAR_6], VAR_0)) {
   FUNC_0("%s: write data fail\n", VAR_3);
   return -VAR_1;
  }
 }

 return 0;
}
