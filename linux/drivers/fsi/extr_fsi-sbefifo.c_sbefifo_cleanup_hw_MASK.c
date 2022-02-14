
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sbefifo {int broken; TYPE_1__* fsi_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct sbefifo*) ;
 int FUNC_4 (struct sbefifo*,int,int*) ;
 int FUNC_5 (struct sbefifo*,int,int ) ;
 int FUNC_6 (struct sbefifo*) ;

__attribute__((used)) static int FUNC_7(struct sbefifo *VAR_7)
{
 struct device *VAR_8 = &VAR_7->fsi_dev->dev;
 u32 VAR_9, VAR_10;
 bool VAR_11 = 0;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_7);
 if (VAR_12) {
  FUNC_0(VAR_8, "SBE state=%d\n", VAR_12);
  return VAR_12;
 }


 if (VAR_7->broken)
  goto do_reset;

 VAR_12 = FUNC_4(VAR_7, VAR_6 | VAR_2, &VAR_9);
 if (VAR_12) {
  FUNC_1(VAR_8, "Cleanup: Reading UP status failed, rc=%d\n", VAR_12);


  VAR_7->broken = 1;
  return VAR_12;
 }

 VAR_12 = FUNC_4(VAR_7, VAR_0 | VAR_2, &VAR_10);
 if (VAR_12) {
  FUNC_1(VAR_8, "Cleanup: Reading DOWN status failed, rc=%d\n", VAR_12);


  VAR_7->broken = 1;
  return VAR_12;
 }


 if (VAR_10 & VAR_5) {
  FUNC_2(VAR_8, "Cleanup: FIFO reset request set, resetting\n");
  VAR_12 = FUNC_5(VAR_7, VAR_6, VAR_1);
  if (VAR_12) {
   VAR_7->broken = 1;
   FUNC_1(VAR_8, "Cleanup: Reset reg write failed, rc=%d\n", VAR_12);
   return VAR_12;
  }
  VAR_7->broken = 0;
  return 0;
 }


 if ((VAR_9 | VAR_10) & VAR_4)
  VAR_11 = 1;


 if (!((VAR_9 & VAR_10) & VAR_3))
  VAR_11 = 1;

 if (!VAR_11)
  return 0;

 FUNC_2(VAR_8, "Cleanup: FIFO not clean (up=0x%08x down=0x%08x)\n",
   VAR_9, VAR_10);

 do_reset:


 return FUNC_6(VAR_7);
}
