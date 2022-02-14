
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int real_fd; } ;
typedef int sockaddr ;
typedef int int_t ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,void*,int*) ;
 struct fd* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int*) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;

int_t FUNC_7(fd_t VAR_2, addr_t VAR_3, addr_t VAR_4) {
    FUNC_0("getsockname(%d, 0x%x, 0x%x)", VAR_2, VAR_3, VAR_4);
    struct fd *VAR_5 = FUNC_3(VAR_2);
    if (VAR_5 == ((void*)0))
        return VAR_0;
    dword_t VAR_6;
    if (FUNC_5(VAR_4, VAR_6))
        return VAR_1;



    char VAR_7[VAR_6];
    int VAR_8 = FUNC_2(VAR_5->real_fd, (void *) VAR_7, &VAR_6);
    if (VAR_8 < 0)
        return FUNC_1();

    int VAR_9 = FUNC_4(VAR_3, VAR_7, sizeof(VAR_7), &VAR_6);
    if (VAR_9 < 0)
        return VAR_9;
    if (FUNC_6(VAR_4, VAR_6))
        return VAR_1;
    return VAR_8;
}
