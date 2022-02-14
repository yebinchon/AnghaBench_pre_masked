
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int dummy; } ;
typedef int fd_t ;
typedef int dword_t ;



 int FUNC_0 (char*,int ,int,int) ;
 int VAR_0 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (struct fd*,int,int) ;
 int FUNC_3 (struct fd*,int) ;

dword_t FUNC_4(fd_t VAR_1, dword_t VAR_2, dword_t VAR_3) {
    FUNC_0("ioctl(%d, 0x%x, 0x%x)", VAR_1, VAR_2, VAR_3);
    struct fd *VAR_4 = FUNC_1(VAR_1);
    if (VAR_4 == ((void*)0))
        return VAR_0;

    switch (VAR_2) {
        case 128:
            return FUNC_3(VAR_4, VAR_3);
        default:
            return FUNC_2(VAR_4, VAR_2, VAR_3);
    }
    return 0;
}
