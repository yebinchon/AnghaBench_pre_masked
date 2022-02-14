
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct it821x_dev {scalar_t__* mwdma; scalar_t__* udma; scalar_t__ timing10; } ;
struct ata_queued_cmd {struct ata_device* dev; struct ata_port* ap; } ;
struct ata_port {struct it821x_dev* private_data; } ;
struct ata_device {int devno; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct ata_port*,struct ata_device*,scalar_t__) ;
 int FUNC_2 (struct ata_port*,struct ata_device*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ata_queued_cmd *VAR_2)
{
 struct ata_port *VAR_3 = VAR_2->ap;
 struct ata_device *VAR_4 = VAR_2->dev;
 struct it821x_dev *VAR_5 = VAR_3->private_data;
 int VAR_6 = VAR_4->devno;

 if (VAR_5->mwdma[VAR_6] != VAR_0)
  FUNC_1(VAR_3, VAR_4, VAR_5->mwdma[VAR_6]);
 else if (VAR_5->udma[VAR_6] != VAR_1 && VAR_5->timing10)
  FUNC_2(VAR_3, VAR_4, VAR_5->udma[VAR_6]);
 FUNC_0(VAR_2);
}
