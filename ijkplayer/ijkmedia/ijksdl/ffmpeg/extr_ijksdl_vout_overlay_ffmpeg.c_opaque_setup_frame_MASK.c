
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_8__ {int format; int width; int height; int linesize; int data; } ;
struct TYPE_7__ {TYPE_2__* linked_frame; TYPE_2__* managed_frame; } ;
typedef TYPE_1__ SDL_VoutOverlay_Opaque ;
typedef TYPE_2__ AVFrame ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (int ,int ,int *,int,int,int,int) ;

__attribute__((used)) static AVFrame *FUNC_3(SDL_VoutOverlay_Opaque* VAR_0, enum AVPixelFormat VAR_1, int VAR_2, int VAR_3)
{
    AVFrame *VAR_4 = FUNC_0();
    if (!VAR_4) {
        return ((void*)0);
    }

    AVFrame *VAR_5 = FUNC_0();
    if (!VAR_5) {
        FUNC_1(&VAR_4);
        return ((void*)0);
    }
    VAR_4->format = VAR_1;
    VAR_4->width = VAR_2;
    VAR_4->height = VAR_3;
    FUNC_2(VAR_4->data, VAR_4->linesize ,((void*)0),
                         VAR_1, VAR_2, VAR_3, 1);
    VAR_0->managed_frame = VAR_4;
    VAR_0->linked_frame = VAR_5;
    return VAR_4;
}
