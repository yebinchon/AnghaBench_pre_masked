
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fdtable {int cloexec; struct fd** files; } ;
struct fd {int dummy; } ;
typedef int int_t ;
typedef size_t fd_t ;
typedef int dword_t ;
struct TYPE_2__ {struct fdtable* files; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,size_t,int) ;
 int VAR_1 ;
 int FUNC_1 (size_t,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (size_t) ;
 struct fd* FUNC_3 (size_t) ;
 int FUNC_4 (struct fd*) ;
 int FUNC_5 (struct fdtable*,size_t) ;

dword_t FUNC_6(fd_t VAR_3, fd_t VAR_4, int_t VAR_5) {
    FUNC_0("dup3(%d, %d, %d)", VAR_3, VAR_4, VAR_5);
    struct fdtable *VAR_6 = VAR_2->files;
    struct fd *VAR_7 = FUNC_3(VAR_3);
    if (VAR_7 == ((void*)0))
        return VAR_1;
    int VAR_8 = FUNC_5(VAR_6, VAR_4);
    if (VAR_8 < 0)
        return VAR_8;
    FUNC_4(VAR_7);
    FUNC_2(VAR_4);
    VAR_6->files[VAR_4] = VAR_7;
    if (VAR_5 & VAR_0)
        FUNC_1(VAR_4, VAR_6->cloexec);
    return VAR_4;
}
