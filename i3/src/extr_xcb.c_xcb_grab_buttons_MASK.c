
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_window_t ;
typedef int xcb_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int,int ,int ,int ,int ,int ,int ,int,int ) ;

void FUNC_1(xcb_connection_t *VAR_6, xcb_window_t VAR_7, int *VAR_8) {
    int VAR_9 = 0;
    while (VAR_8[VAR_9] > 0) {
        FUNC_0(VAR_6, 0, VAR_7, VAR_1, VAR_3,
                        VAR_2, VAR_5, VAR_4, VAR_8[VAR_9], VAR_0);

        VAR_9++;
    }
}
