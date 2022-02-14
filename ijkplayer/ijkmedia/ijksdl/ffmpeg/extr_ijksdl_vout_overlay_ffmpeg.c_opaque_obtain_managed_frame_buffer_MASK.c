
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int data; } ;
struct TYPE_8__ {int height; int width; int format; int linesize; int data; } ;
struct TYPE_7__ {TYPE_2__* managed_frame; TYPE_3__* frame_buffer; } ;
typedef TYPE_1__ SDL_VoutOverlay_Opaque ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVBufferRef ;


 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static AVFrame *FUNC_3(SDL_VoutOverlay_Opaque* VAR_0)
{
    if (VAR_0->frame_buffer != ((void*)0))
        return VAR_0->managed_frame;

    AVFrame *VAR_1 = VAR_0->managed_frame;
    int VAR_2 = FUNC_2(VAR_1->format, VAR_1->width, VAR_1->height, 1);
    AVBufferRef *VAR_3 = FUNC_0(VAR_2);
    if (!VAR_3)
        return ((void*)0);

    FUNC_1(VAR_1->data, VAR_1->linesize,
                         VAR_3->data, VAR_1->format, VAR_1->width, VAR_1->height, 1);
    VAR_0->frame_buffer = VAR_3;
    return VAR_0->managed_frame;
}
