
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_window_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

void FUNC_3(xcb_window_t VAR_3, bool VAR_4) {
    if (VAR_4) {
        FUNC_0("Setting _NET_WM_STATE_STICKY for window = %d.\n", VAR_3);
        FUNC_1(VAR_2, VAR_3, VAR_0, VAR_1);
    } else {
        FUNC_0("Removing _NET_WM_STATE_STICKY for window = %d.\n", VAR_3);
        FUNC_2(VAR_2, VAR_3, VAR_0, VAR_1);
    }
}
