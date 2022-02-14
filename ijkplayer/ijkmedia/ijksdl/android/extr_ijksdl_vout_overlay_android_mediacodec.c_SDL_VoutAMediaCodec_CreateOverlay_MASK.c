
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int w; int h; int is_private; int func_fill_frame; int unref; int unlock; int lock; int (* free_l ) (TYPE_2__*) ;int pixels; int pitches; int format; int * opaque_class; TYPE_1__* opaque; } ;
struct TYPE_6__ {int mutex; int pixels; int pitches; int * buffer_proxy; int * acodec; int * vout; } ;
typedef TYPE_1__ SDL_VoutOverlay_Opaque ;
typedef TYPE_2__ SDL_VoutOverlay ;
typedef int SDL_Vout ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int,int *) ;
 int FUNC_2 () ;
 int VAR_0 ;
 TYPE_2__* FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

SDL_VoutOverlay *FUNC_5(int VAR_6, int VAR_7, SDL_Vout *VAR_8)
{
    FUNC_1("SDL_VoutAMediaCodec_CreateOverlay(w=%d, h=%d, fmt=_AMC vout=%p)\n",
        VAR_6, VAR_7, VAR_8);
    SDL_VoutOverlay *VAR_9 = FUNC_3(sizeof(SDL_VoutOverlay_Opaque));
    if (!VAR_9) {
        FUNC_0("overlay allocation failed");
        return ((void*)0);
    }

    SDL_VoutOverlay_Opaque *VAR_10 = VAR_9->opaque;
    VAR_10->mutex = FUNC_2();
    VAR_10->vout = VAR_8;
    VAR_10->acodec = ((void*)0);
    VAR_10->buffer_proxy = ((void*)0);

    VAR_9->opaque_class = &VAR_2;
    VAR_9->format = VAR_0;
    VAR_9->pitches = VAR_10->pitches;
    VAR_9->pixels = VAR_10->pixels;
    VAR_9->w = VAR_6;
    VAR_9->h = VAR_7;
    VAR_9->is_private = 1;

    VAR_9->free_l = FUNC_4;
    VAR_9->lock = VAR_3;
    VAR_9->unlock = VAR_4;
    VAR_9->unref = VAR_5;
    VAR_9->func_fill_frame = VAR_1;

    if (!VAR_10->mutex) {
        FUNC_0("SDL_CreateMutex failed");
        goto fail;
    }

    return VAR_9;

fail:
    FUNC_4(VAR_9);
    return ((void*)0);
}
