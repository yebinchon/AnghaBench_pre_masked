
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int last_ctl; int ctl; int sff_pio_task; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;

void FUNC_1(struct ata_port *VAR_2)
{
 FUNC_0(&VAR_2->sff_pio_task, VAR_1);
 VAR_2->ctl = VAR_0;
 VAR_2->last_ctl = 0xFF;
}
