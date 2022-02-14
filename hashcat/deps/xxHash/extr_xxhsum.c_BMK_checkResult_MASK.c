
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;


 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (int,char*,int,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(U32 VAR_0, U32 VAR_1)
{
    static int VAR_2 = 1;
    if (VAR_0==VAR_1) {
        FUNC_1(3, "\rTest%3i : %08X == %08X   ok   ", VAR_2, VAR_0, VAR_1);
    } else {
        FUNC_0("\rERROR : Test%3i : %08X <> %08X   !!!!!   \n", VAR_2, VAR_0, VAR_1);
        FUNC_2(1);
    }
    VAR_2++;
}
