
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;


 int FUNC_0 (char*,char*,size_t,int ) ;

__attribute__((used)) static void FUNC_1(u16 VAR_0, u8 * VAR_1)
{
 u16 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0("%25s%2.2X : %2.2X\n", "Byte", VAR_2, VAR_1[VAR_2]);
 }
}
