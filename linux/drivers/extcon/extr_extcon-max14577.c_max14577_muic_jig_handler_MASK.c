
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max14577_muic_info {int edev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct max14577_muic_info*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct max14577_muic_info *VAR_5,
  int VAR_6, bool VAR_7)
{
 int VAR_8 = 0;
 u8 VAR_9 = VAR_0;

 FUNC_0(VAR_5->dev,
  "external connector is %s (adc:0x%02x)\n",
  VAR_7 ? "attached" : "detached", VAR_6);

 switch (VAR_6) {
 case 129:
 case 128:

  VAR_9 = VAR_2;
  break;
 case 130:

  VAR_9 = VAR_1;
  break;
 default:
  FUNC_1(VAR_5->dev, "failed to detect %s jig cable\n",
   VAR_7 ? "attached" : "detached");
  return -VAR_3;
 }

 VAR_8 = FUNC_3(VAR_5, VAR_9, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_2(VAR_5->edev, VAR_4, VAR_7);

 return 0;
}
