
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* func_fill_frame ) (TYPE_1__*,int const*) ;} ;
typedef TYPE_1__ SDL_VoutOverlay ;
typedef int AVFrame ;


 int FUNC_0 (TYPE_1__*,int const*) ;

int FUNC_1(SDL_VoutOverlay *VAR_0, const AVFrame *VAR_1)
{
    if (!VAR_0 || !VAR_0->func_fill_frame)
        return -1;

    return VAR_0->func_fill_frame(VAR_0, VAR_1);
}
