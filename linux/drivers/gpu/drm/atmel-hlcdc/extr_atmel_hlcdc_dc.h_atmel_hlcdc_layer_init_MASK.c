
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct atmel_hlcdc_layer_desc {int dummy; } ;
struct atmel_hlcdc_layer {struct regmap* regmap; struct atmel_hlcdc_layer_desc const* desc; } ;



__attribute__((used)) static inline void FUNC_0(struct atmel_hlcdc_layer *VAR_0,
    const struct atmel_hlcdc_layer_desc *VAR_1,
    struct regmap *VAR_2)
{
 VAR_0->desc = VAR_1;
 VAR_0->regmap = VAR_2;
}
