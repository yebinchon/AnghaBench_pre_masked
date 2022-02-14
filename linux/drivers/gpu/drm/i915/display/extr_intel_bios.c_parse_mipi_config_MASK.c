
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mipi_pps_data {int rotation; } ;
struct mipi_config {int rotation; } ;
struct TYPE_3__ {int panel_id; int orientation; void* config; void* pps; } ;
struct TYPE_4__ {int panel_type; TYPE_1__ dsi; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct bdb_mipi_config {struct mipi_pps_data* pps; struct mipi_pps_data* config; } ;
struct bdb_header {int version; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct bdb_mipi_config* FUNC_2 (struct bdb_header const*,int ) ;
 int FUNC_3 (struct drm_i915_private*,int*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (struct mipi_pps_data const*,int,int ) ;
 int FUNC_6 (struct drm_i915_private*,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct drm_i915_private *VAR_8,
    const struct bdb_header *VAR_9)
{
 const struct bdb_mipi_config *VAR_10;
 const struct mipi_config *VAR_11;
 const struct mipi_pps_data *VAR_12;
 int VAR_13 = VAR_8->vbt.panel_type;
 enum port VAR_14;


 if (!FUNC_3(VAR_8, &VAR_14))
  return;


 VAR_8->vbt.dsi.panel_id = VAR_7;
 VAR_10 = FUNC_2(VAR_9, VAR_0);
 if (!VAR_10) {
  FUNC_1("No MIPI config BDB found");
  return;
 }

 FUNC_0("Found MIPI Config block, panel index = %d\n",
        VAR_13);





 VAR_11 = &VAR_10->config[VAR_13];
 VAR_12 = &VAR_10->pps[VAR_13];


 VAR_8->vbt.dsi.config = FUNC_5(VAR_11, sizeof(struct mipi_config), VAR_5);
 if (!VAR_8->vbt.dsi.config)
  return;

 VAR_8->vbt.dsi.pps = FUNC_5(VAR_12, sizeof(struct mipi_pps_data), VAR_5);
 if (!VAR_8->vbt.dsi.pps) {
  FUNC_4(VAR_8->vbt.dsi.config);
  return;
 }

 FUNC_6(VAR_8, VAR_9->version, VAR_14);


 switch (VAR_11->rotation) {
 case 131:




  VAR_8->vbt.dsi.orientation =
   VAR_4;
  break;
 case 128:
  VAR_8->vbt.dsi.orientation =
   VAR_3;
  break;
 case 130:
  VAR_8->vbt.dsi.orientation =
   VAR_1;
  break;
 case 129:
  VAR_8->vbt.dsi.orientation =
   VAR_2;
  break;
 }


 VAR_8->vbt.dsi.panel_id = VAR_6;
}
