
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int audioq; int audio_st; } ;
typedef TYPE_2__ VideoState ;
struct TYPE_6__ {int audio_cache; } ;
struct TYPE_8__ {TYPE_1__ stat; TYPE_2__* is; } ;
typedef TYPE_3__ FFPlayer ;


 int FUNC_0 (TYPE_3__*,int ,int *,int *) ;

void FUNC_1(FFPlayer *VAR_0)
{
    VideoState *VAR_1 = VAR_0->is;
    FUNC_0(VAR_0, VAR_1->audio_st, &VAR_1->audioq, &VAR_0->stat.audio_cache);
}
