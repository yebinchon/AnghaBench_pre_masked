
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct demo *VAR_3) {
    FUNC_4(VAR_0);

    if (!FUNC_3()) {
        FUNC_6("Cannot initialize GLFW.\nExiting ...\n");
        FUNC_1(VAR_2);
        FUNC_0(1);
    }

    if (!FUNC_5()) {
        FUNC_6("GLFW failed to find the Vulkan loader.\nExiting ...\n");
        FUNC_1(VAR_2);
        FUNC_0(1);
    }

    FUNC_2(((void*)0), VAR_1, ((void*)0));
}
