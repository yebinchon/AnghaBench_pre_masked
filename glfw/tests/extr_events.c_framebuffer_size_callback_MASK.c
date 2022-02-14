
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
 int FUNC_2 (char*,int ,int,double,int,int) ;

__attribute__((used)) static void FUNC_3(GLFWwindow* VAR_1, int VAR_2, int VAR_3)
{
    Slot* VAR_4 = FUNC_1(VAR_1);
    FUNC_2("%08x to %i at %0.3f: Framebuffer size: %i %i\n",
           VAR_0++, VAR_4->number, FUNC_0(), VAR_2, VAR_3);
}
