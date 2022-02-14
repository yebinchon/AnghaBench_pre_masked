
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int * ops; } ;
typedef int fd_t ;


 struct fd* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static struct fd *FUNC_1(fd_t VAR_1) {
    struct fd *VAR_2 = FUNC_0(VAR_1);
    if (VAR_2 == ((void*)0) || VAR_2->ops != &VAR_0)
        return ((void*)0);
    return VAR_2;
}
