
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int nents; int sgl; } ;
struct hsi_msg {scalar_t__ status; int complete; TYPE_1__ sgt; struct cs_hsi_iface* context; } ;
struct cs_hsi_iface {scalar_t__ iface_state; int data_state; size_t rx_slot; size_t rx_bufs; TYPE_2__* cl; int buf_size; scalar_t__* rx_offsets; scalar_t__ mmap_base; int lock; } ;
struct TYPE_4__ {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cs_hsi_iface*,struct hsi_msg*) ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_2__*,struct hsi_msg*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct hsi_msg *VAR_5)
{
 struct cs_hsi_iface *VAR_6 = VAR_5->context;
 u32 *VAR_7;
 int VAR_8;

 if (FUNC_7(VAR_5->status == VAR_1)) {
  FUNC_1(VAR_6, VAR_5);
  return;
 }
 if (FUNC_7(VAR_6->iface_state != VAR_0)) {
  FUNC_2(&VAR_6->cl->device, "Data received in invalid state\n");
  FUNC_1(VAR_6, VAR_5);
  return;
 }

 FUNC_5(&VAR_6->lock);
 FUNC_0(!(VAR_6->data_state & VAR_2));
 VAR_6->data_state &= ~VAR_2;
 VAR_6->data_state |= VAR_3;
 FUNC_6(&VAR_6->lock);

 VAR_7 = (u32 *)(VAR_6->mmap_base +
    VAR_6->rx_offsets[VAR_6->rx_slot % VAR_6->rx_bufs]);
 FUNC_4(VAR_5->sgt.sgl, VAR_7, VAR_6->buf_size);
 VAR_5->sgt.nents = 1;
 VAR_5->complete = VAR_4;
 VAR_8 = FUNC_3(VAR_6->cl, VAR_5);
 if (VAR_8)
  FUNC_1(VAR_6, VAR_5);
}
