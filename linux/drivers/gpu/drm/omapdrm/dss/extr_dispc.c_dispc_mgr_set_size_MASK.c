
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct dispc_device {TYPE_1__* feat; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {int mgr_width_start; int mgr_height_start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct dispc_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dispc_device *VAR_0,
          enum omap_channel VAR_1, u16 VAR_2, u16 VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3 - 1, VAR_0->feat->mgr_height_start, 16) |
  FUNC_1(VAR_2 - 1, VAR_0->feat->mgr_width_start, 0);

 FUNC_2(VAR_0, FUNC_0(VAR_1), VAR_4);
}
