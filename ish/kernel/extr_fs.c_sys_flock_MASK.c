
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fd {TYPE_2__* mount; } ;
typedef int fd_t ;
typedef int dword_t ;
struct TYPE_4__ {TYPE_1__* fs; } ;
struct TYPE_3__ {int (* flock ) (struct fd*,int ) ;} ;


 int VAR_0 ;
 struct fd* FUNC_0 (int ) ;
 int FUNC_1 (struct fd*,int ) ;

dword_t FUNC_2(fd_t VAR_1, dword_t VAR_2) {
    struct fd *VAR_3 = FUNC_0(VAR_1);
    if (VAR_3 == ((void*)0))
        return VAR_0;
    return VAR_3->mount->fs->flock(VAR_3, VAR_2);
}
