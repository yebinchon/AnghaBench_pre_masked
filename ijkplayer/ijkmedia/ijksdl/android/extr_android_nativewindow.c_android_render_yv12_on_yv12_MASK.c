
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
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,int const*,int,int,int) ;
 int FUNC_4 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_5(ANativeWindow_Buffer *VAR_1, const SDL_VoutOverlay *VAR_2)
{

    FUNC_2(VAR_2->format == VAR_0);
    FUNC_2(VAR_2->planes == 3);

    int VAR_3 = FUNC_1(VAR_1->height, VAR_2->h);
    int VAR_4 = VAR_1->stride;
    int VAR_5 = FUNC_0(VAR_1->stride / 2, 16);
    int VAR_6 = VAR_4 * VAR_1->height;
    int VAR_7 = VAR_5 * VAR_1->height / 2;



    uint8_t *VAR_8[] = {
        VAR_1->bits,
        VAR_1->bits + VAR_6,
        VAR_1->bits + VAR_6 + VAR_7,
    };
    int VAR_9[] = { VAR_3, VAR_3 / 2, VAR_3 / 2 };
    int VAR_10[] = { VAR_4, VAR_5, VAR_5 };

    for (int VAR_11 = 0; VAR_11 < 3; ++VAR_11) {
        int VAR_12 = VAR_10[VAR_11];
        int VAR_13 = VAR_2->pitches[VAR_11];
        int VAR_14 = VAR_9[VAR_11];
        uint8_t *VAR_15 = VAR_8[VAR_11];
        const uint8_t *VAR_16 = VAR_2->pixels[VAR_11];

        if (VAR_12 == VAR_13) {
            int VAR_17 = VAR_13 * VAR_14;


            FUNC_4(VAR_15, VAR_16, VAR_17);
        } else {

            int VAR_18 = FUNC_1(VAR_12, VAR_13);


            FUNC_3(VAR_15, VAR_12, VAR_16, VAR_13, VAR_18, VAR_14);
        }
    }

    return 0;
}
