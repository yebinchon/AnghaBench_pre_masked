
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_test_device {void* message; scalar_t__ tx_mmio; scalar_t__ signal; } ;
struct mbox_client {int dev; } ;


 int VAR_0 ;
 struct mbox_test_device* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,void*,int ) ;

__attribute__((used)) static void FUNC_2(struct mbox_client *VAR_1, void *VAR_2)
{
 struct mbox_test_device *VAR_3 = FUNC_0(VAR_1->dev);

 if (VAR_3->tx_mmio) {
  if (VAR_3->signal)
   FUNC_1(VAR_3->tx_mmio, VAR_3->message, VAR_0);
  else
   FUNC_1(VAR_3->tx_mmio, VAR_2, VAR_0);
 }
}
