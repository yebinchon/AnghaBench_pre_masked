
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct mbox_test_device {int waitq; void* rx_buffer; void* rx_channel; int lock; int * dev; void* tx_channel; int * tx_mmio; int * rx_mmio; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,int ,int ) ;
 void* FUNC_4 (int *,struct resource*) ;
 void* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct platform_device*,struct mbox_test_device*) ;
 void* FUNC_8 (struct platform_device*,char*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int) ;
 int FUNC_10 (struct platform_device*,struct mbox_test_device*) ;
 int FUNC_11 (struct resource*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 struct mbox_test_device *VAR_7;
 struct resource *VAR_8;
 resource_size_t VAR_9;
 int VAR_10;

 VAR_7 = FUNC_5(&VAR_6->dev, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_1;


 VAR_8 = FUNC_9(VAR_6, VAR_4, 0);
 VAR_7->tx_mmio = FUNC_4(&VAR_6->dev, VAR_8);
 if (FUNC_1(VAR_7->tx_mmio) == -VAR_0) {

  VAR_9 = FUNC_11(VAR_8);
  VAR_7->tx_mmio = FUNC_3(&VAR_6->dev, VAR_8->start, VAR_9);
 } else if (FUNC_0(VAR_7->tx_mmio)) {
  VAR_7->tx_mmio = ((void*)0);
 }


 VAR_8 = FUNC_9(VAR_6, VAR_4, 1);
 VAR_7->rx_mmio = FUNC_4(&VAR_6->dev, VAR_8);
 if (FUNC_1(VAR_7->rx_mmio) == -VAR_0) {
  VAR_9 = FUNC_11(VAR_8);
  VAR_7->rx_mmio = FUNC_3(&VAR_6->dev, VAR_8->start, VAR_9);
 } else if (FUNC_0(VAR_7->rx_mmio)) {
  VAR_7->rx_mmio = VAR_7->tx_mmio;
 }

 VAR_7->tx_channel = FUNC_8(VAR_6, "tx");
 VAR_7->rx_channel = FUNC_8(VAR_6, "rx");

 if (!VAR_7->tx_channel && !VAR_7->rx_channel)
  return -VAR_2;


 if (!VAR_7->rx_channel && (VAR_7->rx_mmio != VAR_7->tx_mmio))
  VAR_7->rx_channel = VAR_7->tx_channel;

 VAR_7->dev = &VAR_6->dev;
 FUNC_10(VAR_6, VAR_7);

 FUNC_12(&VAR_7->lock);

 if (VAR_7->rx_channel) {
  VAR_7->rx_buffer = FUNC_5(&VAR_6->dev,
            VAR_5, VAR_3);
  if (!VAR_7->rx_buffer)
   return -VAR_1;
 }

 VAR_10 = FUNC_7(VAR_6, VAR_7);
 if (VAR_10)
  return VAR_10;

 FUNC_6(&VAR_7->waitq);
 FUNC_2(&VAR_6->dev, "Successfully registered\n");

 return 0;
}
