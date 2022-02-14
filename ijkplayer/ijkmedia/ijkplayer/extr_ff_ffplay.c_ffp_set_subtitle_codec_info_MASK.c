
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int subtitle_codec_info; } ;
typedef TYPE_1__ FFPlayer ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ) ;

void FUNC_3(FFPlayer *VAR_1, const char *VAR_2, const char *VAR_3)
{
    FUNC_1(&VAR_1->subtitle_codec_info);
    VAR_1->subtitle_codec_info = FUNC_0("%s, %s", VAR_2 ? VAR_2 : "", VAR_3 ? VAR_3 : "");
    FUNC_2(VAR_1, VAR_0, "SubtitleCodec: %s\n", VAR_1->subtitle_codec_info);
}
