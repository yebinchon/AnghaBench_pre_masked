
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ focus; } ;
struct TYPE_10__ {TYPE_5__* currentCursor; TYPE_1__ decorations; } ;
struct TYPE_12__ {TYPE_2__ wl; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_14__ {int currentImage; TYPE_3__* cursor; } ;
struct TYPE_13__ {TYPE_7__ wl; } ;
typedef TYPE_5__ _GLFWcursor ;
struct TYPE_11__ {int image_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_7__*) ;

__attribute__((used)) static void FUNC_1(_GLFWwindow* VAR_1)
{
    _GLFWcursor* VAR_2;

    if (!VAR_1 || VAR_1->wl.decorations.focus != VAR_0)
        return;

    VAR_2 = VAR_1->wl.currentCursor;
    if (VAR_2 && VAR_2->wl.cursor)
    {
        VAR_2->wl.currentImage += 1;
        VAR_2->wl.currentImage %= VAR_2->wl.cursor->image_count;
        FUNC_0(VAR_1, &VAR_2->wl);
    }
}
