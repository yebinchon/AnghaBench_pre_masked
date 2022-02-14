
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int real_fd; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;

int FUNC_2(struct fd *VAR_0) {
    int VAR_1 = FUNC_1(VAR_0->real_fd);
    if (VAR_1 < 0)
        return FUNC_0();
    return 0;
}
