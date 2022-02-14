
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hints ;
struct TYPE_6__ {int handle; } ;
struct TYPE_8__ {TYPE_1__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_7__ {int MOTIF_WM_HINTS; int display; } ;
struct TYPE_9__ {TYPE_2__ x11; } ;
typedef scalar_t__ GLFWbool ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int,int ,unsigned char*,int) ;
 TYPE_5__ VAR_3 ;

void FUNC_1(_GLFWwindow* VAR_4, GLFWbool VAR_5)
{
    struct
    {
        unsigned long flags;
        unsigned long functions;
        unsigned long decorations;
        long input_mode;
        unsigned long status;
    } VAR_6 = {0};

    VAR_6.flags = VAR_1;
    VAR_6.decorations = VAR_5 ? VAR_0 : 0;

    FUNC_0(VAR_3.x11.display, VAR_4->x11.handle,
                    VAR_3.x11.MOTIF_WM_HINTS,
                    VAR_3.x11.MOTIF_WM_HINTS, 32,
                    VAR_2,
                    (unsigned char*) &VAR_6,
                    sizeof(VAR_6) / sizeof(long));
}
