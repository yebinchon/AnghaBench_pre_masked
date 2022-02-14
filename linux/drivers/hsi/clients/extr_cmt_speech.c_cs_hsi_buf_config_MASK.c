
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs_hsi_iface {unsigned int iface_state; int lock; int pm_qos_req; scalar_t__ buf_size; scalar_t__ slot_size; scalar_t__ tx_slot; scalar_t__ rx_slot; int flags; TYPE_1__* mmap_cfg; int data_state; } ;
struct cs_buffer_config {int flags; scalar_t__ buf_size; } ;
struct TYPE_2__ {scalar_t__ buf_size; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cs_hsi_iface*,struct cs_buffer_config*) ;
 int FUNC_2 (struct cs_hsi_iface*,unsigned int) ;
 int FUNC_3 (struct cs_hsi_iface*,struct cs_buffer_config*) ;
 int FUNC_4 (struct cs_hsi_iface*) ;
 int FUNC_5 (struct cs_hsi_iface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct cs_hsi_iface *VAR_4,
     struct cs_buffer_config *VAR_5)
{
 int VAR_6 = 0;
 unsigned int VAR_7 = VAR_4->iface_state;

 FUNC_11(&VAR_4->lock);

 if (VAR_7 == VAR_1)
  VAR_4->iface_state = VAR_2;
 FUNC_12(&VAR_4->lock);





 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_0(FUNC_6(VAR_4->data_state));

 FUNC_11(&VAR_4->lock);
 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6 < 0)
  goto error;

 VAR_4->buf_size = VAR_5->buf_size;
 VAR_4->mmap_cfg->buf_size = VAR_4->buf_size;
 VAR_4->flags = VAR_5->flags;

 VAR_4->rx_slot = 0;
 VAR_4->tx_slot = 0;
 VAR_4->slot_size = 0;

 if (VAR_4->buf_size)
  FUNC_3(VAR_4, VAR_5);
 else
  FUNC_2(VAR_4, VAR_7);

 FUNC_12(&VAR_4->lock);

 if (VAR_7 != VAR_4->iface_state) {
  if (VAR_4->iface_state == VAR_1) {
   FUNC_9(&VAR_4->pm_qos_req,
    VAR_3,
    VAR_0);
   FUNC_7();
   FUNC_5(VAR_4);
   FUNC_8();
  } else if (VAR_7 == VAR_1) {
   FUNC_10(&VAR_4->pm_qos_req);
  }
 }
 return VAR_6;

error:
 FUNC_12(&VAR_4->lock);
 return VAR_6;
}
