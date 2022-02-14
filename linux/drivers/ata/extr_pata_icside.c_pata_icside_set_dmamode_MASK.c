
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pata_icside_state {TYPE_2__* port; } ;
struct ata_timing {int active; int recover; int cycle; } ;
struct ata_port {size_t port_no; TYPE_1__* host; } ;
struct ata_device {size_t devno; int dma_mode; } ;
struct TYPE_4__ {unsigned int* speed; } ;
struct TYPE_3__ {struct pata_icside_state* private_data; } ;


 int FUNC_0 (struct ata_device*,char*,int,int,int,char) ;
 scalar_t__ FUNC_1 (struct ata_device*,int ,struct ata_timing*,int,int) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_0, struct ata_device *VAR_1)
{
 struct pata_icside_state *VAR_2 = VAR_0->host->private_data;
 struct ata_timing VAR_3;
 unsigned int VAR_4;
 char VAR_5;




 if (FUNC_1(VAR_1, VAR_1->dma_mode, &VAR_3, 1000, 1))
  return;





 if (VAR_3.active <= 50 && VAR_3.recover <= 375 && VAR_3.cycle <= 425)
  VAR_5 = 'D', VAR_4 = 187;
 else if (VAR_3.active <= 125 && VAR_3.recover <= 375 && VAR_3.cycle <= 500)
  VAR_5 = 'C', VAR_4 = 250;
 else if (VAR_3.active <= 200 && VAR_3.recover <= 550 && VAR_3.cycle <= 750)
  VAR_5 = 'B', VAR_4 = 437;
 else
  VAR_5 = 'A', VAR_4 = 562;

 FUNC_0(VAR_1, "timings: act %dns rec %dns cyc %dns (%c)\n",
       VAR_3.active, VAR_3.recover, VAR_3.cycle, VAR_5);

 VAR_2->port[VAR_0->port_no].speed[VAR_1->devno] = VAR_4;
}
