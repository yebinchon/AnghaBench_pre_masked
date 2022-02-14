
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int sgl; } ;
struct hsi_msg {int complete; TYPE_1__ sgt; } ;
struct cs_hsi_iface {scalar_t__ iface_state; int data_state; unsigned int tx_slot; struct hsi_msg* data_tx_msg; int lock; TYPE_2__* cl; int buf_size; scalar_t__* tx_offsets; scalar_t__ mmap_base; } ;
struct TYPE_4__ {int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cs_hsi_iface*,struct hsi_msg*) ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_2__*,struct hsi_msg*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct cs_hsi_iface *VAR_7, unsigned int VAR_8)
{
 u32 *VAR_9;
 struct hsi_msg *VAR_10;
 int VAR_11;

 FUNC_4(&VAR_7->lock);
 if (VAR_7->iface_state != VAR_0) {
  FUNC_1(&VAR_7->cl->device, "Not configured, aborting\n");
  VAR_11 = -VAR_2;
  goto error;
 }
 if (VAR_7->data_state & VAR_4) {
  FUNC_1(&VAR_7->cl->device, "HSI error, aborting\n");
  VAR_11 = -VAR_3;
  goto error;
 }
 if (VAR_7->data_state & VAR_5) {
  FUNC_1(&VAR_7->cl->device, "Write pending on data channel.\n");
  VAR_11 = -VAR_1;
  goto error;
 }
 VAR_7->data_state |= VAR_5;
 FUNC_5(&VAR_7->lock);

 VAR_7->tx_slot = VAR_8;
 VAR_9 = (u32 *)(VAR_7->mmap_base + VAR_7->tx_offsets[VAR_7->tx_slot]);
 VAR_10 = VAR_7->data_tx_msg;
 FUNC_3(VAR_10->sgt.sgl, VAR_9, VAR_7->buf_size);
 VAR_10->complete = VAR_6;
 VAR_11 = FUNC_2(VAR_7->cl, VAR_10);
 if (VAR_11)
  FUNC_0(VAR_7, VAR_10);

 return VAR_11;

error:
 FUNC_5(&VAR_7->lock);
 if (VAR_11 == -VAR_3)
  FUNC_0(VAR_7, VAR_7->data_tx_msg);

 return VAR_11;
}
