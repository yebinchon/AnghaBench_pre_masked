
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int path ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 struct fd* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct fd*,char*,char*,int) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int ,char*,scalar_t__) ;

dword_t FUNC_5(fd_t VAR_3, addr_t VAR_4, addr_t VAR_5, dword_t VAR_6) {
    char VAR_7[VAR_0];
    if (FUNC_3(VAR_4, VAR_7, sizeof(VAR_7)))
        return VAR_2;
    FUNC_0("readlinkat(%d, \"%s\", %#x, %#x)", VAR_3, VAR_7, VAR_5, VAR_6);
    struct fd *VAR_8 = FUNC_1(VAR_3);
    if (VAR_8 == ((void*)0))
        return VAR_1;
    char VAR_9[VAR_6];
    ssize_t VAR_10 = FUNC_2(VAR_8, VAR_7, VAR_9, VAR_6);
    if (VAR_10 >= 0) {
        FUNC_0(" \"%.*s\"", VAR_10, VAR_9);
        if (FUNC_4(VAR_5, VAR_9, VAR_10))
            return VAR_2;
    }
    return VAR_10;
}
