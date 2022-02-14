
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hwmod {int rst_lines_cnt; TYPE_1__* rst_lines; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ FUNC_0 (struct omap_hwmod*,int ) ;

__attribute__((used)) static bool FUNC_1(struct omap_hwmod *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->rst_lines_cnt && VAR_1 == 0; VAR_2++)
  if (FUNC_0(VAR_0, VAR_0->rst_lines[VAR_2].name) > 0)
   VAR_1++;

 return (VAR_1) ? 1 : 0;
}
