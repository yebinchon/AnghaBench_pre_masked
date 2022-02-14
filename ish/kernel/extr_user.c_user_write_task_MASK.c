
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int mem; } ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 char* FUNC_0 (int ,scalar_t__,int ) ;

int FUNC_1(struct task *VAR_1, addr_t VAR_2, const void *VAR_3, size_t VAR_4) {
    const char *VAR_5 = (const char *) VAR_3;
    size_t VAR_6 = 0;
    while (VAR_6 < VAR_4) {
        char *VAR_7 = FUNC_0(VAR_1->mem, VAR_2 + VAR_6, VAR_0);
        if (VAR_7 == ((void*)0))
            return 1;
        *VAR_7 = VAR_5[VAR_6++];
    }
    return 0;
}
