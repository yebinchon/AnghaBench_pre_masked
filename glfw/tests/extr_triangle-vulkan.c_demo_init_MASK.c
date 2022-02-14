
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demo {scalar_t__ frameCount; int use_staging_buffer; int use_break; int validate; int width; int height; double depthStencil; float depthIncrement; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct demo*) ;
 int FUNC_1 (struct demo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (struct demo*,int ,int) ;
 int FUNC_6 (char const*,char*,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static void FUNC_8(struct demo *VAR_3, const int VAR_4, const char *VAR_5[])
{
    int VAR_6;
    FUNC_5(VAR_3, 0, sizeof(*VAR_3));
    VAR_3->frameCount = VAR_1;

    for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++) {
        if (FUNC_7(VAR_5[VAR_6], "--use_staging") == 0) {
            VAR_3->use_staging_buffer = 1;
            continue;
        }
        if (FUNC_7(VAR_5[VAR_6], "--break") == 0) {
            VAR_3->use_break = 1;
            continue;
        }
        if (FUNC_7(VAR_5[VAR_6], "--validate") == 0) {
            VAR_3->validate = 1;
            continue;
        }
        if (FUNC_7(VAR_5[VAR_6], "--c") == 0 && VAR_3->frameCount == VAR_1 &&
            VAR_6 < VAR_4 - 1 && FUNC_6(VAR_5[VAR_6 + 1], "%d", &VAR_3->frameCount) == 1 &&
            VAR_3->frameCount >= 0) {
            VAR_6++;
            continue;
        }

        FUNC_4(VAR_2, "Usage:\n  %s [--use_staging] [--validate] [--break] "
                        "[--c <framecount>]\n",
                VAR_0);
        FUNC_3(VAR_2);
        FUNC_2(1);
    }

    FUNC_0(VAR_3);
    FUNC_1(VAR_3);

    VAR_3->width = 300;
    VAR_3->height = 300;
    VAR_3->depthStencil = 1.0;
    VAR_3->depthIncrement = -0.01f;
}
