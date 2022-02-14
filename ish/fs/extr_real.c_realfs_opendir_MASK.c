
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int * dir; int real_fd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct fd *VAR_0) {
    if (VAR_0->dir == ((void*)0)) {
        int VAR_1 = FUNC_1(VAR_0->real_fd);
        VAR_0->dir = FUNC_2(VAR_1);

        FUNC_0(VAR_0->dir != ((void*)0));
    }
}
