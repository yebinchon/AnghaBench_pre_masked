
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * swr_opts; int * player_opts; int * sws_dict; int * codec_opts; int * format_opts; } ;
typedef TYPE_1__ FFPlayer ;
typedef int AVDictionary ;


 int VAR_0 ;





 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int) ;

__attribute__((used)) static AVDictionary **FUNC_2(FFPlayer *VAR_1, int VAR_2)
{
    FUNC_0(VAR_1);

    switch (VAR_2) {
        case 131: return &VAR_1->format_opts;
        case 132: return &VAR_1->codec_opts;
        case 128: return &VAR_1->sws_dict;
        case 130: return &VAR_1->player_opts;
        case 129: return &VAR_1->swr_opts;
        default:
            FUNC_1(VAR_1, VAR_0, "unknown option category %d\n", VAR_2);
            return ((void*)0);
    }
}
