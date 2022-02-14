
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dispc_reg_field {int low; int high; int reg; } ;
struct dispc_device {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
typedef enum mgr_reg_fields { ____Placeholder_mgr_reg_fields } mgr_reg_fields ;
struct TYPE_2__ {struct dispc_reg_field* reg_desc; } ;


 int FUNC_0 (struct dispc_device*,int ,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static u32 FUNC_1(struct dispc_device *VAR_1, enum omap_channel VAR_2,
   enum mgr_reg_fields VAR_3)
{
 const struct dispc_reg_field VAR_4 = VAR_0[VAR_2].reg_desc[VAR_3];

 return FUNC_0(VAR_1, VAR_4.reg, VAR_4.high, VAR_4.low);
}
