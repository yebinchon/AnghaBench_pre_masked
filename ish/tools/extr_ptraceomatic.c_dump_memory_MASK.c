
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dword_t ;
typedef scalar_t__ addr_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,int,int,int *) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(int VAR_0, const char *VAR_1, addr_t VAR_2, addr_t VAR_3) {
    FILE *VAR_4 = FUNC_1(VAR_1, "w");
    for (addr_t VAR_5 = VAR_2; VAR_5 <= VAR_3; VAR_5 += sizeof(dword_t)) {
        dword_t VAR_6 = FUNC_3(VAR_0, VAR_5);
        FUNC_2(&VAR_6, sizeof(dword_t), 1, VAR_4);
    }
    FUNC_0(VAR_4);
}
