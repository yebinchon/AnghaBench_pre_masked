
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int dummy; } ;
typedef int path ;
typedef int int_t ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (struct fd*,char*) ;
 int FUNC_3 (struct fd*,char*) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;

dword_t FUNC_5(fd_t VAR_4, addr_t VAR_5, int_t VAR_6) {
    char VAR_7[VAR_1];
    if (FUNC_4(VAR_5, VAR_7, sizeof(VAR_7)))
        return VAR_3;
    FUNC_0("unlinkat(%d, \"%s\", %d)", VAR_4, VAR_7, VAR_6);
    struct fd *VAR_8 = FUNC_1(VAR_4);
    if (VAR_8 == ((void*)0))
        return VAR_2;
    if (VAR_6 & VAR_0)
        return FUNC_2(VAR_8, VAR_7);
    else
        return FUNC_3(VAR_8, VAR_7);
}
