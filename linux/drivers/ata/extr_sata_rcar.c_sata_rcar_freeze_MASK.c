
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sata_rcar_priv {scalar_t__ base; int sataint_mask; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {struct sata_rcar_priv* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_1)
{
 struct sata_rcar_priv *VAR_2 = VAR_1->host->private_data;


 FUNC_1(VAR_2->sataint_mask, VAR_2->base + VAR_0);

 FUNC_0(VAR_1);
}
