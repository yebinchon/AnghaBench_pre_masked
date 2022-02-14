
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ frame_width; scalar_t__ frame_height; scalar_t__ frame_sar_num; scalar_t__ frame_sar_den; int vertices_changed; scalar_t__ last_buffer_width; scalar_t__ (* func_getBufferWidth ) (TYPE_2__*,TYPE_1__*) ;scalar_t__ buffer_width; scalar_t__ visible_width; int (* func_uploadTexture ) (TYPE_2__*,TYPE_1__*) ;} ;
struct TYPE_14__ {scalar_t__ w; scalar_t__ h; scalar_t__ sar_num; scalar_t__ sar_den; } ;
typedef TYPE_1__ SDL_VoutOverlay ;
typedef TYPE_2__ IJK_GLES2_Renderer ;
typedef scalar_t__ GLsizei ;
typedef scalar_t__ GLfloat ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;

GLboolean FUNC_10(IJK_GLES2_Renderer *VAR_4, SDL_VoutOverlay *VAR_5)
{
    if (!VAR_4 || !VAR_4->func_uploadTexture)
        return VAR_1;

    FUNC_6(VAR_0); FUNC_5("glClear");

    GLsizei VAR_6 = VAR_4->frame_width;
    GLsizei VAR_7 = VAR_4->frame_height;
    if (VAR_5) {
        VAR_6 = VAR_5->w;
        VAR_7 = VAR_5->h;
        if (VAR_4->frame_width != VAR_6 ||
            VAR_4->frame_height != VAR_7 ||
            VAR_4->frame_sar_num != VAR_5->sar_num ||
            VAR_4->frame_sar_den != VAR_5->sar_den) {

            VAR_4->frame_width = VAR_6;
            VAR_4->frame_height = VAR_7;
            VAR_4->frame_sar_num = VAR_5->sar_num;
            VAR_4->frame_sar_den = VAR_5->sar_den;

            VAR_4->vertices_changed = 1;
        }

        VAR_4->last_buffer_width = VAR_4->func_getBufferWidth(VAR_4, VAR_5);

        if (!VAR_4->func_uploadTexture(VAR_4, VAR_5))
            return VAR_1;
    } else {

        VAR_4->vertices_changed = 1;
    }

    GLsizei VAR_8 = VAR_4->last_buffer_width;
    if (VAR_4->vertices_changed ||
        (VAR_8 > 0 &&
         VAR_8 > VAR_6 &&
         VAR_8 != VAR_4->buffer_width &&
         VAR_6 != VAR_4->visible_width)){

        VAR_4->vertices_changed = 0;

        FUNC_3(VAR_4);
        FUNC_4(VAR_4);

        VAR_4->buffer_width = VAR_8;
        VAR_4->visible_width = VAR_6;

        GLsizei VAR_9 = VAR_8 - VAR_6;
        GLfloat VAR_10 = ((GLfloat)VAR_9) / VAR_8;

        FUNC_2(VAR_4);
        FUNC_0(VAR_4, VAR_10);
        FUNC_1(VAR_4);
    }

    FUNC_7(VAR_2, 0, 4); FUNC_5("glDrawArrays");

    return VAR_3;
}
