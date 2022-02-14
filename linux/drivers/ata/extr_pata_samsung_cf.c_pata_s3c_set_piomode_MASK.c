
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct s3c_ide_info {scalar_t__ ide_addr; int clk; } ;
struct ata_timing {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct ata_device {int pio_mode; } ;
struct TYPE_2__ {struct s3c_ide_info* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_device*,int ,struct ata_timing*,int,int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct s3c_ide_info*,struct ata_timing*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct ata_port *VAR_3, struct ata_device *VAR_4)
{
 struct s3c_ide_info *VAR_5 = VAR_3->host->private_data;
 struct ata_timing VAR_6;
 int VAR_7;
 ulong VAR_8 = FUNC_4(VAR_5->ide_addr + VAR_0);
 ulong VAR_9;


 if (FUNC_0(VAR_4))
  VAR_8 |= VAR_1;
 else
  VAR_8 &= ~VAR_1;

 VAR_7 = (int)(1000000000UL / FUNC_2(VAR_5->clk));

 FUNC_1(VAR_4, VAR_4->pio_mode, &VAR_6,
     VAR_7 * 1000, 0);

 VAR_9 = FUNC_3(VAR_5, &VAR_6);

 FUNC_5(VAR_8, VAR_5->ide_addr + VAR_0);
 FUNC_5(VAR_9, VAR_5->ide_addr + VAR_2);
}
