
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlb {int dummy; } ;
typedef int addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (int) ;
 char* FUNC_2 (struct tlb*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char const*,unsigned int) ;

bool FUNC_5(struct tlb *VAR_2, addr_t VAR_3, const char *VAR_4, unsigned VAR_5) {
    char *VAR_6 = FUNC_2(VAR_2, VAR_3);
    char *VAR_7 = FUNC_2(VAR_2, (FUNC_0(VAR_3) + 1) << VAR_0);
    if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
        return 0;
    size_t VAR_8 = VAR_1 - FUNC_1(VAR_3);
    FUNC_3(VAR_8 < VAR_5);
    FUNC_4(VAR_6, VAR_4, VAR_8);
    FUNC_4(VAR_7, VAR_4 + VAR_8, VAR_5 - VAR_8);
    return 1;
}
