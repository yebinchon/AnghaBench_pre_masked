
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_test_device {void* rx_buffer; int async_queue; int waitq; int lock; scalar_t__ rx_mmio; } ;
struct mbox_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mbox_test_device* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (void*,void*,int ) ;
 int FUNC_3 (void*,scalar_t__,int ) ;
 int FUNC_4 (char*,int ,void*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct mbox_client *VAR_5, void *VAR_6)
{
 struct mbox_test_device *VAR_7 = FUNC_0(VAR_5->dev);
 unsigned long VAR_8;

 FUNC_5(&VAR_7->lock, VAR_8);
 if (VAR_7->rx_mmio) {
  FUNC_3(VAR_7->rx_buffer, VAR_7->rx_mmio, VAR_1);
  FUNC_4("Client: Received [MMIO]: ", VAR_0,
         VAR_7->rx_buffer, VAR_1);
 } else if (VAR_6) {
  FUNC_4("Client: Received [API]: ", VAR_0,
         VAR_6, VAR_1);
  FUNC_2(VAR_7->rx_buffer, VAR_6, VAR_1);
 }
 VAR_4 = 1;
 FUNC_6(&VAR_7->lock, VAR_8);

 FUNC_7(&VAR_7->waitq);

 FUNC_1(&VAR_7->async_queue, VAR_3, VAR_2);
}
