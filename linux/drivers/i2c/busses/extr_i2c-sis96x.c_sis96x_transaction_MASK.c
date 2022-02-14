
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
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(int VAR_9)
{
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;

 FUNC_0(&VAR_8.dev, "SMBus transaction %d\n", VAR_9);


 if (((VAR_10 = FUNC_2(VAR_5)) & 0x03) != 0x00) {

  FUNC_0(&VAR_8.dev, "SMBus busy (0x%02x). "
   "Resetting...\n", VAR_10);


  FUNC_3(VAR_6, 0x20);


  if (((VAR_10 = FUNC_2(VAR_5)) & 0x03) != 0x00) {
   FUNC_0(&VAR_8.dev, "Failed (0x%02x)\n", VAR_10);
   return -VAR_0;
  } else {
   FUNC_0(&VAR_8.dev, "Successful\n");
  }
 }


 FUNC_3(VAR_5, 0x20);


 VAR_10 = FUNC_2(VAR_7);
 FUNC_3(VAR_7, VAR_10 & 0x1e);


 FUNC_3(VAR_6, 0x10 | (VAR_9 & 0x07));


 do {
  FUNC_1(1);
  VAR_10 = FUNC_2(VAR_7);
 } while (!(VAR_10 & 0x0e) && (VAR_12++ < VAR_4));


 if (VAR_12 > VAR_4) {
  FUNC_0(&VAR_8.dev, "SMBus Timeout! (0x%02x)\n", VAR_10);
  VAR_11 = -VAR_3;
 }


 if (VAR_10 & 0x02) {
  FUNC_0(&VAR_8.dev, "Failed bus transaction!\n");
  VAR_11 = -VAR_2;
 }


 if (VAR_10 & 0x04) {
  FUNC_0(&VAR_8.dev, "Bus collision!\n");
  VAR_11 = -VAR_1;
 }


 FUNC_3(VAR_7, VAR_10);
 if ((VAR_10 = FUNC_2(VAR_7))) {
  FUNC_0(&VAR_8.dev, "Failed reset at "
   "end of transaction! (0x%02x)\n", VAR_10);
 }

 return VAR_11;
}
