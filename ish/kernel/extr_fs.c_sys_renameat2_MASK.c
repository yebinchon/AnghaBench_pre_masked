
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int dummy; } ;
typedef int src ;
typedef scalar_t__ int_t ;
typedef int fd_t ;
typedef int dword_t ;
typedef int dst ;
typedef int addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (struct fd*,char*,struct fd*,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;

dword_t FUNC_4(fd_t VAR_4, addr_t VAR_5, fd_t VAR_6, addr_t VAR_7, int_t VAR_8) {
    if (VAR_8 != 0)
        return VAR_3;
    char VAR_9[VAR_0];
    if (FUNC_3(VAR_5, VAR_9, sizeof(VAR_9)))
        return VAR_2;
    char VAR_10[VAR_0];
    if (FUNC_3(VAR_7, VAR_10, sizeof(VAR_10)))
        return VAR_2;
    FUNC_0("renameat(%d, \"%s\", %d, \"%s\")", VAR_4, VAR_9, VAR_6, VAR_10);
    struct fd *VAR_11 = FUNC_1(VAR_4);
    if (VAR_11 == ((void*)0))
        return VAR_1;
    struct fd *VAR_12 = FUNC_1(VAR_6);
    if (VAR_12 == ((void*)0))
        return VAR_1;
    return FUNC_2(VAR_11, VAR_9, VAR_12, VAR_10);
}
