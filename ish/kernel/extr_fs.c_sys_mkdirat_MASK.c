
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


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*) ;
 struct fd* FUNC_2 (int ) ;
 int FUNC_3 (struct fd*,char*,int) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;

dword_t FUNC_5(fd_t VAR_3, addr_t VAR_4, mode_t_ VAR_5) {
    char VAR_6[VAR_0];
    if (FUNC_4(VAR_4, VAR_6, sizeof(VAR_6)))
        return VAR_2;
    FUNC_0("mkdirat(%d, %s, 0%o)", VAR_3, VAR_6, VAR_5);
    struct fd *VAR_7 = FUNC_2(VAR_3);
    if (VAR_7 == ((void*)0))
        return VAR_1;
    FUNC_1(&VAR_5);
    VAR_5 &= 0777;
    return FUNC_3(VAR_7, VAR_6, VAR_5);
}
