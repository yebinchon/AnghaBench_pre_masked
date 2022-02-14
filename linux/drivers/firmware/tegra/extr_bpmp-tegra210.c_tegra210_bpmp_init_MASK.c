
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned int count; } ;
struct tegra_bpmp {int * threaded_channels; TYPE_6__* soc; TYPE_3__ threaded; int * rx_channel; int * tx_channel; struct tegra210_bpmp* priv; int dev; } ;
struct tegra210_bpmp {int tx_irq_data; void* arb_sema; void* atomics; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_10__ {unsigned int offset; } ;
struct TYPE_8__ {unsigned int offset; } ;
struct TYPE_7__ {unsigned int offset; } ;
struct TYPE_11__ {TYPE_4__ thread; TYPE_2__ cpu_rx; TYPE_1__ cpu_tx; } ;
struct TYPE_12__ {TYPE_5__ channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *,struct resource*) ;
 struct tegra210_bpmp* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,int ,int ,int ,struct tegra_bpmp*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct platform_device*,char*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int) ;
 int VAR_4 ;
 int FUNC_10 (int *,struct tegra_bpmp*,unsigned int) ;
 struct platform_device* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct tegra_bpmp *VAR_5)
{
 struct platform_device *VAR_6 = FUNC_11(VAR_5->dev);
 struct tegra210_bpmp *VAR_7;
 struct resource *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_7 = FUNC_5(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_5->priv = VAR_7;

 VAR_8 = FUNC_9(VAR_6, VAR_2, 0);
 VAR_7->atomics = FUNC_4(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->atomics))
  return FUNC_1(VAR_7->atomics);

 VAR_8 = FUNC_9(VAR_6, VAR_2, 1);
 VAR_7->arb_sema = FUNC_4(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->arb_sema))
  return FUNC_1(VAR_7->arb_sema);

 VAR_10 = FUNC_10(VAR_5->tx_channel, VAR_5,
      VAR_5->soc->channels.cpu_tx.offset);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_10(VAR_5->rx_channel, VAR_5,
      VAR_5->soc->channels.cpu_rx.offset);
 if (VAR_10 < 0)
  return VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_5->threaded.count; VAR_9++) {
  unsigned int VAR_11 = VAR_5->soc->channels.thread.offset + VAR_9;

  VAR_10 = FUNC_10(&VAR_5->threaded_channels[VAR_9],
       VAR_5, VAR_11);
  if (VAR_10 < 0)
   return VAR_10;
 }

 VAR_10 = FUNC_8(VAR_6, "tx");
 if (VAR_10 < 0) {
  FUNC_2(&VAR_6->dev, "failed to get TX IRQ: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_7->tx_irq_data = FUNC_7(VAR_10);
 if (!VAR_7->tx_irq_data) {
  FUNC_2(&VAR_6->dev, "failed to get IRQ data for TX IRQ\n");
  return VAR_10;
 }

 VAR_10 = FUNC_8(VAR_6, "rx");
 if (VAR_10 < 0) {
  FUNC_2(&VAR_6->dev, "failed to get rx IRQ: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_6(&VAR_6->dev, VAR_10, VAR_4,
          VAR_3, FUNC_3(&VAR_6->dev), VAR_5);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_6->dev, "failed to request IRQ: %d\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
