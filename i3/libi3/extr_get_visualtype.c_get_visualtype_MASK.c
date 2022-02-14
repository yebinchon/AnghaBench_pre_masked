
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ visual_id; } ;
typedef TYPE_1__ xcb_visualtype_t ;
struct TYPE_13__ {TYPE_1__* data; scalar_t__ rem; } ;
typedef TYPE_2__ xcb_visualtype_iterator_t ;
struct TYPE_14__ {scalar_t__ root_visual; } ;
typedef TYPE_3__ xcb_screen_t ;
struct TYPE_15__ {int data; scalar_t__ rem; } ;
typedef TYPE_4__ xcb_depth_iterator_t ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_2__ FUNC_1 (int ) ;
 TYPE_4__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;

xcb_visualtype_t *FUNC_4(xcb_screen_t *VAR_0) {
    xcb_depth_iterator_t VAR_1;
    for (VAR_1 = FUNC_2(VAR_0);
         VAR_1.rem;
         FUNC_0(&VAR_1)) {
        xcb_visualtype_iterator_t VAR_2;
        for (VAR_2 = FUNC_1(VAR_1.data);
             VAR_2.rem;
             FUNC_3(&VAR_2)) {
            if (VAR_0->root_visual == VAR_2.data->visual_id)
                return VAR_2.data;
        }
    }
    return ((void*)0);
}
