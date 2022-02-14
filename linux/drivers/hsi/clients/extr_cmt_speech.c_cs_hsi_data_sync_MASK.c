
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs_hsi_iface {TYPE_1__* cl; int lock; int datawait; int data_state; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(struct cs_hsi_iface *VAR_6)
{
 int VAR_7 = 0;

 FUNC_8(&VAR_6->lock);

 if (!FUNC_1(VAR_6->data_state)) {
  FUNC_2(&VAR_6->cl->device, "hsi_data_sync break, idle\n");
  goto out;
 }

 for (;;) {
  int VAR_8;
  FUNC_0(VAR_5);
  if (!FUNC_1(VAR_6->data_state))
   goto out;
  if (FUNC_7(VAR_4)) {
   VAR_7 = -VAR_2;
   goto out;
  }




  FUNC_5(&VAR_6->datawait, &VAR_5, VAR_3);
  FUNC_9(&VAR_6->lock);
  VAR_8 = FUNC_6(
   FUNC_4(VAR_0));
  FUNC_8(&VAR_6->lock);
  FUNC_3(&VAR_6->datawait, &VAR_5);
  if (!VAR_8) {
   FUNC_2(&VAR_6->cl->device,
    "hsi_data_sync timeout after %d ms\n",
    VAR_0);
   VAR_7 = -VAR_1;
   goto out;
  }
 }

out:
 FUNC_9(&VAR_6->lock);
 FUNC_2(&VAR_6->cl->device, "hsi_data_sync done with res %d\n", VAR_7);

 return VAR_7;
}
