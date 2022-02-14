
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int window; } ;
typedef TYPE_2__ xcb_expose_event_t ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_8__ {TYPE_1__ rect; int frame; int frame_buffer; } ;
typedef TYPE_3__ Con ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(xcb_expose_event_t *VAR_1) {
    Con *VAR_2;

    FUNC_0("window = %08x\n", VAR_1->window);

    if ((VAR_2 = FUNC_2(VAR_1->window)) == ((void*)0)) {
        FUNC_1("expose event for unknown window, ignoring\n");
        return;
    }



    FUNC_3(&(VAR_2->frame_buffer), &(VAR_2->frame),
                           0, 0, 0, 0, VAR_2->rect.width, VAR_2->rect.height);
    FUNC_4(VAR_0);
}
