
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int real_fd; } ;
typedef int int_t ;
typedef int fd_t ;
typedef int dword_t ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 struct fd* FUNC_3 (int ) ;

int_t FUNC_4(fd_t VAR_1, dword_t VAR_2) {
    FUNC_0("shutdown(%d, %d)", VAR_1, VAR_2);
    struct fd *VAR_3 = FUNC_3(VAR_1);
    if (VAR_3 == ((void*)0))
        return VAR_0;
    int VAR_4 = FUNC_2(VAR_3->real_fd, VAR_2);
    if (VAR_4 < 0)
        return FUNC_1();
    return 0;
}
