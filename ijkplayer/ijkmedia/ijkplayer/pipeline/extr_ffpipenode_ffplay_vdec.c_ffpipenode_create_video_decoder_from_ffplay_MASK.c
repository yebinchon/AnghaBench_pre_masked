
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int vdec_type; } ;
struct TYPE_18__ {TYPE_3__ stat; TYPE_2__* is; } ;
struct TYPE_17__ {int func_run_sync; int func_destroy; TYPE_5__* opaque; } ;
struct TYPE_16__ {TYPE_7__* ffp; } ;
struct TYPE_15__ {int codec_id; } ;
struct TYPE_12__ {TYPE_4__* avctx; } ;
struct TYPE_13__ {TYPE_1__ viddec; } ;
typedef TYPE_5__ IJKFF_Pipenode_Opaque ;
typedef TYPE_6__ IJKFF_Pipenode ;
typedef TYPE_7__ FFPlayer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*,int ,int ) ;
 TYPE_6__* FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;

IJKFF_Pipenode *FUNC_3(FFPlayer *VAR_4)
{
    IJKFF_Pipenode *VAR_5 = FUNC_2(sizeof(IJKFF_Pipenode_Opaque));
    if (!VAR_5)
        return VAR_5;

    IJKFF_Pipenode_Opaque *VAR_6 = VAR_5->opaque;
    VAR_6->ffp = VAR_4;

    VAR_5->func_destroy = VAR_2;
    VAR_5->func_run_sync = VAR_3;

    FUNC_1(VAR_4, VAR_0, FUNC_0(VAR_4->is->viddec.avctx->codec_id));
    VAR_4->stat.vdec_type = VAR_1;
    return VAR_5;
}
