
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct as3645a {TYPE_1__* client; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (struct as3645a*,int ) ;
 int FUNC_5 (struct as3645a*,int ,int ) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,char*,char const*,int,int) ;

__attribute__((used)) static int FUNC_8(struct as3645a *VAR_7)
{
 struct device *VAR_8 = &VAR_7->client->dev;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 const char *VAR_14;

 VAR_9 = FUNC_4(VAR_7, VAR_2);
 if (VAR_9 < 0) {
  FUNC_6(VAR_8, "can't read design info reg\n");
  return VAR_9;
 }

 VAR_10 = FUNC_0(VAR_9);
 VAR_11 = FUNC_1(VAR_9);

 VAR_9 = FUNC_4(VAR_7, VAR_5);
 if (VAR_9 < 0) {
  FUNC_6(VAR_8, "can't read version control reg\n");
  return VAR_9;
 }

 VAR_12 = FUNC_2(VAR_9);
 VAR_13 = FUNC_3(VAR_9);


 if (VAR_11 != 0x01 || VAR_12 != 0x00) {
  FUNC_6(VAR_8, "AS3645A not detected (model %d rfu %d)\n",
   VAR_11, VAR_12);
  return -VAR_6;
 }

 switch (VAR_10) {
 case 1:
  VAR_14 = "AMS, Austria Micro Systems";
  break;
 case 2:
  VAR_14 = "ADI, Analog Devices Inc.";
  break;
 case 3:
  VAR_14 = "NSC, National Semiconductor";
  break;
 case 4:
  VAR_14 = "NXP";
  break;
 case 5:
  VAR_14 = "TI, Texas Instrument";
  break;
 default:
  VAR_14 = "Unknown";
 }

 FUNC_7(VAR_8, "Chip vendor: %s (%d) Version: %d\n", VAR_14,
   VAR_10, VAR_13);

 VAR_9 = FUNC_5(VAR_7, VAR_3, VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 return FUNC_5(VAR_7, VAR_1, VAR_0);
}
