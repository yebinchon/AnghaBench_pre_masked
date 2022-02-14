
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int number; } ;
typedef TYPE_1__ Slot ;
typedef int GLFWwindow ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 double FUNC_3 () ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int,double,int,char*,char*,char*) ;

__attribute__((used)) static void FUNC_6(GLFWwindow* VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    Slot* VAR_5 = FUNC_4(VAR_1);
    FUNC_5("%08x to %i at %0.3f: Mouse button %i (%s) (with%s) was %s\n",
           VAR_0++, VAR_5->number, FUNC_3(), VAR_2,
           FUNC_1(VAR_2),
           FUNC_2(VAR_4),
           FUNC_0(VAR_3));
}
