
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int overlay_format; } ;
typedef TYPE_1__ FFPlayer ;


 int VAR_0 ;







 int FUNC_0 (TYPE_1__*,int ,char*,int) ;

void FUNC_1(FFPlayer *VAR_1, int VAR_2)
{
    switch (VAR_2) {
        case 128:
        case 134:
        case 129:
        case 132:
        case 131:
        case 130:
            VAR_1->overlay_format = VAR_2;
            break;





        default:
            FUNC_0(VAR_1, VAR_0, "ffp_set_overlay_format: unknown chroma fourcc: %d\n", VAR_2);
            break;
    }
}
