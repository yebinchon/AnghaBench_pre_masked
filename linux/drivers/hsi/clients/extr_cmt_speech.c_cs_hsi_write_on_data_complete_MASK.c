
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsi_msg {scalar_t__ status; struct cs_hsi_iface* context; } ;
struct cs_hsi_iface {int lock; int datawait; int data_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cs_hsi_iface*,struct hsi_msg*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct hsi_msg *VAR_2)
{
 struct cs_hsi_iface *VAR_3 = VAR_2->context;

 if (VAR_2->status == VAR_0) {
  FUNC_1(&VAR_3->lock);
  VAR_3->data_state &= ~VAR_1;
  if (FUNC_3(FUNC_4(&VAR_3->datawait)))
   FUNC_5(&VAR_3->datawait);
  FUNC_2(&VAR_3->lock);
 } else {
  FUNC_0(VAR_3, VAR_2);
 }
}
