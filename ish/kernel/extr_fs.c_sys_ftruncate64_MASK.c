
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fd {TYPE_2__* mount; } ;
typedef int off_t_ ;
typedef int fd_t ;
typedef int dword_t ;
struct TYPE_4__ {TYPE_1__* fs; } ;
struct TYPE_3__ {int (* fsetattr ) (struct fd*,int ) ;} ;


 int VAR_0 ;
 struct fd* FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct fd*,int ) ;

dword_t FUNC_3(fd_t VAR_1, dword_t VAR_2, dword_t VAR_3) {
    off_t_ VAR_4 = ((off_t_) VAR_3 << 32) | VAR_2;
    struct fd *VAR_5 = FUNC_0(VAR_1);
    if (VAR_5 == ((void*)0))
        return VAR_0;
    return VAR_5->mount->fs->fsetattr(VAR_5, FUNC_1(VAR_4, VAR_4));
}
