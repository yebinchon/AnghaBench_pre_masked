
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* key ) (int *,int,int,int,int) ;} ;
struct TYPE_5__ {int* keys; TYPE_1__ callbacks; int lockKeyMods; scalar_t__ stickyKeys; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;
typedef scalar_t__ GLFWbool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int,int,int,int) ;

void FUNC_1(_GLFWwindow* VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
    if (VAR_10 >= 0 && VAR_10 <= VAR_1)
    {
        GLFWbool VAR_14 = VAR_0;

        if (VAR_12 == VAR_5 && VAR_9->keys[VAR_10] == VAR_5)
            return;

        if (VAR_12 == VAR_4 && VAR_9->keys[VAR_10] == VAR_4)
            VAR_14 = VAR_7;

        if (VAR_12 == VAR_5 && VAR_9->stickyKeys)
            VAR_9->keys[VAR_10] = VAR_8;
        else
            VAR_9->keys[VAR_10] = (char) VAR_12;

        if (VAR_14)
            VAR_12 = VAR_6;
    }

    if (!VAR_9->lockKeyMods)
        VAR_13 &= ~(VAR_2 | VAR_3);

    if (VAR_9->callbacks.key)
        VAR_9->callbacks.key((GLFWwindow*) VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
}
