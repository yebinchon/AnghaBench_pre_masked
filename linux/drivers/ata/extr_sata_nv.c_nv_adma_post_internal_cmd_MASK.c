
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv_adma_port_priv {int flags; } ;
struct ata_queued_cmd {TYPE_1__* ap; } ;
struct TYPE_2__ {struct nv_adma_port_priv* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_queued_cmd*) ;

__attribute__((used)) static void FUNC_1(struct ata_queued_cmd *VAR_1)
{
 struct nv_adma_port_priv *VAR_2 = VAR_1->ap->private_data;

 if (VAR_2->flags & VAR_0)
  FUNC_0(VAR_1);
}
