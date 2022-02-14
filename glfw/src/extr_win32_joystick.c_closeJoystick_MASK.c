
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int objects; scalar_t__ device; } ;
struct TYPE_7__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWjoystick ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(_GLFWjoystick* VAR_1)
{
    if (VAR_1->win32.device)
    {
        FUNC_1(VAR_1->win32.device);
        FUNC_0(VAR_1->win32.device);
    }

    FUNC_4(VAR_1->win32.objects);

    FUNC_2(VAR_1);
    FUNC_3(VAR_1, VAR_0);
}
