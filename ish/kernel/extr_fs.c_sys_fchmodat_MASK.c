
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int dummy; } ;
typedef int path ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (struct fd*,char*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;

dword_t FUNC_5(fd_t VAR_4, addr_t VAR_5, dword_t VAR_6) {
    char VAR_7[VAR_0];
    if (FUNC_4(VAR_5, VAR_7, sizeof(VAR_7)))
        return VAR_3;
    FUNC_0("fchmodat(%d, \"%s\", %o)", VAR_4, VAR_7, VAR_6);
    struct fd *VAR_8 = FUNC_1(VAR_4);
    if (VAR_8 == ((void*)0))
        return VAR_2;
    VAR_6 &= ~VAR_1;
    return FUNC_2(VAR_8, VAR_7, FUNC_3(VAR_6, VAR_6), 1);
}
