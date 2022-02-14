
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ep93xx_pata_data {int t; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {struct ep93xx_pata_data* private_data; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ata_port *VAR_1)
{
 struct ep93xx_pata_data *VAR_2 = VAR_1->host->private_data;





 VAR_2->t = *FUNC_0(VAR_0);
 return 0;
}
