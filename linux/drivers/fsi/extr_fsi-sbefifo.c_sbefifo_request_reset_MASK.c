
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sbefifo {int broken; TYPE_1__* fsi_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sbefifo*,int,scalar_t__*) ;
 int FUNC_4 (struct sbefifo*,int,int) ;

__attribute__((used)) static int FUNC_5(struct sbefifo *VAR_6)
{
 struct device *VAR_7 = &VAR_6->fsi_dev->dev;
 u32 VAR_8, VAR_9;
 int VAR_10;

 FUNC_0(VAR_7, "Requesting FIFO reset\n");


 VAR_6->broken = 1;


 VAR_10 = FUNC_4(VAR_6, VAR_5 | VAR_1, 1);
 if (VAR_10) {
  FUNC_1(VAR_7, "Sending reset request failed, rc=%d\n", VAR_10);
  return VAR_10;
 }


 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_10 = FUNC_3(VAR_6, VAR_5 | VAR_3, &VAR_8);
  if (VAR_10) {
   FUNC_1(VAR_7, "Failed to read UP fifo status during reset"
    " , rc=%d\n", VAR_10);
   return VAR_10;
  }

  if (!(VAR_8 & VAR_4)) {
   FUNC_0(VAR_7, "FIFO reset done\n");
   VAR_6->broken = 0;
   return 0;
  }

  FUNC_2(1);
 }
 FUNC_1(VAR_7, "FIFO reset timed out\n");

 return -VAR_0;
}
