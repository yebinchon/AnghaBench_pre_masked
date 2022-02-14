
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct input_event {scalar_t__ type; scalar_t__ code; int value; } ;
typedef int e ;
struct TYPE_11__ {int fd; } ;
struct TYPE_12__ {int present; TYPE_2__ linjs; } ;
typedef TYPE_3__ _GLFWjoystick ;
struct TYPE_10__ {scalar_t__ dropped; } ;
struct TYPE_13__ {TYPE_1__ linjs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_9__ VAR_8 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,struct input_event*,int) ;

int FUNC_5(_GLFWjoystick* VAR_10, int VAR_11)
{

    for (;;)
    {
        struct input_event VAR_12;

        VAR_9 = 0;
        if (FUNC_4(VAR_10->linjs.fd, &VAR_12, sizeof(VAR_12)) < 0)
        {

            if (VAR_9 == VAR_0)
                FUNC_0(VAR_10);

            break;
        }

        if (VAR_12.type == VAR_3)
        {
            if (VAR_12.code == VAR_6)
                VAR_8.linjs.dropped = VAR_5;
            else if (VAR_12.code == VAR_7)
            {
                VAR_8.linjs.dropped = VAR_4;
                FUNC_3(VAR_10);
            }
        }

        if (VAR_8.linjs.dropped)
            continue;

        if (VAR_12.type == VAR_2)
            FUNC_2(VAR_10, VAR_12.code, VAR_12.value);
        else if (VAR_12.type == VAR_1)
            FUNC_1(VAR_10, VAR_12.code, VAR_12.value);
    }

    return VAR_10->present;
}
