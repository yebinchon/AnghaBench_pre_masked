
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;


 int FUNC_0 (char*,char*,size_t,int ) ;

__attribute__((used)) static void FUNC_1(u8 VAR_0, u32 * VAR_1)
{
 u8 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0("%25s%2.2X : %8.8X\n", "Dword", VAR_2, VAR_1[VAR_2]);
 }
}
