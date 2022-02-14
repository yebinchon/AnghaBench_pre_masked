
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_1(int VAR_3, u8 VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 7; VAR_5++) {
  if (VAR_4 & (1 << VAR_5))
   FUNC_0(VAR_0, "%sError %s\n",
    VAR_1[VAR_3], VAR_2[VAR_5]);
 }
}
