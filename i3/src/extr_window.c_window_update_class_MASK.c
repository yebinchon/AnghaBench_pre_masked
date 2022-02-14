
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xcb_get_property_reply_t ;
struct TYPE_3__ {int * class_class; int * class_instance; } ;
typedef TYPE_1__ i3Window ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int *,int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (char*,size_t const) ;
 int FUNC_5 (char*,size_t const) ;
 char* FUNC_6 (int *) ;
 size_t FUNC_7 (int *) ;

void FUNC_8(i3Window *VAR_0, xcb_get_property_reply_t *VAR_1) {
    if (VAR_1 == ((void*)0) || FUNC_7(VAR_1) == 0) {
        FUNC_0("WM_CLASS not set.\n");
        FUNC_1(VAR_1);
        return;
    }




    const size_t VAR_2 = FUNC_7(VAR_1);
    char *VAR_3 = FUNC_6(VAR_1);
    const size_t VAR_4 = FUNC_5(VAR_3, VAR_2) + 1;

    FUNC_1(VAR_0->class_instance);
    FUNC_1(VAR_0->class_class);

    VAR_0->class_instance = FUNC_4(VAR_3, VAR_2);
    if (VAR_4 < VAR_2)
        VAR_0->class_class = FUNC_4(VAR_3 + VAR_4, VAR_2 - VAR_4);
    else
        VAR_0->class_class = ((void*)0);
    FUNC_2("WM_CLASS changed to %s (instance), %s (class)\n",
        VAR_0->class_instance, VAR_0->class_class);

    FUNC_3(VAR_1);
}
