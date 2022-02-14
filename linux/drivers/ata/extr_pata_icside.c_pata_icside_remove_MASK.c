
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pata_icside_state {scalar_t__ dma; } ;
struct expansion_card {int dummy; } ;
struct ata_host {struct pata_icside_state* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ata_host*) ;
 struct ata_host* FUNC_1 (struct expansion_card*) ;
 int FUNC_2 (struct expansion_card*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct expansion_card*) ;

__attribute__((used)) static void FUNC_5(struct expansion_card *VAR_1)
{
 struct ata_host *VAR_2 = FUNC_1(VAR_1);
 struct pata_icside_state *VAR_3 = VAR_2->private_data;

 FUNC_0(VAR_2);

 FUNC_4(VAR_1);





 if (VAR_3->dma != VAR_0)
  FUNC_3(VAR_3->dma);

 FUNC_2(VAR_1);
}
