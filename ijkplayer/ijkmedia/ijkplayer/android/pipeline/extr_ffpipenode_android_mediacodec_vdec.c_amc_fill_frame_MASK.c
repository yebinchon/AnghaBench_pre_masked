
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* video_st; } ;
typedef TYPE_3__ VideoState ;
struct TYPE_20__ {int pts; int sample_aspect_ratio; int format; int height; int width; int opaque; } ;
struct TYPE_19__ {TYPE_3__* is; } ;
struct TYPE_18__ {TYPE_5__* opaque; } ;
struct TYPE_17__ {TYPE_1__* codecpar; int frame_height; int frame_width; int weak_vout; TYPE_7__* ffp; } ;
struct TYPE_16__ {int presentationTimeUs; } ;
struct TYPE_14__ {int time_base; } ;
struct TYPE_13__ {int sample_aspect_ratio; } ;
typedef TYPE_4__ SDL_AMediaCodecBufferInfo ;
typedef TYPE_5__ IJKFF_Pipenode_Opaque ;
typedef TYPE_6__ IJKFF_Pipenode ;
typedef TYPE_7__ FFPlayer ;
typedef TYPE_8__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,TYPE_4__*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(
    IJKFF_Pipenode *VAR_3,
    AVFrame *VAR_4,
    int *VAR_5,
    int VAR_6,
    int VAR_7,
    SDL_AMediaCodecBufferInfo *VAR_8)
{
    IJKFF_Pipenode_Opaque *VAR_9 = VAR_3->opaque;
    FFPlayer *VAR_10 = VAR_9->ffp;
    VideoState *VAR_11 = VAR_10->is;

    VAR_4->opaque = FUNC_0(VAR_9->weak_vout, VAR_7, VAR_6, VAR_8);
    if (!VAR_4->opaque)
        goto fail;

    VAR_4->width = VAR_9->frame_width;
    VAR_4->height = VAR_9->frame_height;
    VAR_4->format = VAR_2;
    VAR_4->sample_aspect_ratio = VAR_9->codecpar->sample_aspect_ratio;
    VAR_4->pts = FUNC_1(VAR_8->presentationTimeUs, VAR_1, VAR_11->video_st->time_base);
    if (VAR_4->pts < 0)
        VAR_4->pts = VAR_0;


    *VAR_5 = 1;
    return 0;
fail:
    *VAR_5 = 0;
    return -1;
}
