
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cs_hsi_iface {scalar_t__ buf_size; unsigned int slot_size; unsigned int* rx_offsets; unsigned int* tx_offsets; int iface_state; TYPE_2__* cl; TYPE_1__* mmap_cfg; } ;
struct cs_buffer_config {int tx_bufs; int rx_bufs; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {unsigned int rx_bufs; unsigned int* rx_offsets; unsigned int tx_bufs; unsigned int* tx_offsets; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,unsigned int,unsigned int,...) ;
 int FUNC_3 (struct cs_hsi_iface*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct cs_hsi_iface *VAR_2,
     struct cs_buffer_config *VAR_3)
{
 unsigned int VAR_4, VAR_5;

 FUNC_0(VAR_2->buf_size == 0);

 FUNC_3(VAR_2, VAR_3->rx_bufs, VAR_3->tx_bufs);

 VAR_2->slot_size = FUNC_1(VAR_2->buf_size);
 FUNC_2(&VAR_2->cl->device,
   "setting slot size to %u, buf size %u, align %u\n",
   VAR_2->slot_size, VAR_2->buf_size, VAR_1);

 VAR_4 = FUNC_1(sizeof(*VAR_2->mmap_cfg));
 FUNC_2(&VAR_2->cl->device,
   "setting data start at %u, cfg block %u, align %u\n",
   VAR_4, sizeof(*VAR_2->mmap_cfg), VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_2->mmap_cfg->rx_bufs; VAR_5++) {
  VAR_2->rx_offsets[VAR_5] = VAR_4 + VAR_5 * VAR_2->slot_size;
  VAR_2->mmap_cfg->rx_offsets[VAR_5] = VAR_2->rx_offsets[VAR_5];
  FUNC_2(&VAR_2->cl->device, "DL buf #%u at %u\n",
     VAR_5, VAR_2->rx_offsets[VAR_5]);
 }
 for (VAR_5 = 0; VAR_5 < VAR_2->mmap_cfg->tx_bufs; VAR_5++) {
  VAR_2->tx_offsets[VAR_5] = VAR_4 +
   (VAR_5 + VAR_2->mmap_cfg->rx_bufs) * VAR_2->slot_size;
  VAR_2->mmap_cfg->tx_offsets[VAR_5] = VAR_2->tx_offsets[VAR_5];
  FUNC_2(&VAR_2->cl->device, "UL buf #%u at %u\n",
     VAR_5, VAR_2->rx_offsets[VAR_5]);
 }

 VAR_2->iface_state = VAR_0;
}
