
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_int ;
typedef int u_char ;


 int* VAR_0 ;

__attribute__((used)) static u_short
FUNC_0(u_char *VAR_1, u_int VAR_2)
{
    u_short VAR_3 = 0;
    int VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++, VAR_1++) {

        VAR_5 = VAR_0[VAR_3 & 0xF];
        VAR_3 = (VAR_3 >> 4) & 0x0FFF;
        VAR_3 = VAR_3 ^ VAR_5 ^ VAR_0[*VAR_1 & 0xF];


        VAR_5 = VAR_0[VAR_3 & 0xF];
        VAR_3 = (VAR_3 >> 4) & 0x0FFF;
        VAR_3 = VAR_3 ^ VAR_5 ^ VAR_0[(*VAR_1 >> 4) & 0xF];
    }
    return(VAR_3);
}
