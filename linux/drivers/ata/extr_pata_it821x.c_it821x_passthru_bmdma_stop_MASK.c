
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct it821x_dev {scalar_t__* mwdma; int * pio; } ;
struct ata_queued_cmd {struct ata_device* dev; struct ata_port* ap; } ;
struct ata_port {struct it821x_dev* private_data; } ;
struct ata_device {int devno; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct ata_port*,struct ata_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;
 struct ata_device *VAR_3 = VAR_1->dev;
 struct it821x_dev *VAR_4 = VAR_2->private_data;
 int VAR_5 = VAR_3->devno;

 FUNC_0(VAR_1);
 if (VAR_4->mwdma[VAR_5] != VAR_0)
  FUNC_1(VAR_2, VAR_3, VAR_4->pio[VAR_5]);
}
