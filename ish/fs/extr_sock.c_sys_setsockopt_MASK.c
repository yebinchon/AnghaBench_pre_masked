
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int real_fd; } ;
typedef int int_t ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int,int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,int,char*,int) ;
 struct fd* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int ,char*,int) ;

int_t FUNC_7(fd_t VAR_7, dword_t VAR_8, dword_t VAR_9, addr_t VAR_10, dword_t VAR_11) {
    FUNC_0("setsockopt(%d, %d, %d, 0x%x, %d)", VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
    struct fd *VAR_12 = FUNC_3(VAR_7);
    if (VAR_12 == ((void*)0))
        return VAR_4;
    char VAR_13[VAR_11];
    if (FUNC_6(VAR_10, VAR_13, VAR_11))
        return VAR_5;


    if (VAR_8 == VAR_1 && VAR_9 == VAR_0)
        return 0;

    if (VAR_8 == VAR_2 && VAR_9 == VAR_3)
        return 0;

    int VAR_14 = FUNC_5(VAR_9, VAR_8);
    if (VAR_14 < 0)
        return VAR_6;
    int VAR_15 = FUNC_4(VAR_8);
    if (VAR_15 < 0)
        return VAR_6;



    if (VAR_14 == 0)
        return 0;

    int VAR_16 = FUNC_2(VAR_12->real_fd, VAR_15, VAR_14, VAR_13, VAR_11);
    if (VAR_16 < 0)
        return FUNC_1();
    return 0;
}
