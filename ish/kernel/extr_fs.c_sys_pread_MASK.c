
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {int lock; TYPE_1__* ops; } ;
typedef int off_t_ ;
typedef scalar_t__ int_t ;
typedef int fd_t ;
typedef scalar_t__ dword_t ;
typedef int addr_t ;
struct TYPE_2__ {scalar_t__ (* lseek ) (struct fd*,int ,int ) ;scalar_t__ (* read ) (struct fd*,char*,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct fd*,int ,int ) ;
 scalar_t__ FUNC_6 (struct fd*,char*,scalar_t__) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,char*,scalar_t__) ;

dword_t FUNC_9(fd_t VAR_4, addr_t VAR_5, dword_t VAR_6, off_t_ VAR_7) {
    FUNC_0("pread(%d, 0x%x, %d, %d)", VAR_4, VAR_5, VAR_6, VAR_7);
    struct fd *VAR_8 = FUNC_1(VAR_4);
    if (VAR_8 == ((void*)0))
        return VAR_1;
    char *VAR_9 = FUNC_4(VAR_6+1);
    if (VAR_9 == ((void*)0))
        return VAR_3;
    FUNC_3(&VAR_8->lock);
    int_t VAR_10 = VAR_8->ops->lseek(VAR_8, VAR_7, VAR_0);
    if (VAR_10 < 0)
        goto out;
    VAR_10 = VAR_8->ops->read(VAR_8, VAR_9, VAR_6);
    if (VAR_10 >= 0) {
        if (FUNC_8(VAR_5, VAR_9, VAR_10))
            VAR_10 = VAR_2;
    }
out:
    FUNC_7(&VAR_8->lock);
    FUNC_2(VAR_9);
    return VAR_10;
}
