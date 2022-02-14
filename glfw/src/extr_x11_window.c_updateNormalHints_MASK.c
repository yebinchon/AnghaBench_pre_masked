
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int handle; } ;
struct TYPE_16__ {scalar_t__ minwidth; scalar_t__ minheight; scalar_t__ maxwidth; scalar_t__ maxheight; scalar_t__ numer; scalar_t__ denom; TYPE_4__ x11; scalar_t__ resizable; int monitor; } ;
typedef TYPE_5__ _GLFWwindow ;
struct TYPE_13__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_12__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_17__ {int flags; int min_width; int min_height; int max_width; int max_height; int win_gravity; TYPE_2__ max_aspect; TYPE_1__ min_aspect; } ;
typedef TYPE_6__ XSizeHints ;
struct TYPE_14__ {int display; } ;
struct TYPE_18__ {TYPE_3__ x11; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_0 () ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,int ,TYPE_6__*) ;
 TYPE_8__ VAR_6 ;

__attribute__((used)) static void FUNC_3(_GLFWwindow* VAR_7, int VAR_8, int VAR_9)
{
    XSizeHints* VAR_10 = FUNC_0();

    if (!VAR_7->monitor)
    {
        if (VAR_7->resizable)
        {
            if (VAR_7->minwidth != VAR_0 &&
                VAR_7->minheight != VAR_0)
            {
                VAR_10->flags |= VAR_3;
                VAR_10->min_width = VAR_7->minwidth;
                VAR_10->min_height = VAR_7->minheight;
            }

            if (VAR_7->maxwidth != VAR_0 &&
                VAR_7->maxheight != VAR_0)
            {
                VAR_10->flags |= VAR_2;
                VAR_10->max_width = VAR_7->maxwidth;
                VAR_10->max_height = VAR_7->maxheight;
            }

            if (VAR_7->numer != VAR_0 &&
                VAR_7->denom != VAR_0)
            {
                VAR_10->flags |= VAR_1;
                VAR_10->min_aspect.x = VAR_10->max_aspect.x = VAR_7->numer;
                VAR_10->min_aspect.y = VAR_10->max_aspect.y = VAR_7->denom;
            }
        }
        else
        {
            VAR_10->flags |= (VAR_3 | VAR_2);
            VAR_10->min_width = VAR_10->max_width = VAR_8;
            VAR_10->min_height = VAR_10->max_height = VAR_9;
        }
    }

    VAR_10->flags |= VAR_4;
    VAR_10->win_gravity = VAR_5;

    FUNC_2(VAR_6.x11.display, VAR_7->x11.handle, VAR_10);
    FUNC_1(VAR_10);
}
