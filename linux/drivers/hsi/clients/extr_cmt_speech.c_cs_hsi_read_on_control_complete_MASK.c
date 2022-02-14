
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct timespec64 {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct hsi_msg {scalar_t__ status; struct cs_hsi_iface* context; } ;
struct cs_timestamp {void* tv_nsec; void* tv_sec; } ;
struct cs_hsi_iface {int flags; int lock; TYPE_2__* mmap_cfg; TYPE_1__* cl; int control_state; } ;
typedef void* __u32 ;
struct TYPE_4__ {struct cs_timestamp tstamp_rx_ctrl; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hsi_msg*) ;
 int FUNC_1 (struct cs_hsi_iface*,struct hsi_msg*) ;
 int FUNC_2 (struct cs_hsi_iface*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hsi_msg*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct timespec64*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct hsi_msg *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3);
 struct cs_hsi_iface *VAR_5 = VAR_3->context;

 FUNC_8(&VAR_5->lock);
 VAR_5->control_state &= ~VAR_2;
 if (VAR_3->status == VAR_1) {
  FUNC_6(&VAR_5->cl->device, "Control RX error detected\n");
  FUNC_9(&VAR_5->lock);
  FUNC_1(VAR_5, VAR_3);
  goto out;
 }
 FUNC_5(&VAR_5->cl->device, "Read on control: %08X\n", VAR_4);
 FUNC_4(VAR_3);
 if (VAR_5->flags & VAR_0) {
  struct timespec64 VAR_6;
  struct cs_timestamp *VAR_7 =
   &VAR_5->mmap_cfg->tstamp_rx_ctrl;

  FUNC_7(&VAR_6);

  VAR_7->tv_sec = (__u32) VAR_6.tv_sec;
  VAR_7->tv_nsec = (__u32) VAR_6.tv_nsec;
 }
 FUNC_9(&VAR_5->lock);

 FUNC_3(VAR_4);

out:
 FUNC_2(VAR_5);
}
