
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int height; int stride; int * bits; } ;
struct TYPE_5__ {scalar_t__ format; int planes; int h; int* pitches; int ** pixels; } ;
typedef TYPE_1__ SDL_VoutOverlay ;
typedef TYPE_2__ ANativeWindow_Buffer ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int const*,int,int,int) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_4(ANativeWindow_Buffer *VAR_1, const SDL_VoutOverlay *VAR_2, int VAR_3)
{

    FUNC_1(VAR_2->format == VAR_0);
    FUNC_1(VAR_2->planes == 1);

    int VAR_4 = FUNC_0(VAR_1->height, VAR_2->h);
    int VAR_5 = VAR_1->stride;
    int VAR_6 = VAR_2->pitches[0];
    int VAR_7 = VAR_5 * VAR_3 / 8;

    uint8_t *VAR_8 = VAR_1->bits;
    const uint8_t *VAR_9 = VAR_2->pixels[0];

    if (VAR_7 == VAR_6) {
        int VAR_10 = VAR_6 * VAR_4;

        FUNC_3(VAR_8, VAR_9, VAR_10);
    } else {

        int VAR_11 = FUNC_0(VAR_7, VAR_6);


        FUNC_2(VAR_8, VAR_7, VAR_9, VAR_6, VAR_11, VAR_4);
    }

    return 0;
}
