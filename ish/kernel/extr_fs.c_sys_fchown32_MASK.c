
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t_ ;
typedef scalar_t__ uid_t ;
struct fd {TYPE_2__* mount; } ;
typedef int fd_t ;
typedef int dword_t ;
struct TYPE_4__ {TYPE_1__* fs; } ;
struct TYPE_3__ {int (* fsetattr ) (struct fd*,int ) ;} ;


 int VAR_0 ;
 struct fd* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct fd*,int ) ;
 int FUNC_3 (struct fd*,int ) ;
 int VAR_2 ;

dword_t FUNC_4(fd_t VAR_3, uid_t_ VAR_4, uid_t_ VAR_5) {
    struct fd *VAR_6 = FUNC_0(VAR_3);
    if (VAR_6 == ((void*)0))
        return VAR_0;
    int VAR_7;
    if (VAR_4 != (uid_t) -1) {
        VAR_7 = VAR_6->mount->fs->fsetattr(VAR_6, FUNC_1(VAR_2, VAR_4));
        if (VAR_7 < 0)
            return VAR_7;
    }
    if (VAR_5 != (uid_t) -1) {
        VAR_7 = VAR_6->mount->fs->fsetattr(VAR_6, FUNC_1(VAR_1, VAR_5));
        if (VAR_7 < 0)
            return VAR_7;
    }
    return 0;
}
