
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float width; int height; } ;
typedef TYPE_1__ GLFWvidmode ;
typedef int GLFWmonitor ;


 char* FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int *,float*,float*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *,int*,int*) ;
 int FUNC_4 (int *,int*,int*) ;
 int FUNC_5 (int *,int*,int*,int*,int*) ;
 int * FUNC_6 () ;
 TYPE_1__* FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *,int*) ;
 scalar_t__ FUNC_9 (TYPE_1__ const*,TYPE_1__ const*,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char) ;

__attribute__((used)) static void FUNC_12(GLFWmonitor* VAR_0)
{
    int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
    int VAR_7, VAR_8, VAR_9, VAR_10;
    float VAR_11, VAR_12;

    const GLFWvidmode* VAR_13 = FUNC_7(VAR_0);
    const GLFWvidmode* VAR_14 = FUNC_8(VAR_0, &VAR_1);

    FUNC_4(VAR_0, &VAR_2, &VAR_3);
    FUNC_3(VAR_0, &VAR_4, &VAR_5);
    FUNC_1(VAR_0, &VAR_11, &VAR_12);
    FUNC_5(VAR_0, &VAR_7, &VAR_8, &VAR_9, &VAR_10);

    FUNC_10("Name: %s (%s)\n",
           FUNC_2(VAR_0),
           FUNC_6() == VAR_0 ? "primary" : "secondary");
    FUNC_10("Current mode: %s\n", FUNC_0(VAR_13));
    FUNC_10("Virtual position: %i, %i\n", VAR_2, VAR_3);
    FUNC_10("Content scale: %f x %f\n", VAR_11, VAR_12);

    FUNC_10("Physical size: %i x %i mm (%0.2f dpi at %i x %i)\n",
           VAR_4, VAR_5, VAR_13->width * 25.4f / VAR_4, VAR_13->width, VAR_13->height);
    FUNC_10("Monitor work area: %i x %i starting at %i, %i\n",
            VAR_9, VAR_10, VAR_7, VAR_8);

    FUNC_10("Modes:\n");

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
    {
        FUNC_10("%3u: %s", (unsigned int) VAR_6, FUNC_0(VAR_14 + VAR_6));

        if (FUNC_9(VAR_13, VAR_14 + VAR_6, sizeof(GLFWvidmode)) == 0)
            FUNC_10(" (current mode)");

        FUNC_11('\n');
    }
}
