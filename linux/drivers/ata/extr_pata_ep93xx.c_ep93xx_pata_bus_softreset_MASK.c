
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ep93xx_pata_data {int dummy; } ;
struct ata_port {int ctl; int last_ctl; int link; TYPE_1__* host; } ;
struct TYPE_2__ {struct ep93xx_pata_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned int,unsigned long) ;
 int FUNC_1 (struct ep93xx_pata_data*,int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ata_port *VAR_2, unsigned int VAR_3,
         unsigned long VAR_4)
{
 struct ep93xx_pata_data *VAR_5 = VAR_2->host->private_data;

 FUNC_1(VAR_5, VAR_2->ctl, VAR_1);
 FUNC_2(20);
 FUNC_1(VAR_5, VAR_2->ctl | VAR_0, VAR_1);
 FUNC_2(20);
 FUNC_1(VAR_5, VAR_2->ctl, VAR_1);
 VAR_2->last_ctl = VAR_2->ctl;

 return FUNC_0(&VAR_2->link, VAR_3, VAR_4);
}
