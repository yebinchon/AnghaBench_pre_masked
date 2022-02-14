
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct atmel_hlcdc_layer {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {scalar_t__ regs_offset; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_1(struct atmel_hlcdc_layer *VAR_0,
            unsigned int VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_0->regmap, VAR_0->desc->regs_offset + VAR_1, VAR_2);
}
