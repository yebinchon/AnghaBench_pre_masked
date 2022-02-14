
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int vdec_type; } ;
struct TYPE_13__ {TYPE_1__ stat; scalar_t__ videotoolbox; } ;
struct TYPE_12__ {TYPE_2__* opaque; } ;
struct TYPE_11__ {int is_videotoolbox_open; } ;
typedef int IJKFF_Pipenode ;
typedef TYPE_2__ IJKFF_Pipeline_Opaque ;
typedef TYPE_3__ IJKFF_Pipeline ;
typedef TYPE_4__ FFPlayer ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int * FUNC_2 (TYPE_4__*) ;
 int * FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static IJKFF_Pipenode *FUNC_4(IJKFF_Pipeline *VAR_3, FFPlayer *VAR_4)
{
    IJKFF_Pipenode* VAR_5 = ((void*)0);
    IJKFF_Pipeline_Opaque *VAR_6 = VAR_3->opaque;
    if (VAR_4->videotoolbox) {
        VAR_5 = FUNC_3(VAR_4);
        if (!VAR_5)
            FUNC_0("vtb fail!!! switch to ffmpeg decode!!!! \n");
    }
    if (VAR_5 == ((void*)0)) {
        VAR_5 = FUNC_2(VAR_4);
        VAR_4->stat.vdec_type = VAR_1;
        VAR_6->is_videotoolbox_open = 0;
    } else {
        VAR_4->stat.vdec_type = VAR_2;
        VAR_6->is_videotoolbox_open = 1;
    }
    FUNC_1(VAR_4, VAR_0, VAR_6->is_videotoolbox_open);
    return VAR_5;
}
