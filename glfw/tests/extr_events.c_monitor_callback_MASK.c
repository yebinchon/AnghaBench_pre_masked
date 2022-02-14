
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; } ;
typedef TYPE_1__ GLFWvidmode ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,int*,int*) ;
 int FUNC_2 (int *,int*,int*) ;
 double FUNC_3 () ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,double,char*,...) ;

__attribute__((used)) static void FUNC_6(GLFWmonitor* VAR_3, int VAR_4)
{
    if (VAR_4 == VAR_0)
    {
        int VAR_5, VAR_6, VAR_7, VAR_8;
        const GLFWvidmode* VAR_9 = FUNC_4(VAR_3);

        FUNC_2(VAR_3, &VAR_5, &VAR_6);
        FUNC_1(VAR_3, &VAR_7, &VAR_8);

        FUNC_5("%08x at %0.3f: Monitor %s (%ix%i at %ix%i, %ix%i mm) was connected\n",
               VAR_2++,
               FUNC_3(),
               FUNC_0(VAR_3),
               VAR_9->width, VAR_9->height,
               VAR_5, VAR_6,
               VAR_7, VAR_8);
    }
    else if (VAR_4 == VAR_1)
    {
        FUNC_5("%08x at %0.3f: Monitor %s was disconnected\n",
               VAR_2++,
               FUNC_3(),
               FUNC_0(VAR_3));
    }
}
