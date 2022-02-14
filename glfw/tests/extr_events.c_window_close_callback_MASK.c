
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int number; int closeable; } ;
typedef TYPE_1__ Slot ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int ) ;
 double FUNC_1 () ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static void FUNC_5(GLFWwindow* VAR_2)
{
    Slot* VAR_3 = FUNC_2(VAR_2);
    FUNC_4("%08x to %i at %0.3f: Window close\n",
           VAR_1++, VAR_3->number, FUNC_1());

    if (!VAR_3->closeable)
    {
        FUNC_4("(( closing is disabled, press %s to re-enable )\n",
               FUNC_0(VAR_0, 0));
    }

    FUNC_3(VAR_2, VAR_3->closeable);
}
