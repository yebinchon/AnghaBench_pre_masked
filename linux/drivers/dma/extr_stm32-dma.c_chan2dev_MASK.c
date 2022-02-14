
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_6__ {TYPE_2__ chan; } ;
struct stm32_dma_chan {TYPE_3__ vchan; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device device; } ;



__attribute__((used)) static struct device *FUNC_0(struct stm32_dma_chan *VAR_0)
{
 return &VAR_0->vchan.chan.dev->device;
}
