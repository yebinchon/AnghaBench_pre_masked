
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dummy_regs {int dummy; } ;
struct TYPE_2__ {int base; struct iio_dummy_regs* regs; } ;


 TYPE_1__* VAR_0 ;

struct iio_dummy_regs *FUNC_0(int VAR_1)
{
 return &VAR_0->regs[VAR_1 - VAR_0->base];
}
