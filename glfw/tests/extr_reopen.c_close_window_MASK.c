
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 int FUNC_0 (int *) ;
 double FUNC_1 () ;
 int FUNC_2 (char*,double) ;

__attribute__((used)) static void FUNC_3(GLFWwindow* VAR_0)
{
    double VAR_1 = FUNC_1();
    FUNC_0(VAR_0);
    FUNC_2("Closing window took %0.3f seconds\n", FUNC_1() - VAR_1);
}
