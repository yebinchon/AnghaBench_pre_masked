
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;


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
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 TYPE_1__ VAR_11 ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;

 FUNC_0(&VAR_11.dev, "Transaction (pre): CNT=%02x, CMD=%02x, "
  "ADD=%02x, DAT0=%02x, DAT1=%02x\n", FUNC_2(VAR_7),
  FUNC_2(VAR_6), FUNC_2(VAR_5), FUNC_2(VAR_8),
  FUNC_2(VAR_9));


 VAR_12 = FUNC_2(VAR_10) & 0x0f;
 if (VAR_12) {

  if (VAR_12 & 0x01) {
   FUNC_0(&VAR_11.dev, "Completion (%02x). "
    "Clear...\n", VAR_12);
  }
  if (VAR_12 & 0x06) {
   FUNC_0(&VAR_11.dev, "SMBus error (%02x). "
    "Resetting...\n", VAR_12);
  }
  FUNC_3(VAR_12, VAR_10);
  VAR_12 = FUNC_2(VAR_10) & 0x0f;
  if (VAR_12) {
   FUNC_1(&VAR_11.dev,
    "SMBus is not ready: (%02x)\n", VAR_12);
   return -VAR_0;
  }
 }


 FUNC_3(FUNC_2(VAR_7) | 0x10, VAR_7);

 do {
  FUNC_4(100, 200);
  VAR_12 = FUNC_2(VAR_10) & 0x0f;
 } while ((VAR_12 & 0x08) && (VAR_14++ < VAR_4));


 if (VAR_14 > VAR_4) {
  FUNC_1(&VAR_11.dev, "SMBus Timeout!\n");
  VAR_13 = -VAR_3;
 }
 if (VAR_12 & 0x04) {
  VAR_13 = -VAR_1;
  FUNC_0(&VAR_11.dev, "Bus collision! SMBus may be "
   "locked until next hard reset. (sorry!)\n");

 } else if (VAR_12 & 0x02) {
  VAR_13 = -VAR_1;
  FUNC_1(&VAR_11.dev, "Error: no response!\n");
 } else if (VAR_12 & 0x01) {
  FUNC_0(&VAR_11.dev, "Post complete!\n");
  FUNC_3(VAR_12, VAR_10);
  VAR_12 = FUNC_2(VAR_10) & 0x07;
  if (VAR_12 & 0x06) {

   FUNC_0(&VAR_11.dev, "Failed reset at end of "
    "transaction (%02x), Bus error!\n", VAR_12);
  }
 } else {
  VAR_13 = -VAR_2;
  FUNC_0(&VAR_11.dev, "No such address.\n");
 }
 FUNC_0(&VAR_11.dev, "Transaction (post): CNT=%02x, CMD=%02x, "
  "ADD=%02x, DAT0=%02x, DAT1=%02x\n", FUNC_2(VAR_7),
  FUNC_2(VAR_6), FUNC_2(VAR_5), FUNC_2(VAR_8),
  FUNC_2(VAR_9));
 return VAR_13;
}
