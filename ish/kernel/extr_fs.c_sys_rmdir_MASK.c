
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;

dword_t FUNC_3(addr_t VAR_3) {
    char VAR_4[VAR_1];
    if (FUNC_2(VAR_3, VAR_4, sizeof(VAR_4)))
        return VAR_2;
    FUNC_0("rmdir(%s)", VAR_4);
    return FUNC_1(VAR_0, VAR_4);
}
