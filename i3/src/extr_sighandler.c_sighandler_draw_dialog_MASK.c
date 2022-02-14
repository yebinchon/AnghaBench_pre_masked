
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; scalar_t__ height; } ;
struct TYPE_8__ {int surface; TYPE_1__ dims; } ;
typedef TYPE_3__ dialog_t ;
typedef int color_t ;
struct TYPE_7__ {scalar_t__ height; } ;
struct TYPE_9__ {TYPE_2__ font; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_0 (int *,int const) ;
 int const FUNC_1 (char*) ;
 int FUNC_2 (int *,int const,int,int,int,scalar_t__) ;
 int FUNC_3 (int ,int *,int const,int const,int const,int,int const) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_4(dialog_t *VAR_9) {
    const color_t VAR_10 = FUNC_1("#000000");
    const color_t VAR_11 = FUNC_1("#FFFFFF");
    const color_t VAR_12 = FUNC_1("#FF0000");


    FUNC_0(&(VAR_9->surface), VAR_12);
    FUNC_2(&(VAR_9->surface), VAR_10, VAR_1, VAR_1,
                        VAR_9->dims.width - 2 * VAR_1, VAR_9->dims.height - 2 * VAR_1);

    int VAR_13 = VAR_1 + VAR_3;
    const int VAR_14 = VAR_1 + VAR_3;
    const int VAR_15 = VAR_9->dims.width - 2 * VAR_14;

    FUNC_3(VAR_4, &(VAR_9->surface), VAR_11, VAR_10, VAR_14, VAR_13, VAR_15);
    VAR_13 += VAR_2.font.height;

    FUNC_3(VAR_5, &(VAR_9->surface), VAR_11, VAR_10, VAR_14, VAR_13, VAR_15);
    VAR_13 += VAR_2.font.height;

    char *VAR_16 = "#FFFFFF";
    if (VAR_0 < 0) {
        VAR_16 = "#AA0000";
    } else if (VAR_0 > 0) {
        VAR_16 = "#00AA00";
    }
    FUNC_3(VAR_6, &(VAR_9->surface), FUNC_1(VAR_16), VAR_10, VAR_14, VAR_13, VAR_15);
    VAR_13 += VAR_2.font.height;

    FUNC_3(VAR_8, &(VAR_9->surface), VAR_11, VAR_10, VAR_14, VAR_13, VAR_15);
    VAR_13 += VAR_2.font.height;

    FUNC_3(VAR_7, &(VAR_9->surface), VAR_11, VAR_10, VAR_14, VAR_13, VAR_15);
    VAR_13 += VAR_2.font.height;
}
