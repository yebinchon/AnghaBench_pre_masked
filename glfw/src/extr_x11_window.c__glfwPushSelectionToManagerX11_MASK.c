
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int target; } ;
struct TYPE_10__ {int type; TYPE_1__ xselection; } ;
typedef TYPE_3__ XEvent ;
struct TYPE_9__ {int SAVE_TARGETS; int display; int helperWindowHandle; int CLIPBOARD_MANAGER; } ;
struct TYPE_11__ {TYPE_2__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ FUNC_0 (int ,TYPE_3__*,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 TYPE_6__ VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
    FUNC_1(VAR_2.x11.display,
                      VAR_2.x11.CLIPBOARD_MANAGER,
                      VAR_2.x11.SAVE_TARGETS,
                      VAR_1,
                      VAR_2.x11.helperWindowHandle,
                      VAR_0);

    for (;;)
    {
        XEvent VAR_4;

        while (FUNC_0(VAR_2.x11.display, &VAR_4, VAR_3, ((void*)0)))
        {
            switch (VAR_4.type)
            {
                case 128:
                    FUNC_3(&VAR_4);
                    break;

                case 130:
                    FUNC_2(&VAR_4);
                    break;

                case 129:
                {
                    if (VAR_4.xselection.target == VAR_2.x11.SAVE_TARGETS)
                    {





                        return;
                    }

                    break;
                }
            }
        }

        FUNC_4(((void*)0));
    }
}
