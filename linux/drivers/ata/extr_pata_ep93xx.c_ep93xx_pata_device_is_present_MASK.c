
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ep93xx_pata_data {int dummy; } ;
struct ata_port {TYPE_2__* ops; TYPE_1__* host; } ;
struct TYPE_4__ {int (* sff_dev_select ) (struct ata_port*,unsigned int) ;} ;
struct TYPE_3__ {struct ep93xx_pata_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ep93xx_pata_data*,int ) ;
 int FUNC_1 (struct ep93xx_pata_data*,int,int ) ;
 int FUNC_2 (struct ata_port*,unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct ata_port *VAR_2,
       unsigned int VAR_3)
{
 struct ep93xx_pata_data *VAR_4 = VAR_2->host->private_data;
 u8 VAR_5, VAR_6;

 VAR_2->ops->sff_dev_select(VAR_2, VAR_3);

 FUNC_1(VAR_4, 0x55, VAR_1);
 FUNC_1(VAR_4, 0xaa, VAR_0);

 FUNC_1(VAR_4, 0xaa, VAR_1);
 FUNC_1(VAR_4, 0x55, VAR_0);

 FUNC_1(VAR_4, 0x55, VAR_1);
 FUNC_1(VAR_4, 0xaa, VAR_0);

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 VAR_6 = FUNC_0(VAR_4, VAR_0);

 if ((VAR_5 == 0x55) && (VAR_6 == 0xaa))
  return 1;

 return 0;
}
