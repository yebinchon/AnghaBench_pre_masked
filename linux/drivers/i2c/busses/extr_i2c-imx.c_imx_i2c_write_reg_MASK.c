
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_i2c_struct {TYPE_1__* hwdata; scalar_t__ base; } ;
struct TYPE_2__ {unsigned int regshift; } ;


 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(unsigned int VAR_0,
  struct imx_i2c_struct *VAR_1, unsigned int VAR_2)
{
 FUNC_0(VAR_0, VAR_1->base + (VAR_2 << VAR_1->hwdata->regshift));
}
