
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int childHolderWidget; } ;
typedef TYPE_1__ uiWindow ;
struct TYPE_6__ {int width; int height; } ;
typedef TYPE_2__ GtkAllocation ;


 int FUNC_0 (int ,TYPE_2__*) ;

void FUNC_1(uiWindow *VAR_0, int *VAR_1, int *VAR_2)
{
 GtkAllocation VAR_3;

 FUNC_0(VAR_0->childHolderWidget, &VAR_3);
 *VAR_1 = VAR_3.width;
 *VAR_2 = VAR_3.height;
}
