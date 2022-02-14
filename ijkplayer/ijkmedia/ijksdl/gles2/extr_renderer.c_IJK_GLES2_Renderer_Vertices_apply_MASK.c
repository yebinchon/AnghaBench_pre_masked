
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int gravity; scalar_t__ layer_width; scalar_t__ layer_height; float frame_width; float frame_height; float frame_sar_num; float frame_sar_den; float* vertices; } ;
typedef TYPE_1__ IJK_GLES2_Renderer ;


 int FUNC_0 (char*,...) ;
 float FUNC_1 (float const,float const) ;
 float FUNC_2 (float const,float const) ;



 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(IJK_GLES2_Renderer *VAR_0)
{
    switch (VAR_0->gravity) {
        case 129:
            break;
        case 128:
            break;
        case 130:
            FUNC_3(VAR_0);
            return;
        default:
            FUNC_0("[GLES2] unknown gravity %d\n", VAR_0->gravity);
            FUNC_3(VAR_0);
            return;
    }

    if (VAR_0->layer_width <= 0 ||
        VAR_0->layer_height <= 0 ||
        VAR_0->frame_width <= 0 ||
        VAR_0->frame_height <= 0)
    {
        FUNC_0("[GLES2] invalid width/height for gravity aspect\n");
        FUNC_3(VAR_0);
        return;
    }

    float VAR_1 = VAR_0->frame_width;
    float VAR_2 = VAR_0->frame_height;

    if (VAR_0->frame_sar_num > 0 && VAR_0->frame_sar_den > 0) {
        VAR_1 = VAR_1 * VAR_0->frame_sar_num / VAR_0->frame_sar_den;
    }

    const float VAR_3 = (float)VAR_0->layer_width / VAR_1;
    const float VAR_4 = (float)VAR_0->layer_height / VAR_2;
    float VAR_5 = 1.0f;
    float VAR_6 = 1.0f;
    float VAR_7 = 1.0f;

    switch (VAR_0->gravity) {
        case 128: VAR_5 = FUNC_1(VAR_3, VAR_4); break;
        case 129: VAR_5 = FUNC_2(VAR_3, VAR_4); break;
    }

    VAR_6 = (VAR_1 * VAR_5 / (float)VAR_0->layer_width);
    VAR_7 = (VAR_2 * VAR_5 / (float)VAR_0->layer_height);

    VAR_0->vertices[0] = - VAR_6;
    VAR_0->vertices[1] = - VAR_7;
    VAR_0->vertices[2] = VAR_6;
    VAR_0->vertices[3] = - VAR_7;
    VAR_0->vertices[4] = - VAR_6;
    VAR_0->vertices[5] = VAR_7;
    VAR_0->vertices[6] = VAR_6;
    VAR_0->vertices[7] = VAR_7;
}
