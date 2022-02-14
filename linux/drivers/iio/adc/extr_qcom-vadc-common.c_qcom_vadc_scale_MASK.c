
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vadc_prescale_ratio {int dummy; } ;
struct vadc_linear_graph {int dummy; } ;
typedef enum vadc_scale_fn_type { ____Placeholder_vadc_scale_fn_type } vadc_scale_fn_type ;


 int VAR_0 ;





 int FUNC_0 (struct vadc_linear_graph const*,struct vadc_prescale_ratio const*,int,int ,int*) ;
 int FUNC_1 (struct vadc_linear_graph const*,struct vadc_prescale_ratio const*,int,int ,int*) ;
 int FUNC_2 (struct vadc_linear_graph const*,struct vadc_prescale_ratio const*,int,int ,int*) ;
 int FUNC_3 (struct vadc_linear_graph const*,struct vadc_prescale_ratio const*,int,int ,int*) ;

int FUNC_4(enum vadc_scale_fn_type VAR_1,
      const struct vadc_linear_graph *VAR_2,
      const struct vadc_prescale_ratio *VAR_3,
      bool VAR_4,
      u16 VAR_5, int *VAR_6)
{
 switch (VAR_1) {
 case 132:
  return FUNC_3(VAR_2, VAR_3,
         VAR_4, VAR_5,
         VAR_6);
 case 129:
 case 128:
  return FUNC_2(VAR_2, VAR_3,
          VAR_4, VAR_5,
          VAR_6);
 case 131:
  return FUNC_1(VAR_2, VAR_3,
      VAR_4, VAR_5,
      VAR_6);
 case 130:
  return FUNC_0(VAR_2, VAR_3,
      VAR_4, VAR_5,
      VAR_6);
 default:
  return -VAR_0;
 }
}
