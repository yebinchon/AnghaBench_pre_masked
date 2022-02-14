
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mpc52xx_ata_priv {TYPE_2__* dmatsk; } ;
struct ata_queued_cmd {struct ata_port* ap; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_4__ {int tasknum; } ;
struct TYPE_3__ {struct mpc52xx_ata_priv* private_data; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ata_queued_cmd *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->ap;
 struct mpc52xx_ata_priv *VAR_2 = VAR_1->host->private_data;

 FUNC_1(VAR_2->dmatsk->tasknum, VAR_2->dmatsk->tasknum);
 FUNC_0(VAR_2->dmatsk);
}
