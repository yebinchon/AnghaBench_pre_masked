
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int blueBits; int greenBits; int redBits; int refreshRate; } ;
typedef int GLFWwindow ;
typedef TYPE_1__ GLFWvidmode ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int,int,char*,int *,int *) ;
 int VAR_5 ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static GLFWwindow* FUNC_7(GLFWmonitor* VAR_6)
{
    int VAR_7, VAR_8;
    GLFWwindow* VAR_9;

    if (VAR_6)
    {
        const GLFWvidmode* VAR_10 = FUNC_3(VAR_6);

        FUNC_6(VAR_4, VAR_10->refreshRate);
        FUNC_6(VAR_3, VAR_10->redBits);
        FUNC_6(VAR_2, VAR_10->greenBits);
        FUNC_6(VAR_1, VAR_10->blueBits);

        VAR_7 = VAR_10->width;
        VAR_8 = VAR_10->height;
    }
    else
    {
        VAR_7 = 640;
        VAR_8 = 480;
    }

    VAR_9 = FUNC_2(VAR_7, VAR_8, "Iconify", VAR_6, ((void*)0));
    if (!VAR_9)
    {
        FUNC_5();
        FUNC_0(VAR_0);
    }

    FUNC_4(VAR_9);
    FUNC_1(VAR_5);

    return VAR_9;
}
