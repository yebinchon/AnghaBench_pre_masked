
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vadc_prescale_ratio {int dummy; } ;
struct adc5_data {int dummy; } ;
typedef enum vadc_scale_fn_type { ____Placeholder_vadc_scale_fn_type } vadc_scale_fn_type ;
struct TYPE_2__ {int (* scale_fn ) (struct vadc_prescale_ratio const*,struct adc5_data const*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct vadc_prescale_ratio const*,struct adc5_data const*,int ,int*) ;

int FUNC_2(enum vadc_scale_fn_type VAR_4,
      const struct vadc_prescale_ratio *VAR_5,
      const struct adc5_data *VAR_6,
      u16 VAR_7, int *VAR_8)
{
 if (!(VAR_4 >= VAR_1 &&
  VAR_4 < VAR_2)) {
  FUNC_0("Invalid scale type %d\n", VAR_4);
  return -VAR_0;
 }

 return VAR_3[VAR_4].scale_fn(VAR_5, VAR_6,
     VAR_7, VAR_8);
}
