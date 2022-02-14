
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ mediacodec_mpeg2; scalar_t__ mediacodec_hevc; scalar_t__ mediacodec_avc; scalar_t__ mediacodec_all_videos; } ;
struct TYPE_9__ {TYPE_1__* opaque; } ;
struct TYPE_8__ {int weak_vout; } ;
typedef int IJKFF_Pipenode ;
typedef TYPE_1__ IJKFF_Pipeline_Opaque ;
typedef TYPE_2__ IJKFF_Pipeline ;
typedef TYPE_3__ FFPlayer ;


 int * FUNC_0 (TYPE_3__*,TYPE_2__*,int ) ;

__attribute__((used)) static IJKFF_Pipenode *FUNC_1(IJKFF_Pipeline *VAR_0, FFPlayer *VAR_1)
{
    IJKFF_Pipeline_Opaque *VAR_2 = VAR_0->opaque;
    IJKFF_Pipenode *VAR_3 = ((void*)0);

    if (VAR_1->mediacodec_all_videos || VAR_1->mediacodec_avc || VAR_1->mediacodec_hevc || VAR_1->mediacodec_mpeg2)
        VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2->weak_vout);

    return VAR_3;
}
