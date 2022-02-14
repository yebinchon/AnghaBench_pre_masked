
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int,int ) ;
 void* FUNC_3 (int *,size_t,int ,int ,int,int ) ;
 int FUNC_4 (char* const,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ,char* const,char* const*,char* const*) ;
 int FUNC_8 (int,void*,size_t) ;
 int FUNC_9 (int ,char*) ;

int FUNC_10(int VAR_6, char *const VAR_7[]) {
    char *const VAR_8[] = {((void*)0)};
    int VAR_9 = FUNC_7(VAR_0, VAR_7[2], VAR_7 + 2, VAR_8);

    int VAR_10 = FUNC_9(FUNC_4(VAR_7[1], VAR_3), "open vdso");
    struct stat VAR_11;
    FUNC_9(FUNC_1(VAR_10, &VAR_11), "stat vdso");
    size_t VAR_12 = VAR_11.st_size;
    void *VAR_13 = FUNC_3(((void*)0), VAR_11.st_size, VAR_4, VAR_2, VAR_10, 0);
    if (VAR_13 == VAR_1) {
        FUNC_5("mmap vdso"); FUNC_0(1);
    }
    FUNC_8(VAR_9, VAR_13, VAR_12);

    FUNC_9(FUNC_2(VAR_9, VAR_5), "pause process");
    FUNC_6("attach debugger to %d\n", VAR_9);
    return 0;
}
