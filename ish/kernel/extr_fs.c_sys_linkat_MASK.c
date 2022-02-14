
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int dummy; } ;
typedef int src ;
typedef int fd_t ;
typedef int dword_t ;
typedef int dst ;
typedef int addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (struct fd*,char*,struct fd*,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;

dword_t FUNC_4(fd_t VAR_3, addr_t VAR_4, fd_t VAR_5, addr_t VAR_6) {
    char VAR_7[VAR_0];
    if (FUNC_3(VAR_4, VAR_7, sizeof(VAR_7)))
        return VAR_2;
    char VAR_8[VAR_0];
    if (FUNC_3(VAR_6, VAR_8, sizeof(VAR_8)))
        return VAR_2;
    FUNC_0("linkat(%d, \"%s\", %d, \"%s\")", VAR_3, VAR_7, VAR_5, VAR_8);
    struct fd *VAR_9 = FUNC_1(VAR_3);
    if (VAR_9 == ((void*)0))
        return VAR_1;
    struct fd *VAR_10 = FUNC_1(VAR_5);
    if (VAR_10 == ((void*)0))
        return VAR_1;
    return FUNC_2(VAR_9, VAR_7, VAR_10, VAR_8);
}
