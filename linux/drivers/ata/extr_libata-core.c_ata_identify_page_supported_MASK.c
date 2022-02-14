
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct ata_port {unsigned int* sector_buf; } ;
struct ata_device {TYPE_1__* link; } ;
struct TYPE_2__ {struct ata_port* ap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_device*,char*,unsigned int) ;
 int FUNC_1 (struct ata_device*,char*) ;
 int FUNC_2 (struct ata_device*,int ) ;
 unsigned int FUNC_3 (struct ata_device*,int ,int ,unsigned int*,int) ;

__attribute__((used)) static bool FUNC_4(struct ata_device *VAR_1, u8 VAR_2)
{
 struct ata_port *VAR_3 = VAR_1->link->ap;
 unsigned int VAR_4, VAR_5;

 if (!FUNC_2(VAR_1, VAR_0)) {
  FUNC_1(VAR_1, "ATA Identify Device Log not supported\n");
  return 0;
 }





 VAR_4 = FUNC_3(VAR_1, VAR_0, 0, VAR_3->sector_buf,
    1);
 if (VAR_4) {
  FUNC_0(VAR_1,
        "failed to get Device Identify Log Emask 0x%x\n",
        VAR_4);
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->sector_buf[8]; VAR_5++) {
  if (VAR_3->sector_buf[9 + VAR_5] == VAR_2)
   return 1;
 }

 return 0;
}
