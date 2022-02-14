
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct anx78xx {int * map; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (struct anx78xx*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct anx78xx *VAR_7, u8 VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;

 FUNC_0("Handle HDMI interrupt 1: %02x\n", VAR_8);

 VAR_10 = FUNC_4(VAR_7->map[VAR_0], VAR_2,
      VAR_8);
 if (VAR_10) {
  FUNC_1("Write HDMI int 1 failed: %d\n", VAR_10);
  return;
 }

 if ((VAR_8 & VAR_1) || (VAR_8 & VAR_3)) {
  FUNC_0("IRQ: HDMI input detected\n");

  VAR_10 = FUNC_3(VAR_7->map[VAR_0],
      VAR_4, &VAR_9);
  if (VAR_10) {
   FUNC_1("Read system status reg failed: %d\n", VAR_10);
   return;
  }

  if (!(VAR_9 & VAR_5)) {
   FUNC_0("IRQ: *** Waiting for HDMI clock ***\n");
   return;
  }

  if (!(VAR_9 & VAR_6)) {
   FUNC_0("IRQ: *** Waiting for HDMI signal ***\n");
   return;
  }

  VAR_10 = FUNC_2(VAR_7);
  if (VAR_10)
   FUNC_1("Failed to start link training: %d\n", VAR_10);
 }
}
