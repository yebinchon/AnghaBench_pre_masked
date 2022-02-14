
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct eui64 {int dummy; } ;
struct bus_info {int bus_name; int irmc; int cmc; int isc; int bmc; int pmc; int cyc_clk_acc; int max_rec; int max_rom; int generation; int link_spd; int eui64; } ;
typedef int addr ;


 int VAR_0 ;
 int FUNC_0 (struct eui64*,char*,int) ;
 int FUNC_1 (int *,struct eui64*) ;
 int FUNC_2 (char*,int,int,int,int,int,int,int,int,int,int,int,char*) ;

__attribute__((used)) static void
FUNC_3(u_int32_t *VAR_1)
{
 char VAR_2[VAR_0];
 struct bus_info *VAR_3;
 struct eui64 VAR_4;

 VAR_3 = (struct bus_info *)VAR_1;
 FUNC_1(&VAR_3->eui64, &VAR_4);
 FUNC_0(&VAR_4, VAR_2, sizeof(VAR_2));
 FUNC_2("bus_name: 0x%04x\n"
  "irmc:%d cmc:%d isc:%d bmc:%d pmc:%d\n"
  "cyc_clk_acc:%d max_rec:%d max_rom:%d\n"
  "generation:%d link_spd:%d\n"
  "EUI64: %s\n",
  VAR_3->bus_name,
  VAR_3->irmc, VAR_3->cmc, VAR_3->isc, VAR_3->bmc, VAR_3->pmc,
  VAR_3->cyc_clk_acc, VAR_3->max_rec, VAR_3->max_rom,
  VAR_3->generation, VAR_3->link_spd,
  VAR_2);
}
