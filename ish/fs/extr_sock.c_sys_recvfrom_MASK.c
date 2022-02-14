
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
struct fd {int real_fd; } ;
typedef scalar_t__ ssize_t ;
typedef int sockaddr ;
typedef int int_t ;
typedef int fd_t ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;


 int FUNC_0 (char*,int ,scalar_t__,int,int,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,char*,int,int,void*,int*) ;
 int FUNC_3 (int) ;
 struct fd* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,char*,int,int*) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__,char*,int) ;

int_t FUNC_9(fd_t VAR_3, addr_t VAR_4, dword_t VAR_5, dword_t VAR_6, addr_t VAR_7, addr_t VAR_8) {
    FUNC_0("recvfrom(%d, 0x%x, %d, %d, 0x%x, 0x%x)", VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    struct fd *VAR_9 = FUNC_4(VAR_3);
    if (VAR_9 == ((void*)0))
        return VAR_0;
    int VAR_10 = FUNC_3(VAR_6);
    if (VAR_10 < 0)
        return VAR_2;
    uint_t VAR_11 = 0;
    if (VAR_8 != 0)
        if (FUNC_6(VAR_8, VAR_11))
            return VAR_1;

    char VAR_12[VAR_5];
    char VAR_13[VAR_11];
    ssize_t VAR_14 = FUNC_2(VAR_9->real_fd, VAR_12, VAR_5, VAR_10,
            VAR_7 != 0 ? (void *) VAR_13 : ((void*)0),
            VAR_8 != 0 ? &VAR_11 : ((void*)0));
    if (VAR_14 < 0)
        return FUNC_1();

    if (FUNC_8(VAR_4, VAR_12, VAR_5))
        return VAR_1;
    if (VAR_7 != 0) {
        int VAR_15 = FUNC_5(VAR_7, VAR_13, sizeof(VAR_13), &VAR_11);
        if (VAR_15 < 0)
            return VAR_15;
    }
    if (VAR_8 != 0)
        if (FUNC_7(VAR_8, VAR_11))
            return VAR_1;
    return VAR_14;
}
