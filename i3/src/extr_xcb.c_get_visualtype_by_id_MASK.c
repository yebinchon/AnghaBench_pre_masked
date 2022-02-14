
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ visual_id; } ;
typedef TYPE_1__ xcb_visualtype_t ;
struct TYPE_10__ {TYPE_1__* data; scalar_t__ rem; } ;
typedef TYPE_2__ xcb_visualtype_iterator_t ;
typedef scalar_t__ xcb_visualid_t ;
struct TYPE_11__ {int data; scalar_t__ rem; } ;
typedef TYPE_3__ xcb_depth_iterator_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_2__ FUNC_1 (int ) ;
 TYPE_3__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

xcb_visualtype_t *FUNC_4(xcb_visualid_t VAR_1) {
    xcb_depth_iterator_t VAR_2;

    VAR_2 = FUNC_2(VAR_0);
    for (; VAR_2.rem; FUNC_0(&VAR_2)) {
        xcb_visualtype_iterator_t VAR_3;

        VAR_3 = FUNC_1(VAR_2.data);
        for (; VAR_3.rem; FUNC_3(&VAR_3)) {
            if (VAR_1 == VAR_3.data->visual_id) {
                return VAR_3.data;
            }
        }
    }
    return 0;
}
