
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port_operations {int postreset; int softreset; int prereset; int * hardreset; } ;
struct ata_port {int link; struct ata_port_operations* ops; } ;
typedef int * ata_reset_fn_t ;


 int FUNC_0 (struct ata_port*,int ,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;

void FUNC_2(struct ata_port *VAR_1)
{
 struct ata_port_operations *VAR_2 = VAR_1->ops;
 ata_reset_fn_t VAR_3 = VAR_2->hardreset;


 if (VAR_3 == VAR_0 && !FUNC_1(&VAR_1->link))
  VAR_3 = ((void*)0);

 FUNC_0(VAR_1, VAR_2->prereset, VAR_2->softreset, VAR_3, VAR_2->postreset);
}
