
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fsi_master_acf {int dev; scalar_t__ sram; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct fsi_master_acf *VAR_7)
{
 char VAR_8[52];
 char *VAR_9;
 int VAR_10;

 FUNC_0(VAR_7->dev,
  "CMDSTAT:%08x RTAG=%02x RCRC=%02x RDATA=%02x #INT=%08x\n",
  FUNC_1(VAR_7->sram + VAR_0),
  FUNC_2(VAR_7->sram + VAR_4),
  FUNC_2(VAR_7->sram + VAR_3),
  FUNC_1(VAR_7->sram + VAR_2),
  FUNC_1(VAR_7->sram + VAR_1));

 for (VAR_10 = 0; VAR_10 < 512; VAR_10++) {
  uint8_t VAR_11;
  if ((VAR_10 % 16) == 0)
   VAR_9 = VAR_8;
  VAR_11 = FUNC_2(VAR_7->sram + VAR_5 + VAR_10);
  VAR_9 += FUNC_3(VAR_9, "%02x ", VAR_11);
  if (((VAR_10 % 16) == 15) || VAR_11 == VAR_6)
   FUNC_0(VAR_7->dev, "%s\n", VAR_8);
  if (VAR_11 == VAR_6)
   break;
 }
}
