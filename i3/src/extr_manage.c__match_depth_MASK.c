
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xcb_window_t ;
struct TYPE_8__ {scalar_t__ depth; } ;
typedef TYPE_2__ i3Window ;
struct TYPE_7__ {int id; } ;
struct TYPE_9__ {scalar_t__ depth; TYPE_1__ frame; } ;
typedef TYPE_3__ Con ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static xcb_window_t FUNC_1(i3Window *VAR_1, Con *VAR_2) {
    xcb_window_t VAR_3 = VAR_0;
    if (VAR_2->depth != VAR_1->depth) {
        VAR_3 = VAR_2->frame.id;
        VAR_2->depth = VAR_1->depth;
        FUNC_0(VAR_2);
    }
    return VAR_3;
}
