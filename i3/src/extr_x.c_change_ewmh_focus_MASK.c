
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xcb_window_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(xcb_window_t VAR_1, xcb_window_t VAR_2) {
    if (VAR_1 == VAR_2) {
        return;
    }

    FUNC_0(VAR_1);

    if (VAR_1 != VAR_0) {
        FUNC_1(VAR_1, 1);
    }

    if (VAR_2 != VAR_0) {
        FUNC_1(VAR_2, 0);
    }
}
