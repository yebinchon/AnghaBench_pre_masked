
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef int off_t_ ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;

dword_t FUNC_3(addr_t VAR_2, dword_t VAR_3, dword_t VAR_4) {
    off_t_ VAR_5 = ((off_t_) VAR_4 << 32) | VAR_3;
    char VAR_6[VAR_0];
    if (FUNC_2(VAR_2, VAR_6, sizeof(VAR_6)))
        return VAR_1;
    return FUNC_0(((void*)0), VAR_6, FUNC_1(VAR_5, VAR_5), 1);
}
