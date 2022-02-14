
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hsi_msg {int status; struct cs_hsi_iface* context; } ;
struct cs_hsi_iface {TYPE_1__* cl; int lock; int control_state; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cs_hsi_iface*,struct hsi_msg*) ;
 int FUNC_1 (struct hsi_msg*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hsi_msg *VAR_3)
{
 struct cs_hsi_iface *VAR_4 = VAR_3->context;
 if (VAR_3->status == VAR_0) {
  FUNC_3(&VAR_4->lock);
  VAR_4->control_state &= ~VAR_2;
  FUNC_1(VAR_3);
  FUNC_4(&VAR_4->lock);
 } else if (VAR_3->status == VAR_1) {
  FUNC_0(VAR_4, VAR_3);
 } else {
  FUNC_2(&VAR_4->cl->device,
   "unexpected status in control write callback %d\n",
   VAR_3->status);
 }
}
