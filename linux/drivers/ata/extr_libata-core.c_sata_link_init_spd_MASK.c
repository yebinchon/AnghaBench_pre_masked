
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_link {int saved_scontrol; int hw_sata_spd_limit; int sata_spd_limit; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_link*) ;
 int FUNC_1 (struct ata_link*,int ,int*) ;

int FUNC_2(struct ata_link *VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, &VAR_1->saved_scontrol);
 if (VAR_3)
  return VAR_3;

 VAR_2 = (VAR_1->saved_scontrol >> 4) & 0xf;
 if (VAR_2)
  VAR_1->hw_sata_spd_limit &= (1 << VAR_2) - 1;

 FUNC_0(VAR_1);

 VAR_1->sata_spd_limit = VAR_1->hw_sata_spd_limit;

 return 0;
}
