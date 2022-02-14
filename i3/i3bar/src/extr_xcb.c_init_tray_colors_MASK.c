
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {char* bar_fg; } ;
struct TYPE_4__ {TYPE_1__ colors; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int,int,int const*) ;
 int VAR_6 ;

void FUNC_3(void) {

    const char *VAR_7 = (VAR_4.colors.bar_fg ? VAR_4.colors.bar_fg : "#FFFFFF");

    FUNC_0("Setting bar_fg = %s as _NET_SYSTEM_TRAY_COLORS\n", VAR_7);

    char VAR_8[3][3] = {{VAR_7[1], VAR_7[2], '\0'},
                            {VAR_7[3], VAR_7[4], '\0'},
                            {VAR_7[5], VAR_7[6], '\0'}};
    const uint8_t VAR_9 = FUNC_1(VAR_8[0], ((void*)0), 16);
    const uint8_t VAR_10 = FUNC_1(VAR_8[1], ((void*)0), 16);
    const uint8_t VAR_11 = FUNC_1(VAR_8[2], ((void*)0), 16);

    const uint16_t VAR_12 = ((uint16_t)VAR_9 << 8) | VAR_9;
    const uint16_t VAR_13 = ((uint16_t)VAR_10 << 8) | VAR_10;
    const uint16_t VAR_14 = ((uint16_t)VAR_11 << 8) | VAR_11;

    const uint32_t VAR_15[12] = {
        VAR_12, VAR_13, VAR_14,
        VAR_12, VAR_13, VAR_14,
        VAR_12, VAR_13, VAR_14,
        VAR_12, VAR_13, VAR_14,
    };

    FUNC_2(VAR_6,
                        VAR_1,
                        VAR_5,
                        VAR_3[VAR_2],
                        VAR_0,
                        32,
                        12,
                        VAR_15);
}
