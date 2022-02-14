
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int func_open_audio_output; int func_open_video_decoder; int func_destroy; TYPE_1__* opaque; } ;
struct TYPE_5__ {int * ffp; } ;
typedef TYPE_1__ IJKFF_Pipeline_Opaque ;
typedef TYPE_2__ IJKFF_Pipeline ;
typedef int FFPlayer ;


 TYPE_2__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

IJKFF_Pipeline *FUNC_1(FFPlayer *VAR_4)
{
    IJKFF_Pipeline *VAR_5 = FUNC_0(&VAR_3, sizeof(IJKFF_Pipeline_Opaque));
    if (!VAR_5)
        return VAR_5;

    IJKFF_Pipeline_Opaque *VAR_6 = VAR_5->opaque;
    VAR_6->ffp = VAR_4;
    VAR_5->func_destroy = VAR_0;
    VAR_5->func_open_video_decoder = VAR_2;
    VAR_5->func_open_audio_output = VAR_1;

    return VAR_5;
}
