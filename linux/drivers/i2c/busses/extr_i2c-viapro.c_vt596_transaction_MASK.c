
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(u8 VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;

 FUNC_5("Transaction (pre)", VAR_8);


 if ((VAR_9 = FUNC_2(VAR_6)) & 0x1F) {
  FUNC_0(&VAR_7.dev, "SMBus busy (0x%02x). "
   "Resetting...\n", VAR_9);

  FUNC_4(VAR_9, VAR_6);
  if ((VAR_9 = FUNC_2(VAR_6)) & 0x1F) {
   FUNC_1(&VAR_7.dev, "SMBus reset failed! "
    "(0x%02x)\n", VAR_9);
   return -VAR_0;
  }
 }


 FUNC_4(0x40 | VAR_8, VAR_5);


 do {
  FUNC_3(1);
  VAR_9 = FUNC_2(VAR_6);
 } while ((VAR_9 & 0x01) && (++VAR_11 < VAR_4));


 if (VAR_11 == VAR_4) {
  VAR_10 = -VAR_3;
  FUNC_1(&VAR_7.dev, "SMBus timeout!\n");
 }

 if (VAR_9 & 0x10) {
  VAR_10 = -VAR_1;
  FUNC_1(&VAR_7.dev, "Transaction failed (0x%02x)\n",
   VAR_8);
 }

 if (VAR_9 & 0x08) {
  VAR_10 = -VAR_1;
  FUNC_1(&VAR_7.dev, "SMBus collision!\n");
 }

 if (VAR_9 & 0x04) {
  VAR_10 = -VAR_2;
  FUNC_0(&VAR_7.dev, "No response\n");
 }


 if (VAR_9 & 0x1F)
  FUNC_4(VAR_9, VAR_6);

 FUNC_5("Transaction (post)", VAR_8);

 return VAR_10;
}
