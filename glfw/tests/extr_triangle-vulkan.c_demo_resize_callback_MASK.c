
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demo {int width; int height; } ;
typedef int GLFWwindow ;


 int FUNC_0 (struct demo*) ;
 struct demo* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(GLFWwindow* VAR_0, int VAR_1, int VAR_2) {
    struct demo* VAR_3 = FUNC_1(VAR_0);
    VAR_3->width = VAR_1;
    VAR_3->height = VAR_2;
    FUNC_0(VAR_3);
}
