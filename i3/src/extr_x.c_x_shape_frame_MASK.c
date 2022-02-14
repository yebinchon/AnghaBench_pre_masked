
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xcb_shape_sk_t ;
typedef int xcb_rectangle_t ;
struct TYPE_10__ {int id; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_8__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {TYPE_1__ frame; TYPE_6__* window; scalar_t__ border_width; TYPE_2__ window_rect; } ;
typedef TYPE_3__ Con ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 int VAR_3 ;
 size_t FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,size_t,int *) ;

__attribute__((used)) static void FUNC_4(Con *VAR_4, xcb_shape_sk_t VAR_5) {
    FUNC_0(VAR_4->window);

    FUNC_2(VAR_3, VAR_1, VAR_5, VAR_5,
                      VAR_4->frame.id,
                      VAR_4->window_rect.x + VAR_4->border_width,
                      VAR_4->window_rect.y + VAR_4->border_width,
                      VAR_4->window->id);
    xcb_rectangle_t VAR_6[4];
    size_t VAR_7 = FUNC_1(VAR_4, VAR_6);
    if (VAR_7) {
        FUNC_3(VAR_3, VAR_2, VAR_5,
                             VAR_0, VAR_4->frame.id,
                             0, 0, VAR_7, VAR_6);
    }
}
