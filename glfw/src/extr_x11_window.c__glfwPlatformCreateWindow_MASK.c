
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


typedef int _GLFWwndconfig ;
struct TYPE_21__ {scalar_t__ monitor; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int _GLFWfbconfig ;
struct TYPE_22__ {scalar_t__ client; scalar_t__ source; } ;
typedef TYPE_3__ _GLFWctxconfig ;
typedef int Visual ;
struct TYPE_20__ {int display; int screen; } ;
struct TYPE_19__ {TYPE_1__ x11; } ;


 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 TYPE_18__ VAR_6 ;
 int FUNC_3 (int const*,TYPE_3__ const*,int const*,int **,int*) ;
 int FUNC_4 (int const*,TYPE_3__ const*,int const*,int **,int*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__ const*,int const*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__ const*,int const*) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__ const*,int const*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int const*,int *,int) ;
 int FUNC_14 (TYPE_2__*) ;

int FUNC_15(_GLFWwindow* VAR_7,
                              const _GLFWwndconfig* VAR_8,
                              const _GLFWctxconfig* VAR_9,
                              const _GLFWfbconfig* VAR_10)
{
    Visual* VAR_11;
    int VAR_12;

    if (VAR_9->client != VAR_3)
    {
        if (VAR_9->source == VAR_2)
        {
            if (!FUNC_9())
                return VAR_1;
            if (!FUNC_4(VAR_8, VAR_9, VAR_10, &VAR_11, &VAR_12))
                return VAR_1;
        }
        else if (VAR_9->source == VAR_0)
        {
            if (!FUNC_8())
                return VAR_1;
            if (!FUNC_3(VAR_8, VAR_9, VAR_10, &VAR_11, &VAR_12))
                return VAR_1;
        }
        else if (VAR_9->source == VAR_4)
        {
            if (!FUNC_10())
                return VAR_1;
        }
    }

    if (VAR_9->client == VAR_3 ||
        VAR_9->source == VAR_4)
    {
        VAR_11 = FUNC_1(VAR_6.x11.display, VAR_6.x11.screen);
        VAR_12 = FUNC_0(VAR_6.x11.display, VAR_6.x11.screen);
    }

    if (!FUNC_13(VAR_7, VAR_8, VAR_11, VAR_12))
        return VAR_1;

    if (VAR_9->client != VAR_3)
    {
        if (VAR_9->source == VAR_2)
        {
            if (!FUNC_6(VAR_7, VAR_9, VAR_10))
                return VAR_1;
        }
        else if (VAR_9->source == VAR_0)
        {
            if (!FUNC_5(VAR_7, VAR_9, VAR_10))
                return VAR_1;
        }
        else if (VAR_9->source == VAR_4)
        {
            if (!FUNC_7(VAR_7, VAR_9, VAR_10))
                return VAR_1;
        }
    }

    if (VAR_7->monitor)
    {
        FUNC_11(VAR_7);
        FUNC_14(VAR_7);
        FUNC_12(VAR_7);
    }

    FUNC_2(VAR_6.x11.display);
    return VAR_5;
}
