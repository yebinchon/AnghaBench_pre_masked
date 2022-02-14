
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ audio_codec_info; } ;
typedef TYPE_1__ FFPlayer ;


 char* FUNC_0 (scalar_t__) ;

int FUNC_1(FFPlayer *VAR_0, char **VAR_1)
{
    if (!VAR_1)
        return -1;


    if (VAR_0->audio_codec_info) {
        *VAR_1 = FUNC_0(VAR_0->audio_codec_info);
    } else {
        *VAR_1 = ((void*)0);
    }
    return 0;
}
