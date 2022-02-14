
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ep93xx_pata_data {int dummy; } ;
struct ata_taskfile {int command; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {struct ep93xx_pata_data* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ep93xx_pata_data*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_1,
         const struct ata_taskfile *VAR_2)
{
 struct ep93xx_pata_data *VAR_3 = VAR_1->host->private_data;

 FUNC_1(VAR_3, VAR_2->command,
     VAR_0);
 FUNC_0(VAR_1);
}
