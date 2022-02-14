
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(u32 *VAR_2)
{
 int VAR_3, VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  u32 VAR_5 = VAR_2[VAR_3];
  for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
   if (VAR_5 & 1)
    FUNC_0("%d:%d ", VAR_3, VAR_4);
   VAR_5 >>= 1;
  }
 }

}
