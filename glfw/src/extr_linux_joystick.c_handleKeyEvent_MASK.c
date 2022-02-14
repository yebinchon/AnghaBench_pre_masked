
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * keyMap; } ;
struct TYPE_6__ {TYPE_1__ linjs; } ;
typedef TYPE_2__ _GLFWjoystick ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_1(_GLFWjoystick* VAR_3, int VAR_4, int VAR_5)
{
    FUNC_0(VAR_3,
                             VAR_3->linjs.keyMap[VAR_4 - VAR_0],
                             VAR_5 ? VAR_1 : VAR_2);
}
