
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hsi_msg {scalar_t__ status; struct cs_hsi_iface* context; } ;
struct cs_hsi_iface {int data_state; int rx_bufs; int lock; int datawait; int rx_slot; TYPE_1__* mmap_cfg; int rx_ptr_boundary; } ;
struct TYPE_2__ {int rx_ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cs_hsi_iface*,struct hsi_msg*) ;
 int FUNC_2 (struct cs_hsi_iface*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct hsi_msg *VAR_3)
{
 struct cs_hsi_iface *VAR_4 = VAR_3->context;
 u32 VAR_5;

 if (FUNC_6(VAR_3->status == VAR_1)) {
  FUNC_1(VAR_4, VAR_3);
  return;
 }

 FUNC_4(&VAR_4->lock);
 FUNC_0(!(VAR_4->data_state & VAR_2));
 VAR_4->data_state &= ~VAR_2;
 VAR_5 = VAR_0;
 VAR_5 |= VAR_4->rx_slot;
 VAR_4->rx_slot++;
 VAR_4->rx_slot %= VAR_4->rx_ptr_boundary;

 VAR_4->mmap_cfg->rx_ptr = VAR_4->rx_slot;
 if (FUNC_6(FUNC_7(&VAR_4->datawait)))
  FUNC_8(&VAR_4->datawait);
 FUNC_5(&VAR_4->lock);

 FUNC_3(VAR_5, VAR_4->rx_bufs);
 FUNC_2(VAR_4);
}
