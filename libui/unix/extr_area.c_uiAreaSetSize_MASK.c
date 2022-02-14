
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scrollWidth; int scrollHeight; int areaWidget; int scrolling; } ;
typedef TYPE_1__ uiArea ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,TYPE_1__*) ;

void FUNC_2(uiArea *VAR_0, int VAR_1, int VAR_2)
{
 if (!VAR_0->scrolling)
  FUNC_1("You cannot call uiAreaSetSize() on a non-scrolling uiArea. (area: %p)", VAR_0);
 VAR_0->scrollWidth = VAR_1;
 VAR_0->scrollHeight = VAR_2;
 FUNC_0(VAR_0->areaWidget);
}
