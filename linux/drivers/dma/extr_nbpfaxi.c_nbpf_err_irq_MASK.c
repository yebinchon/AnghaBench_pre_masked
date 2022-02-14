
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int dev; } ;
struct nbpf_device {TYPE_1__ dma_dev; } ;
struct nbpf_channel {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct nbpf_channel*) ;
 int FUNC_2 (struct nbpf_channel*) ;
 scalar_t__ FUNC_3 (struct nbpf_device*) ;
 struct nbpf_channel* FUNC_4 (struct nbpf_device*,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct nbpf_device *VAR_4 = VAR_3;
 u32 VAR_5 = FUNC_3(VAR_4);

 FUNC_0(VAR_4->dma_dev.dev, "DMA error IRQ %u\n", VAR_2);

 if (!VAR_5)
  return VAR_1;

 do {
  struct nbpf_channel *VAR_6 = FUNC_4(VAR_4, VAR_5);

  FUNC_2(VAR_6);
  FUNC_1(VAR_6);
  VAR_5 = FUNC_3(VAR_4);
 } while (VAR_5);

 return VAR_0;
}
