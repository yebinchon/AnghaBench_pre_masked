
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int areaWidget; int scrolling; } ;
typedef TYPE_1__ uiArea ;
struct TYPE_6__ {double width; double height; } ;
typedef TYPE_2__ GtkAllocation ;


 int FUNC_0 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(uiArea *VAR_0, double *VAR_1, double *VAR_2)
{
 GtkAllocation VAR_3;

 *VAR_1 = 0;
 *VAR_2 = 0;

 if (!VAR_0->scrolling) {
  FUNC_0(VAR_0->areaWidget, &VAR_3);



  *VAR_1 = VAR_3.width;
  *VAR_2 = VAR_3.height;
 }
}
