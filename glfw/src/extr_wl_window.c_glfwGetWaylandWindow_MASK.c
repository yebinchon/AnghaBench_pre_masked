
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl_surface {int dummy; } ;
struct TYPE_3__ {struct wl_surface* surface; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;


 int FUNC_0 (int *) ;

struct wl_surface* FUNC_1(GLFWwindow* VAR_0)
{
    _GLFWwindow* VAR_1 = (_GLFWwindow*) VAR_0;
    FUNC_0(((void*)0));
    return VAR_1->wl.surface;
}
