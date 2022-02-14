
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct input_absinfo {int value; } ;
struct TYPE_5__ {scalar_t__* absMap; int fd; struct input_absinfo* absInfo; } ;
struct TYPE_6__ {TYPE_1__ linjs; } ;
typedef TYPE_2__ _GLFWjoystick ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ,struct input_absinfo*) ;

__attribute__((used)) static void FUNC_3(_GLFWjoystick* VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
        if (VAR_1->linjs.absMap[VAR_2] < 0)
            continue;

        struct input_absinfo* VAR_3 = &VAR_1->linjs.absInfo[VAR_2];

        if (FUNC_2(VAR_1->linjs.fd, FUNC_0(VAR_2), VAR_3) < 0)
            continue;

        FUNC_1(VAR_1, VAR_2, VAR_3->value);
    }
}
