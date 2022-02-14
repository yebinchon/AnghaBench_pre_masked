
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* data; int rem; } ;
typedef TYPE_2__ xcb_visualtype_iterator_t ;
typedef int xcb_visualid_t ;
struct TYPE_10__ {TYPE_6__* data; scalar_t__ rem; } ;
typedef TYPE_3__ xcb_depth_iterator_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_11__ {scalar_t__ depth; } ;
struct TYPE_8__ {int visual_id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_2__ FUNC_1 (TYPE_6__*) ;
 TYPE_3__ FUNC_2 (int ) ;

xcb_visualid_t FUNC_3(uint16_t VAR_1) {
    xcb_depth_iterator_t VAR_2;

    VAR_2 = FUNC_2(VAR_0);
    for (; VAR_2.rem; FUNC_0(&VAR_2)) {
        if (VAR_2.data->depth != VAR_1)
            continue;

        xcb_visualtype_iterator_t VAR_3;

        VAR_3 = FUNC_1(VAR_2.data);
        if (!VAR_3.rem)
            continue;
        return VAR_3.data->visual_id;
    }
    return 0;
}
