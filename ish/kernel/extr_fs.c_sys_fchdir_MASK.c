
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {int refcount; } ;
typedef int fd_t ;
typedef int dword_t ;
struct TYPE_2__ {int fs; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct fd*) ;

dword_t FUNC_3(fd_t VAR_2) {
    FUNC_0("fchdir(%d)", VAR_2);
    struct fd *VAR_3 = FUNC_1(VAR_2);
    if (VAR_3 == ((void*)0))
        return VAR_0;
    VAR_3->refcount++;
    FUNC_2(VAR_1->fs, VAR_3);
    return 0;
}
