
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ep93xx_pata_data {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {struct ep93xx_pata_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ep93xx_pata_data*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_3, unsigned int VAR_4)
{
 struct ep93xx_pata_data *VAR_5 = VAR_3->host->private_data;
 u8 VAR_6 = VAR_1;

 if (VAR_4 != 0)
  VAR_6 |= VAR_0;

 FUNC_1(VAR_5, VAR_6, VAR_2);
 FUNC_0(VAR_3);
}
