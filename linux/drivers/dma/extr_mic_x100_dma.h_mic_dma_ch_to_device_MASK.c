
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mic_dma_chan {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* dev; } ;
struct TYPE_4__ {TYPE_1__ dma_dev; } ;


 TYPE_2__* FUNC_0 (struct mic_dma_chan*) ;

__attribute__((used)) static inline struct device *FUNC_1(struct mic_dma_chan *VAR_0)
{
 return FUNC_0(VAR_0)->dma_dev.dev;
}
