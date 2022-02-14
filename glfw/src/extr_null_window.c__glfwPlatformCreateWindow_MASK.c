
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int _GLFWwndconfig ;
typedef int _GLFWwindow ;
typedef int _GLFWfbconfig ;
struct TYPE_4__ {scalar_t__ client; scalar_t__ source; } ;
typedef TYPE_1__ _GLFWctxconfig ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_1__ const*,int const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int const*) ;

int FUNC_4(_GLFWwindow* VAR_6,
                              const _GLFWwndconfig* VAR_7,
                              const _GLFWctxconfig* VAR_8,
                              const _GLFWfbconfig* VAR_9)
{
    if (!FUNC_3(VAR_6, VAR_7))
        return VAR_1;

    if (VAR_8->client != VAR_3)
    {
        if (VAR_8->source == VAR_2 ||
            VAR_8->source == VAR_4)
        {
            if (!FUNC_1())
                return VAR_1;
            if (!FUNC_0(VAR_6, VAR_8, VAR_9))
                return VAR_1;
        }
        else
        {
            FUNC_2(VAR_0, "Null: EGL not available");
            return VAR_1;
        }
    }

    return VAR_5;
}
