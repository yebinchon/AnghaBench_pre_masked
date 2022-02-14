
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int func_config_video_decoder; int func_init_video_decoder; int func_open_audio_output; int func_open_video_decoder; int func_destroy; TYPE_1__* opaque; } ;
struct TYPE_6__ {float left_volume; float right_volume; int surface_mutex; int * ffp; } ;
typedef TYPE_1__ IJKFF_Pipeline_Opaque ;
typedef TYPE_2__ IJKFF_Pipeline ;
typedef int FFPlayer ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

IJKFF_Pipeline *FUNC_5(FFPlayer *VAR_6)
{
    FUNC_0("ffpipeline_create_from_android()\n");
    IJKFF_Pipeline *VAR_7 = FUNC_3(&VAR_5, sizeof(IJKFF_Pipeline_Opaque));
    if (!VAR_7)
        return VAR_7;

    IJKFF_Pipeline_Opaque *VAR_8 = VAR_7->opaque;
    VAR_8->ffp = VAR_6;
    VAR_8->surface_mutex = FUNC_2();
    VAR_8->left_volume = 1.0f;
    VAR_8->right_volume = 1.0f;
    if (!VAR_8->surface_mutex) {
        FUNC_1("ffpipeline-android:create SDL_CreateMutex failed\n");
        goto fail;
    }

    VAR_7->func_destroy = VAR_1;
    VAR_7->func_open_video_decoder = VAR_4;
    VAR_7->func_open_audio_output = VAR_3;
    VAR_7->func_init_video_decoder = VAR_2;
    VAR_7->func_config_video_decoder = VAR_0;

    return VAR_7;
fail:
    FUNC_4(&VAR_7);
    return ((void*)0);
}
