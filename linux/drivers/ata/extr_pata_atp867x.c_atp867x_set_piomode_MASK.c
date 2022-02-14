
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct atp867x_priv {int eightb_piospd; int mstr_piospd; int slave_piospd; int dma_mode; } ;
struct ata_timing {int rec8b; int act8b; int recover; int active; } ;
struct ata_port {struct atp867x_priv* private_data; } ;
struct ata_device {int pio_mode; int devno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ata_device* FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_device*,int,struct ata_timing*,int,int) ;
 int FUNC_2 (struct ata_timing*,struct ata_timing*,struct ata_timing*,int ) ;
 int FUNC_3 (struct ata_port*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct ata_port *VAR_3, struct ata_device *VAR_4)
{
 struct ata_device *VAR_5 = FUNC_0(VAR_4);
 struct atp867x_priv *VAR_6 = VAR_3->private_data;
 u8 VAR_7 = VAR_4->pio_mode;
 struct ata_timing VAR_8, VAR_9;
 int VAR_10, VAR_11;
 u8 VAR_12;

 VAR_10 = 1000000000 / 33333;
 VAR_11 = VAR_10 / 4;

 FUNC_1(VAR_4, VAR_7, &VAR_8, VAR_10, VAR_11);
 if (VAR_5 && VAR_5->pio_mode) {
  FUNC_1(VAR_5, VAR_5->pio_mode, &VAR_9, VAR_10, VAR_11);
  FUNC_2(&VAR_9, &VAR_8, &VAR_8, VAR_0);
 }

 VAR_12 = FUNC_5(VAR_6->dma_mode);
 if (VAR_4->devno & 1)
  VAR_12 = (VAR_12 & ~VAR_2);
 else
  VAR_12 = (VAR_12 & ~VAR_1);
 FUNC_6(VAR_12, VAR_6->dma_mode);

 VAR_12 = FUNC_3(VAR_3, VAR_8.active) |
     FUNC_4(VAR_8.recover);

 if (VAR_4->devno & 1)
  FUNC_6(VAR_12, VAR_6->slave_piospd);
 else
  FUNC_6(VAR_12, VAR_6->mstr_piospd);

 VAR_12 = FUNC_3(VAR_3, VAR_8.act8b) |
     FUNC_4(VAR_8.rec8b);

 FUNC_6(VAR_12, VAR_6->eightb_piospd);
}
