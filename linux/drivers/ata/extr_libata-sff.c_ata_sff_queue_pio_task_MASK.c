
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int sff_pio_task; struct ata_link* sff_pio_task_link; } ;
struct ata_link {struct ata_port* ap; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (unsigned long) ;

void FUNC_3(struct ata_link *VAR_0, unsigned long VAR_1)
{
 struct ata_port *VAR_2 = VAR_0->ap;

 FUNC_0((VAR_2->sff_pio_task_link != ((void*)0)) &&
  (VAR_2->sff_pio_task_link != VAR_0));
 VAR_2->sff_pio_task_link = VAR_0;


 FUNC_1(&VAR_2->sff_pio_task, FUNC_2(VAR_1));
}
