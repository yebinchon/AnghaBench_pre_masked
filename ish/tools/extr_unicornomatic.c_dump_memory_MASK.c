
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uc_engine ;
typedef int buf ;
typedef int addr_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (int *,int ,char*,size_t) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(uc_engine *VAR_0, const char *VAR_1, addr_t VAR_2, size_t VAR_3) {
    char VAR_4[VAR_3];
    FUNC_4(FUNC_3(VAR_0, VAR_2, VAR_4, VAR_3), "uc_mem_read");
    FILE *VAR_5 = FUNC_1(VAR_1, "w");
    FUNC_2(VAR_4, 1, sizeof(VAR_4), VAR_5);
    FUNC_0(VAR_5);
}
