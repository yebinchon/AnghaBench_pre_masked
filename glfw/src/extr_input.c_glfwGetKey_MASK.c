
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* keys; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(GLFWwindow* VAR_6, int VAR_7)
{
    _GLFWwindow* VAR_8 = (_GLFWwindow*) VAR_6;
    FUNC_2(VAR_8 != ((void*)0));

    FUNC_0(VAR_4);

    if (VAR_7 < VAR_2 || VAR_7 > VAR_1)
    {
        FUNC_1(VAR_0, "Invalid key %i", VAR_7);
        return VAR_4;
    }

    if (VAR_8->keys[VAR_7] == VAR_5)
    {

        VAR_8->keys[VAR_7] = VAR_4;
        return VAR_3;
    }

    return (int) VAR_8->keys[VAR_7];
}
