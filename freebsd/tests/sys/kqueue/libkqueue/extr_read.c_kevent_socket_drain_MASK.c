
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_3(void)
{
    char VAR_1[1];


    FUNC_1("draining the read buffer");
    if (FUNC_2(VAR_0[0], &VAR_1[0], 1) < 1)
        FUNC_0(1, "read(2)");
}
