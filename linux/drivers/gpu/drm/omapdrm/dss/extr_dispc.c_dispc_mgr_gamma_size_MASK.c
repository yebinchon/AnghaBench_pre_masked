
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dispc_gamma_desc {int len; } ;
struct dispc_device {TYPE_1__* feat; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_4__ {struct dispc_gamma_desc gamma; } ;
struct TYPE_3__ {int has_gamma_table; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct dispc_device *VAR_1,
    enum omap_channel VAR_2)
{
 const struct dispc_gamma_desc *VAR_3 = &VAR_0[VAR_2].gamma;

 if (!VAR_1->feat->has_gamma_table)
  return 0;

 return VAR_3->len;
}
