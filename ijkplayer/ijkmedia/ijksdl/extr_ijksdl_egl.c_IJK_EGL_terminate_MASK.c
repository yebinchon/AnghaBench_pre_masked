
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ display; scalar_t__ surface; scalar_t__ context; TYPE_1__* opaque; } ;
struct TYPE_5__ {int renderer; } ;
typedef TYPE_2__ IJK_EGL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(IJK_EGL* VAR_3)
{
    if (!FUNC_0(VAR_3))
        return;

    if (VAR_3->opaque)
        FUNC_1(&VAR_3->opaque->renderer);

    if (VAR_3->display) {
        FUNC_4(VAR_3->display, VAR_2, VAR_2, VAR_0);
        if (VAR_3->context)
            FUNC_2(VAR_3->display, VAR_3->context);
        if (VAR_3->surface)
            FUNC_3(VAR_3->display, VAR_3->surface);
        FUNC_6(VAR_3->display);
        FUNC_5();
    }

    VAR_3->context = VAR_0;
    VAR_3->surface = VAR_2;
    VAR_3->display = VAR_1;
}
