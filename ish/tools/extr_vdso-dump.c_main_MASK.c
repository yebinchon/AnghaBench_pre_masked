
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (void*,int,int,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

int FUNC_4() {
    void *VAR_1 = (void *) FUNC_2(VAR_0);
    FILE *VAR_2 = FUNC_0("libvdso.so", "w");
    if (VAR_2 == ((void*)0)) {
        FUNC_3("fopen libvdso.so");
        return 1;
    }
    FUNC_1(VAR_1, 0x2000, 1, VAR_2);
}
