
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {int lock; TYPE_1__* ops; } ;
typedef int off_t_ ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;
struct TYPE_2__ {int (* lseek ) (struct fd*,int,int) ;} ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fd*,int,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int) ;

dword_t FUNC_6(fd_t VAR_3, dword_t VAR_4, dword_t VAR_5, addr_t VAR_6, dword_t VAR_7) {
    struct fd *VAR_8 = FUNC_1(VAR_3);
    if (VAR_8 == ((void*)0))
        return VAR_0;
    if (!VAR_8->ops->lseek)
        return VAR_2;
    FUNC_2(&VAR_8->lock);
    off_t_ VAR_9 = ((off_t_) VAR_4 << 32) | VAR_5;
    FUNC_0("llseek(%d, %lu, %#x, %d)", VAR_3, VAR_9, VAR_6, VAR_7);
    off_t_ VAR_10 = VAR_8->ops->lseek(VAR_8, VAR_9, VAR_7);
    FUNC_0(" -> %lu", VAR_10);
    FUNC_4(&VAR_8->lock);
    if (VAR_10 < 0)
        return VAR_10;
    if (FUNC_5(VAR_6, VAR_10))
        return VAR_1;
    return 0;
}
