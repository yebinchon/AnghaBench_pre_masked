
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ fullscreen_mode_t ;
struct TYPE_7__ {scalar_t__ fullscreen_mode; TYPE_1__* window; } ;
struct TYPE_6__ {int id; } ;
typedef TYPE_2__ Con ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,TYPE_2__*,...) ;
 int VAR_3 ;
 int FUNC_1 (char*,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(Con *VAR_4, fullscreen_mode_t VAR_5) {
    VAR_4->fullscreen_mode = VAR_5;

    FUNC_0("mode now: %d\n", VAR_4->fullscreen_mode);


    FUNC_1("fullscreen_mode", VAR_4);




    if (VAR_4->window == ((void*)0))
        return;

    if (VAR_4->fullscreen_mode != VAR_2) {
        FUNC_0("Setting _NET_WM_STATE_FULLSCREEN for con = %p / window = %d.\n", VAR_4, VAR_4->window->id);
        FUNC_2(VAR_3, VAR_4->window->id, VAR_0, VAR_1);
    } else {
        FUNC_0("Removing _NET_WM_STATE_FULLSCREEN for con = %p / window = %d.\n", VAR_4, VAR_4->window->id);
        FUNC_3(VAR_3, VAR_4->window->id, VAR_0, VAR_1);
    }
}
