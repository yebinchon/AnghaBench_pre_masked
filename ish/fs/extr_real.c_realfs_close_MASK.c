
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int real_fd; int * dir; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

int FUNC_3(struct fd *VAR_0) {
    if (VAR_0->dir != ((void*)0))
        FUNC_1(VAR_0->dir);
    int VAR_1 = FUNC_0(VAR_0->real_fd);
    if (VAR_1 < 0)
        return FUNC_2();
    return 0;
}
