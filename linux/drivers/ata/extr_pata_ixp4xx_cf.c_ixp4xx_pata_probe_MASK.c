
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct ixp4xx_pata_data {int cs1_bits; int * cs1_cfg; int cs0_bits; int * cs0_cfg; void* cs1; void* cs0; } ;
struct ata_port {int flags; int pio_mask; int * ops; } ;
struct ata_host {struct ata_port** ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ata_host*,unsigned int,int ,int ,int *) ;
 struct ata_host* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_7 ;
 struct ixp4xx_pata_data* FUNC_4 (int *) ;
 void* FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (unsigned int,int ) ;
 int VAR_8 ;
 int FUNC_8 (struct ata_port*,struct ixp4xx_pata_data*,int ,int ) ;
 int VAR_9 ;
 unsigned int FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_10)
{
 unsigned int VAR_11;
 struct resource *VAR_12, *VAR_13;
 struct ata_host *VAR_14;
 struct ata_port *VAR_15;
 struct ixp4xx_pata_data *VAR_16 = FUNC_4(&VAR_10->dev);
 int VAR_17;

 VAR_12 = FUNC_10(VAR_10, VAR_5, 0);
 VAR_13 = FUNC_10(VAR_10, VAR_5, 1);

 if (!VAR_12 || !VAR_13)
  return -VAR_3;


 VAR_14 = FUNC_2(&VAR_10->dev, 1);
 if (!VAR_14)
  return -VAR_4;


 VAR_17 = FUNC_6(&VAR_10->dev, FUNC_0(32));
 if (VAR_17)
  return VAR_17;

 VAR_16->cs0 = FUNC_5(&VAR_10->dev, VAR_12->start, 0x1000);
 VAR_16->cs1 = FUNC_5(&VAR_10->dev, VAR_13->start, 0x1000);

 if (!VAR_16->cs0 || !VAR_16->cs1)
  return -VAR_4;

 VAR_11 = FUNC_9(VAR_10, 0);
 if (VAR_11)
  FUNC_7(VAR_11, VAR_6);


 *VAR_16->cs0_cfg = VAR_16->cs0_bits;
 *VAR_16->cs1_cfg = VAR_16->cs1_bits;

 VAR_15 = VAR_14->ports[0];

 VAR_15->ops = &VAR_8;
 VAR_15->pio_mask = VAR_1;
 VAR_15->flags |= VAR_0;

 FUNC_8(VAR_15, VAR_16, VAR_12->start, VAR_13->start);

 FUNC_3(&VAR_10->dev, VAR_2);


 return FUNC_1(VAR_14, VAR_11, VAR_7, 0, &VAR_9);
}
