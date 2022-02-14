
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdtable {int cloexec; int ** files; } ;
struct fd {int * inode; } ;
typedef size_t fd_t ;


 int VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct fd*) ;
 struct fd* FUNC_2 (struct fdtable*,size_t) ;
 int FUNC_3 (struct fd*,struct fdtable*) ;

__attribute__((used)) static int FUNC_4(struct fdtable *VAR_1, fd_t VAR_2) {
    struct fd *VAR_3 = FUNC_2(VAR_1, VAR_2);
    if (VAR_3 == ((void*)0))
        return VAR_0;
    if (VAR_3->inode != ((void*)0))
        FUNC_3(VAR_3, VAR_1);
    int VAR_4 = FUNC_1(VAR_3);
    VAR_1->files[VAR_2] = ((void*)0);
    FUNC_0(VAR_2, VAR_1->cloexec);
    return VAR_4;
}
