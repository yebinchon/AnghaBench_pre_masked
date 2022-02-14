
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ddi_vbt_port_info* ddi_port_info; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct ddi_vbt_port_info {int alternate_aux_channel; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum aux_ch { ____Placeholder_aux_ch } aux_ch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

enum aux_ch FUNC_4(struct drm_i915_private *VAR_6,
       enum port VAR_7)
{
 const struct ddi_vbt_port_info *VAR_8 =
  &VAR_6->vbt.ddi_port_info[VAR_7];
 enum aux_ch VAR_9;

 if (!VAR_8->alternate_aux_channel) {
  VAR_9 = (enum aux_ch)VAR_7;

  FUNC_0("using AUX %c for port %c (platform default)\n",
         FUNC_2(VAR_9), FUNC_3(VAR_7));
  return VAR_9;
 }

 switch (VAR_8->alternate_aux_channel) {
 case 133:
  VAR_9 = VAR_0;
  break;
 case 132:
  VAR_9 = VAR_1;
  break;
 case 131:
  VAR_9 = VAR_2;
  break;
 case 130:
  VAR_9 = VAR_3;
  break;
 case 129:
  VAR_9 = VAR_4;
  break;
 case 128:
  VAR_9 = VAR_5;
  break;
 default:
  FUNC_1(VAR_8->alternate_aux_channel);
  VAR_9 = VAR_0;
  break;
 }

 FUNC_0("using AUX %c for port %c (VBT)\n",
        FUNC_2(VAR_9), FUNC_3(VAR_7));

 return VAR_9;
}
