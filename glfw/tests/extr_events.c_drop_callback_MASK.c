
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int number; } ;
typedef TYPE_1__ Slot ;
typedef int GLFWwindow ;


 int VAR_0 ;
 double FUNC_0 () ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static void FUNC_3(GLFWwindow* VAR_1, int VAR_2, const char* VAR_3[])
{
    int VAR_4;
    Slot* VAR_5 = FUNC_1(VAR_1);

    FUNC_2("%08x to %i at %0.3f: Drop input\n",
           VAR_0++, VAR_5->number, FUNC_0());

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        FUNC_2("  %i: \"%s\"\n", VAR_4, VAR_3[VAR_4]);
}
