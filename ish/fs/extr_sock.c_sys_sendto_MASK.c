
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_max_ {int dummy; } ;
struct fd {int real_fd; } ;
typedef scalar_t__ ssize_t ;
typedef int int_t ;
typedef int fd_t ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;


 int FUNC_0 (char*,int ,char*,int,int,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,char*,int,int,void*,int) ;
 int FUNC_3 (int) ;
 struct fd* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,struct sockaddr_max_*,int*) ;
 scalar_t__ FUNC_6 (scalar_t__,char*,int) ;

int_t FUNC_7(fd_t VAR_3, addr_t VAR_4, dword_t VAR_5, dword_t VAR_6, addr_t VAR_7, dword_t VAR_8) {
    struct fd *VAR_9 = FUNC_4(VAR_3);
    if (VAR_9 == ((void*)0))
        return VAR_0;
    char VAR_10[VAR_5 + 1];
    if (FUNC_6(VAR_4, VAR_10, VAR_5))
        return VAR_1;
    VAR_10[VAR_5] = '\0';
    FUNC_0("sendto(%d, \"%.100s\", %d, %d, 0x%x, %d)", VAR_3, VAR_10, VAR_5, VAR_6, VAR_7, VAR_8);
    int VAR_11 = FUNC_3(VAR_6);
    if (VAR_11 < 0)
        return VAR_2;
    struct sockaddr_max_ VAR_12;
    if (VAR_7) {
        int VAR_13 = FUNC_5(VAR_7, &VAR_12, &VAR_8);
        if (VAR_13 < 0)
            return VAR_13;
    }

    ssize_t VAR_14 = FUNC_2(VAR_9->real_fd, VAR_10, VAR_5, VAR_11,
            VAR_7 ? (void *) &VAR_12 : ((void*)0), VAR_8);
    if (VAR_14 < 0)
        return FUNC_1();
    return VAR_14;
}
