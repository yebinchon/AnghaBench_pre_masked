
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_connector_state {scalar_t__ scaling; scalar_t__ underscan_hborder; scalar_t__ underscan_vborder; scalar_t__ underscan_enable; } ;



__attribute__((used)) static bool
FUNC_0(const struct dm_connector_state *VAR_0,
      const struct dm_connector_state *VAR_1)
{
 if (VAR_0->scaling != VAR_1->scaling)
  return 1;
 if (!VAR_0->underscan_enable && VAR_1->underscan_enable) {
  if (VAR_1->underscan_hborder != 0 && VAR_1->underscan_vborder != 0)
   return 1;
 } else if (VAR_0->underscan_enable && !VAR_1->underscan_enable) {
  if (VAR_0->underscan_hborder != 0 && VAR_0->underscan_vborder != 0)
   return 1;
 } else if (VAR_0->underscan_hborder != VAR_1->underscan_hborder ||
     VAR_0->underscan_vborder != VAR_1->underscan_vborder)
  return 1;
 return 0;
}
