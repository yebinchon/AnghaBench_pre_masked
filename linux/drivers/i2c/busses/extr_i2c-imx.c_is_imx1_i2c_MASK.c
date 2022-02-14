
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_i2c_struct {TYPE_1__* hwdata; } ;
struct TYPE_2__ {scalar_t__ devtype; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct imx_i2c_struct *VAR_1)
{
 return VAR_1->hwdata->devtype == VAR_0;
}
