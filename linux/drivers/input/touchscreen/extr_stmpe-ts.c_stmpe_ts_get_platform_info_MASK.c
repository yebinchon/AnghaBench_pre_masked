
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct stmpe_touch {void* i_drive; void* fraction_z; void* settling; void* touch_det_delay; void* ave_ctrl; TYPE_2__* stmpe; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {void* adc_freq; void* ref_sel; void* mod_12b; void* sample_time; } ;


 int FUNC_0 (struct device_node*,char*,void**) ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_0,
     struct stmpe_touch *VAR_1)
{
 struct device_node *VAR_2 = VAR_0->dev.of_node;
 u32 VAR_3;

 if (VAR_2) {
  if (!FUNC_0(VAR_2, "st,sample-time", &VAR_3))
   VAR_1->stmpe->sample_time = VAR_3;
  if (!FUNC_0(VAR_2, "st,mod-12b", &VAR_3))
   VAR_1->stmpe->mod_12b = VAR_3;
  if (!FUNC_0(VAR_2, "st,ref-sel", &VAR_3))
   VAR_1->stmpe->ref_sel = VAR_3;
  if (!FUNC_0(VAR_2, "st,adc-freq", &VAR_3))
   VAR_1->stmpe->adc_freq = VAR_3;
  if (!FUNC_0(VAR_2, "st,ave-ctrl", &VAR_3))
   VAR_1->ave_ctrl = VAR_3;
  if (!FUNC_0(VAR_2, "st,touch-det-delay", &VAR_3))
   VAR_1->touch_det_delay = VAR_3;
  if (!FUNC_0(VAR_2, "st,settling", &VAR_3))
   VAR_1->settling = VAR_3;
  if (!FUNC_0(VAR_2, "st,fraction-z", &VAR_3))
   VAR_1->fraction_z = VAR_3;
  if (!FUNC_0(VAR_2, "st,i-drive", &VAR_3))
   VAR_1->i_drive = VAR_3;
 }
}
