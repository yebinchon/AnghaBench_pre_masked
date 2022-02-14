
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int index; } ;
typedef TYPE_1__ _GLFWmapelement ;
struct TYPE_6__ {int hatCount; int buttonCount; int axisCount; } ;
typedef TYPE_2__ _GLFWjoystick ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static GLFWbool FUNC_0(const _GLFWmapelement* VAR_5,
                                          const _GLFWjoystick* VAR_6)
{
    if (VAR_5->type == VAR_4 && (VAR_5->index >> 4) >= VAR_6->hatCount)
        return VAR_0;
    else if (VAR_5->type == VAR_3 && VAR_5->index >= VAR_6->buttonCount)
        return VAR_0;
    else if (VAR_5->type == VAR_2 && VAR_5->index >= VAR_6->axisCount)
        return VAR_0;

    return VAR_1;
}
