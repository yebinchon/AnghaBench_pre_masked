
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef double int64_t ;
struct TYPE_10__ {TYPE_1__* video_st; } ;
typedef TYPE_2__ VideoState ;
struct TYPE_14__ {TYPE_2__* is; } ;
struct TYPE_13__ {TYPE_4__* opaque; } ;
struct TYPE_12__ {TYPE_6__* ffp; } ;
struct TYPE_11__ {int presentationTimeUs; } ;
struct TYPE_9__ {int time_base; } ;
typedef TYPE_3__ SDL_AMediaCodecBufferInfo ;
typedef TYPE_4__ IJKFF_Pipenode_Opaque ;
typedef TYPE_5__ IJKFF_Pipenode ;
typedef TYPE_6__ FFPlayer ;
typedef int AVRational ;


 int VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (int ) ;
 double FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static double FUNC_2(IJKFF_Pipenode *VAR_2, SDL_AMediaCodecBufferInfo *VAR_3)
{
    IJKFF_Pipenode_Opaque *VAR_4 = VAR_2->opaque;
    FFPlayer *VAR_5 = VAR_4->ffp;
    VideoState *VAR_6 = VAR_5->is;
    AVRational VAR_7 = VAR_6->video_st->time_base;
    int64_t VAR_8 = FUNC_1(VAR_3->presentationTimeUs, VAR_0, VAR_6->video_st->time_base);
    double VAR_9 = VAR_8 < 0 ? VAR_1 : VAR_8 * FUNC_0(VAR_7);

    return VAR_9;
}
