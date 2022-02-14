
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {float x; float y; } ;
struct TYPE_4__ {float x; float y; } ;
typedef int GLFWwindow ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int *,double*,double*) ;

void FUNC_1(GLFWwindow* VAR_5)
{
    float VAR_6 = .25;

    if (VAR_0 == VAR_3) {
        double VAR_7, VAR_8;
        FUNC_0(VAR_5, &VAR_7, &VAR_8);
        VAR_1.x = (float) VAR_7;
        VAR_1.y = (float) VAR_8;
    }

    VAR_4.x = (VAR_1.x - VAR_2.x) * VAR_6 + VAR_4.x * (1 - VAR_6);
    VAR_4.y = (VAR_1.y - VAR_2.y) * VAR_6 + VAR_4.y * (1 - VAR_6);
    VAR_2 = VAR_1;
}
