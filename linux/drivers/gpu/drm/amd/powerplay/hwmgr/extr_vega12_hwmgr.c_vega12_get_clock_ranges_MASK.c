
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vega12_hwmgr {TYPE_1__* clk_range; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_2__ {int ACMin; int ACMax; } ;
typedef size_t PPCLK_e ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0,
  uint32_t *VAR_1,
  PPCLK_e VAR_2,
  bool VAR_3)
{
 struct vega12_hwmgr *VAR_4 = (struct vega12_hwmgr *)(VAR_0->backend);

 if (VAR_3)
  *VAR_1 = VAR_4->clk_range[VAR_2].ACMax;
 else
  *VAR_1 = VAR_4->clk_range[VAR_2].ACMin;

 return 0;
}
