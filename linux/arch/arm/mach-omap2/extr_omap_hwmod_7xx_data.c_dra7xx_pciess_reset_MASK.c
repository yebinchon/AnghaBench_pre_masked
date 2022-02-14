
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hwmod {int rst_lines_cnt; TYPE_1__* rst_lines; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (struct omap_hwmod*,int ) ;
 int FUNC_1 (struct omap_hwmod*,int ) ;

int FUNC_2(struct omap_hwmod *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->rst_lines_cnt; VAR_1++) {
  FUNC_0(VAR_0, VAR_0->rst_lines[VAR_1].name);
  FUNC_1(VAR_0, VAR_0->rst_lines[VAR_1].name);
 }

 return 0;
}
