
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_25__ {unsigned int count; } ;
struct tegra_bpmp {TYPE_10__* tx_channel; TYPE_10__* rx_channel; TYPE_10__* threaded_channels; TYPE_7__ threaded; TYPE_14__* dev; TYPE_5__* soc; struct tegra186_bpmp* priv; } ;
struct TYPE_27__ {void* virt; void* pool; int phys; } ;
struct TYPE_26__ {void* virt; void* pool; int phys; } ;
struct TYPE_17__ {int tx_block; int knows_txdone; int rx_callback; TYPE_14__* dev; } ;
struct TYPE_24__ {int channel; TYPE_13__ client; } ;
struct tegra186_bpmp {TYPE_9__ tx; TYPE_8__ rx; TYPE_6__ mbox; struct tegra_bpmp* parent; } ;
struct TYPE_21__ {unsigned int offset; } ;
struct TYPE_20__ {unsigned int offset; } ;
struct TYPE_19__ {unsigned int offset; } ;
struct TYPE_22__ {TYPE_3__ thread; TYPE_2__ cpu_rx; TYPE_1__ cpu_tx; } ;
struct TYPE_23__ {TYPE_4__ channels; } ;
struct TYPE_18__ {int of_node; } ;
struct TYPE_16__ {int bpmp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_14__*,char*,...) ;
 struct tegra186_bpmp* FUNC_3 (TYPE_14__*,int,int ) ;
 void* FUNC_4 (void*,int,int *) ;
 int FUNC_5 (void*,unsigned long,int) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_13__*,int ) ;
 void* FUNC_7 (int ,char*,int) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (TYPE_10__*,struct tegra_bpmp*,unsigned int) ;
 int FUNC_10 (TYPE_10__*) ;

__attribute__((used)) static int FUNC_11(struct tegra_bpmp *VAR_3)
{
 struct tegra186_bpmp *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->priv = VAR_4;
 VAR_4->parent = VAR_3;

 VAR_4->tx.pool = FUNC_7(VAR_3->dev->of_node, "shmem", 0);
 if (!VAR_4->tx.pool) {
  FUNC_2(VAR_3->dev, "TX shmem pool not found\n");
  return -VAR_0;
 }

 VAR_4->tx.virt = FUNC_4(VAR_4->tx.pool, 4096, &VAR_4->tx.phys);
 if (!VAR_4->tx.virt) {
  FUNC_2(VAR_3->dev, "failed to allocate from TX pool\n");
  return -VAR_0;
 }

 VAR_4->rx.pool = FUNC_7(VAR_3->dev->of_node, "shmem", 1);
 if (!VAR_4->rx.pool) {
  FUNC_2(VAR_3->dev, "RX shmem pool not found\n");
  VAR_6 = -VAR_0;
  goto free_tx;
 }

 VAR_4->rx.virt = FUNC_4(VAR_4->rx.pool, 4096, &VAR_4->rx.phys);
 if (!VAR_4->rx.virt) {
  FUNC_2(VAR_3->dev, "failed to allocate from RX pool\n");
  VAR_6 = -VAR_0;
  goto free_tx;
 }

 VAR_6 = FUNC_9(VAR_3->tx_channel, VAR_3,
      VAR_3->soc->channels.cpu_tx.offset);
 if (VAR_6 < 0)
  goto free_rx;

 VAR_6 = FUNC_9(VAR_3->rx_channel, VAR_3,
      VAR_3->soc->channels.cpu_rx.offset);
 if (VAR_6 < 0)
  goto cleanup_tx_channel;

 for (VAR_5 = 0; VAR_5 < VAR_3->threaded.count; VAR_5++) {
  unsigned int VAR_7 = VAR_3->soc->channels.thread.offset + VAR_5;

  VAR_6 = FUNC_9(&VAR_3->threaded_channels[VAR_5],
       VAR_3, VAR_7);
  if (VAR_6 < 0)
   goto cleanup_channels;
 }


 VAR_4->mbox.client.dev = VAR_3->dev;
 VAR_4->mbox.client.rx_callback = VAR_2;
 VAR_4->mbox.client.tx_block = 0;
 VAR_4->mbox.client.knows_txdone = 0;

 VAR_4->mbox.channel = FUNC_6(&VAR_4->mbox.client, 0);
 if (FUNC_0(VAR_4->mbox.channel)) {
  VAR_6 = FUNC_1(VAR_4->mbox.channel);
  FUNC_2(VAR_3->dev, "failed to get HSP mailbox: %d\n", VAR_6);
  goto cleanup_channels;
 }

 FUNC_10(VAR_3->tx_channel);
 FUNC_10(VAR_3->rx_channel);

 for (VAR_5 = 0; VAR_5 < VAR_3->threaded.count; VAR_5++)
  FUNC_10(&VAR_3->threaded_channels[VAR_5]);

 return 0;

cleanup_channels:
 for (VAR_5 = 0; VAR_5 < VAR_3->threaded.count; VAR_5++) {
  if (!VAR_3->threaded_channels[VAR_5].bpmp)
   continue;

  FUNC_8(&VAR_3->threaded_channels[VAR_5]);
 }

 FUNC_8(VAR_3->rx_channel);
cleanup_tx_channel:
 FUNC_8(VAR_3->tx_channel);
free_rx:
 FUNC_5(VAR_4->rx.pool, (unsigned long)VAR_4->rx.virt, 4096);
free_tx:
 FUNC_5(VAR_4->tx.pool, (unsigned long)VAR_4->tx.virt, 4096);

 return VAR_6;
}
