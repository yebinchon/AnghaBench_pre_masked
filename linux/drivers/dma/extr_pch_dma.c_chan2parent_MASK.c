
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_chan {TYPE_2__* dev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ device; } ;



__attribute__((used)) static inline struct device *FUNC_0(struct dma_chan *VAR_0)
{
 return VAR_0->dev->device.parent;
}
