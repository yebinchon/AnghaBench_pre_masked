
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int format; } ;
typedef TYPE_1__ SDL_VoutOverlay ;
typedef TYPE_1__ const ANativeWindow_Buffer ;



 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_2(ANativeWindow_Buffer *VAR_0, const SDL_VoutOverlay *VAR_1)
{
    FUNC_1(VAR_0);
    FUNC_1(VAR_1);

    switch (VAR_1->format) {
    case 128: {
        return FUNC_0(VAR_0, VAR_1);
    }
    }

    return -1;
}
