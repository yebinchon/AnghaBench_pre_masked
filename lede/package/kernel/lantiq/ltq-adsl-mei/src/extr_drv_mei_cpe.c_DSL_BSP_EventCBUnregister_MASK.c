
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * pData; int * function; } ;
struct TYPE_4__ {size_t event; } ;
typedef TYPE_1__ DSL_BSP_EventCallBack_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 TYPE_2__* VAR_3 ;

int FUNC_1(DSL_BSP_EventCallBack_t *VAR_4)
{
 if (!VAR_4) {
                FUNC_0("Invalid parameter!\n");
                return -VAR_2;
 }
        if (VAR_4->event > VAR_1 || VAR_4->event < VAR_0) {
                FUNC_0("Invalid Event %d\n", VAR_4->event);
                return -VAR_2;
        }
        if (VAR_3[VAR_4->event].function) {
                FUNC_0("Unregistering Event %d...\n", VAR_4->event);
                VAR_3[VAR_4->event].function = ((void*)0);
                VAR_3[VAR_4->event].pData = ((void*)0);
        } else {
                FUNC_0("Event %d is not registered!\n", VAR_4->event);
                return -1;
        }
        return 0;
}
