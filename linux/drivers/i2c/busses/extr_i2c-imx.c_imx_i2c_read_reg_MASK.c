
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_i2c_struct {TYPE_1__* hwdata; scalar_t__ base; } ;
struct TYPE_2__ {unsigned int regshift; } ;


 unsigned char FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned char FUNC_1(struct imx_i2c_struct *VAR_0,
  unsigned int VAR_1)
{
 return FUNC_0(VAR_0->base + (VAR_1 << VAR_0->hwdata->regshift));
}
