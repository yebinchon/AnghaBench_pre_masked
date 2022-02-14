
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int dummy; } ;
typedef int path ;
typedef int mode_t_ ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;


 scalar_t__ FUNC_0 (struct fd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fd*) ;
 int FUNC_2 (char*,int ,char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 struct fd* FUNC_4 (int ) ;
 int FUNC_5 (struct fd*,int) ;
 struct fd* FUNC_6 (struct fd*,char*,int,int ) ;
 scalar_t__ FUNC_7 (int ,char*,int) ;

fd_t FUNC_8(fd_t VAR_4, addr_t VAR_5, dword_t VAR_6, mode_t_ VAR_7) {
    char VAR_8[VAR_0];
    if (FUNC_7(VAR_5, VAR_8, sizeof(VAR_8)))
        return VAR_3;
    FUNC_2("openat(%d, \"%s\", 0x%x, 0x%x)", VAR_4, VAR_8, VAR_6, VAR_7);

    if (VAR_6 & VAR_1)
        FUNC_3(&VAR_7);

    struct fd *VAR_9 = FUNC_4(VAR_4);
    if (VAR_9 == ((void*)0))
        return VAR_2;
    struct fd *VAR_10 = FUNC_6(VAR_9, VAR_8, VAR_6, VAR_7);
    if (FUNC_0(VAR_10))
        return FUNC_1(VAR_10);
    return FUNC_5(VAR_10, VAR_6);
}
