
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int height; int width; } ;
typedef TYPE_2__ _GLFWwndconfig ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_8__ {TYPE_1__ null; } ;
typedef TYPE_3__ _GLFWwindow ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(_GLFWwindow* VAR_1,
                              const _GLFWwndconfig* VAR_2)
{
    VAR_1->null.width = VAR_2->width;
    VAR_1->null.height = VAR_2->height;

    return VAR_0;
}
