
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int node_vdec; } ;
struct TYPE_9__ {TYPE_1__* opaque; } ;
struct TYPE_8__ {int weak_vout; } ;
typedef TYPE_1__ IJKFF_Pipeline_Opaque ;
typedef TYPE_2__ IJKFF_Pipeline ;
typedef TYPE_3__ FFPlayer ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_1(IJKFF_Pipeline *VAR_0, FFPlayer *VAR_1)
{
    IJKFF_Pipeline_Opaque *VAR_2 = VAR_0->opaque;
    int VAR_3 = ((void*)0);

    if (VAR_1->node_vdec) {
        VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2->weak_vout, VAR_1->node_vdec);
    }

    return VAR_3;
}
