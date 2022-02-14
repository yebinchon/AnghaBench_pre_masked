
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
 int FUNC_0 (struct ep93xx_pata_data*,int ) ;

__attribute__((used)) static u8 FUNC_1(struct ata_port *VAR_1)
{
 struct ep93xx_pata_data *VAR_2 = VAR_1->host->private_data;

 return FUNC_0(VAR_2, VAR_0);
}
