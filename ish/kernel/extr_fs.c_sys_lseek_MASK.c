
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {int lock; TYPE_1__* ops; } ;
typedef scalar_t__ off_t ;
typedef int fd_t ;
typedef scalar_t__ dword_t ;
struct TYPE_2__ {scalar_t__ (* lseek ) (struct fd*,scalar_t__,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct fd* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct fd*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;

dword_t FUNC_4(fd_t VAR_3, dword_t VAR_4, dword_t VAR_5) {
    struct fd *VAR_6 = FUNC_0(VAR_3);
    if (VAR_6 == ((void*)0))
        return VAR_0;
    if (!VAR_6->ops->lseek)
        return VAR_2;
    FUNC_1(&VAR_6->lock);
    off_t VAR_7 = VAR_6->ops->lseek(VAR_6, VAR_4, VAR_5);
    FUNC_3(&VAR_6->lock);
    if ((dword_t) VAR_7 != VAR_7)
        return VAR_1;
    return VAR_7;
}
