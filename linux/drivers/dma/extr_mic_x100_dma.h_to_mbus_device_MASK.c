
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_dma_chan {int dummy; } ;
struct mbus_device {int dummy; } ;
struct TYPE_2__ {struct mbus_device* mbdev; } ;


 TYPE_1__* FUNC_0 (struct mic_dma_chan*) ;

__attribute__((used)) static inline struct mbus_device *FUNC_1(struct mic_dma_chan *VAR_0)
{
 return FUNC_0(VAR_0)->mbdev;
}
