
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_host {int n_ports; int * ports; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(struct ata_host *VAR_1, u8 VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->n_ports; VAR_3++) {
  VAR_4 += FUNC_1(VAR_1->ports[VAR_3], VAR_2);
  VAR_2 >>= VAR_0;
 }

 return FUNC_0(VAR_4);
}
