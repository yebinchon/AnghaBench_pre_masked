
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {TYPE_1__* ops; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ dword_t ;
struct TYPE_2__ {scalar_t__ (* ioctl_size ) (scalar_t__) ;int (* ioctl ) (struct fd*,scalar_t__,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct fd*,scalar_t__,void*) ;
 int FUNC_2 (struct fd*,scalar_t__,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct fd *VAR_2, dword_t VAR_3, dword_t VAR_4) {
    ssize_t VAR_5 = -1;
    if (VAR_2->ops->ioctl_size)
        VAR_5 = VAR_2->ops->ioctl_size(VAR_3);
    if (VAR_5 < 0)
        return VAR_1;
    if (VAR_5 == 0)
        return VAR_2->ops->ioctl(VAR_2, VAR_3, (void *) (long) VAR_4);


    char VAR_6[VAR_5];
    if (FUNC_3(VAR_4, VAR_6, VAR_5))
        return VAR_0;
    int VAR_7 = VAR_2->ops->ioctl(VAR_2, VAR_3, VAR_6);
    if (VAR_7 < 0)
        return VAR_7;
    if (FUNC_4(VAR_4, VAR_6, VAR_5))
        return VAR_0;
    return VAR_7;
}
