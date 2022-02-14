
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int is_hidden; } ;
typedef TYPE_3__ con_state ;
struct TYPE_9__ {int id; } ;
struct TYPE_12__ {TYPE_2__* window; TYPE_1__ frame; } ;
struct TYPE_10__ {int id; } ;
typedef TYPE_4__ Con ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(Con *VAR_3) {
    if (VAR_3->window == ((void*)0)) {
        return;
    }

    con_state *VAR_4 = FUNC_2(VAR_3->frame.id);
    bool VAR_5 = FUNC_1(VAR_3);
    if (VAR_5 == VAR_4->is_hidden)
        return;

    if (VAR_5) {
        FUNC_0("setting _NET_WM_STATE_HIDDEN for con = %p\n", VAR_3);
        FUNC_3(VAR_2, VAR_3->window->id, VAR_0, VAR_1);
    } else {
        FUNC_0("removing _NET_WM_STATE_HIDDEN for con = %p\n", VAR_3);
        FUNC_4(VAR_2, VAR_3->window->id, VAR_0, VAR_1);
    }

    VAR_4->is_hidden = VAR_5;
}
