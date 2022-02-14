
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_link {int sata_spd_limit; int sata_spd; } ;
struct ata_device {int horkage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_device*,char*,int ) ;
 struct ata_link* FUNC_1 (struct ata_device*) ;
 int FUNC_2 (struct ata_link*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ata_device *VAR_2)
{
 struct ata_link *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4, VAR_5;

 if (!FUNC_2(VAR_3))
  return 0;

 if (VAR_2->horkage & VAR_0)
  VAR_4 = 1;
 else
  return 0;

 VAR_5 = (1 << VAR_4) - 1;


 if (VAR_3->sata_spd_limit <= VAR_5)
  return 0;

 VAR_3->sata_spd_limit = VAR_5;





 if (VAR_3->sata_spd > VAR_4) {
  FUNC_0(VAR_2, "applying link speed limit horkage to %s\n",
        FUNC_3(VAR_4));
  return -VAR_1;
 }
 return 0;
}
