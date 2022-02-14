
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int real_fd; } ;
typedef int fd_t ;


 int VAR_0 ;
 struct fd* FUNC_0 (int *) ;
 int FUNC_1 (struct fd*,int) ;
 int VAR_1 ;

__attribute__((used)) static fd_t FUNC_2(int VAR_2, int VAR_3) {
    struct fd *VAR_4 = FUNC_0(&VAR_1);
    if (VAR_4 == ((void*)0))
        return VAR_0;
    VAR_4->real_fd = VAR_2;
    return FUNC_1(VAR_4, VAR_3);
}
