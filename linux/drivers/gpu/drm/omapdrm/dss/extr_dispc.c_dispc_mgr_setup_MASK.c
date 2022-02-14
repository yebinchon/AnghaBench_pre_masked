
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager_info {int cpr_coefs; int cpr_enable; int partial_alpha_enabled; int trans_enabled; int trans_key; int trans_key_type; int default_color; } ;
struct dispc_device {int dummy; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dispc_device*,int ) ;
 int FUNC_1 (struct dispc_device*,int,int ) ;
 int FUNC_2 (struct dispc_device*,int,int ) ;
 int FUNC_3 (struct dispc_device*,int,int ) ;
 int FUNC_4 (struct dispc_device*,int,int *) ;
 int FUNC_5 (struct dispc_device*,int,int ) ;
 int FUNC_6 (struct dispc_device*,int,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct dispc_device *VAR_1,
       enum omap_channel VAR_2,
       const struct omap_overlay_manager_info *VAR_3)
{
 FUNC_5(VAR_1, VAR_2, VAR_3->default_color);
 FUNC_6(VAR_1, VAR_2, VAR_3->trans_key_type,
    VAR_3->trans_key);
 FUNC_3(VAR_1, VAR_2, VAR_3->trans_enabled);
 FUNC_1(VAR_1, VAR_2,
   VAR_3->partial_alpha_enabled);
 if (FUNC_0(VAR_1, VAR_0)) {
  FUNC_2(VAR_1, VAR_2, VAR_3->cpr_enable);
  FUNC_4(VAR_1, VAR_2, &VAR_3->cpr_coefs);
 }
}
