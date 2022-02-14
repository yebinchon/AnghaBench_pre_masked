
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fdtable {unsigned int size; int cloexec; struct fd** files; } ;
struct fd {int dummy; } ;
typedef scalar_t__ fd_t ;
struct TYPE_2__ {struct fdtable* files; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct fd*) ;
 int FUNC_3 (struct fdtable*,scalar_t__) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static fd_t FUNC_5(struct fd *VAR_2, fd_t VAR_3) {
    FUNC_0(VAR_3 >= 0);
    struct fdtable *VAR_4 = VAR_1->files;
    unsigned VAR_5 = FUNC_4(VAR_0);
    if (VAR_5 > VAR_4->size)
        VAR_5 = VAR_4->size;

    fd_t VAR_6;
    for (VAR_6 = VAR_3; (unsigned) VAR_6 < VAR_5; VAR_6++)
        if (VAR_4->files[VAR_6] == ((void*)0))
            break;
    if ((unsigned) VAR_6 >= VAR_5) {
        int VAR_7 = FUNC_3(VAR_4, VAR_6);
        if (VAR_7 < 0)
            VAR_6 = VAR_7;
    }

    if (VAR_6 >= 0) {
        VAR_4->files[VAR_6] = VAR_2;
        FUNC_1(VAR_6, VAR_4->cloexec);
    } else {
        FUNC_2(VAR_2);
    }
    return VAR_6;
}
