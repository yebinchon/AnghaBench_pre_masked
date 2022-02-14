
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int real_fd; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,void const*,size_t) ;

ssize_t FUNC_2(struct fd *VAR_0, const void *VAR_1, size_t VAR_2) {
    ssize_t VAR_3 = FUNC_1(VAR_0->real_fd, VAR_1, VAR_2);
    if (VAR_3 < 0)
        return FUNC_0();
    return VAR_3;
}
