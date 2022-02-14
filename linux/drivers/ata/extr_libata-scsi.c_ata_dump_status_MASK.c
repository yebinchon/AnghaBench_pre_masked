
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_taskfile {int command; int feature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(unsigned VAR_14, struct ata_taskfile *VAR_15)
{
 u8 VAR_16 = VAR_15->command, VAR_17 = VAR_15->feature;

 FUNC_1("ata%u: status=0x%02x { ", VAR_14, VAR_16);
 if (VAR_16 & VAR_2) {
  FUNC_0("Busy }\n");
 } else {
  if (VAR_16 & VAR_5) FUNC_0("DriveReady ");
  if (VAR_16 & VAR_4) FUNC_0("DeviceFault ");
  if (VAR_16 & VAR_7) FUNC_0("SeekComplete ");
  if (VAR_16 & VAR_6) FUNC_0("DataRequest ");
  if (VAR_16 & VAR_3) FUNC_0("CorrectedError ");
  if (VAR_16 & VAR_11) FUNC_0("Sense ");
  if (VAR_16 & VAR_8) FUNC_0("Error ");
  FUNC_0("}\n");

  if (VAR_17) {
   FUNC_1("ata%u: error=0x%02x { ", VAR_14, VAR_17);
   if (VAR_17 & VAR_0) FUNC_0("DriveStatusError ");
   if (VAR_17 & VAR_9) {
    if (VAR_17 & VAR_0)
      FUNC_0("BadCRC ");
    else FUNC_0("Sector ");
   }
   if (VAR_17 & VAR_13) FUNC_0("UncorrectableError ");
   if (VAR_17 & VAR_10) FUNC_0("SectorIdNotFound ");
   if (VAR_17 & VAR_12) FUNC_0("TrackZeroNotFound ");
   if (VAR_17 & VAR_1) FUNC_0("AddrMarkNotFound ");
   FUNC_0("}\n");
  }
 }
}
