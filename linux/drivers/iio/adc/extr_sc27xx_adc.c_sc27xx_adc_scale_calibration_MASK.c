
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sc27xx_adc_linear_graph {void* adc1; void* adc0; } ;
struct sc27xx_adc_data {int dev; } ;
typedef void nvmem_cell ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 struct sc27xx_adc_linear_graph VAR_0 ;
 struct sc27xx_adc_linear_graph VAR_1 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int*,void*,int ) ;
 int FUNC_4 (size_t,int) ;
 void* FUNC_5 (int ,char const*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (void*,size_t*) ;
 void* FUNC_8 (int,void*) ;
 struct sc27xx_adc_linear_graph VAR_2 ;
 struct sc27xx_adc_linear_graph VAR_3 ;

__attribute__((used)) static int FUNC_9(struct sc27xx_adc_data *VAR_4,
     bool VAR_5)
{
 const struct sc27xx_adc_linear_graph *VAR_6;
 struct sc27xx_adc_linear_graph *VAR_7;
 struct nvmem_cell *VAR_8;
 const char *VAR_9;
 u32 VAR_10 = 0;
 void *VAR_11;
 size_t VAR_12;

 if (VAR_5) {
  VAR_6 = &VAR_1;
  VAR_7 = &VAR_0;
  VAR_9 = "big_scale_calib";
 } else {
  VAR_6 = &VAR_3;
  VAR_7 = &VAR_2;
  VAR_9 = "small_scale_calib";
 }

 VAR_8 = FUNC_5(VAR_4->dev, VAR_9);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_11 = FUNC_7(VAR_8, &VAR_12);
 FUNC_6(VAR_8);

 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 FUNC_3(&VAR_10, VAR_11, FUNC_4(VAR_12, sizeof(u32)));


 VAR_7->adc0 = FUNC_8(VAR_10, VAR_6->adc0);
 VAR_7->adc1 = FUNC_8(VAR_10 >> 8,
      VAR_6->adc1);

 FUNC_2(VAR_11);
 return 0;
}
