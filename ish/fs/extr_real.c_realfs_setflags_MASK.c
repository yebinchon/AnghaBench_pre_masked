
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int real_fd; } ;
typedef int dword_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct fd *VAR_1, dword_t VAR_2) {
    int VAR_3 = FUNC_1(VAR_1->real_fd, VAR_0, FUNC_2(VAR_2));
    if (VAR_3 < 0)
        return FUNC_0();
    return 0;
}
