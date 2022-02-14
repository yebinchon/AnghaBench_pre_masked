
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8997_muic_info {int* status; int dev; int edev; } ;


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
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct max8997_muic_info*,int ,int*) ;
 int FUNC_3 (struct max8997_muic_info*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct max8997_muic_info *VAR_10)
{
 int VAR_11;
 bool VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(VAR_10,
    VAR_5, &VAR_12);

 switch (VAR_11) {
 case 129:
  break;
 case 128:
  VAR_13 = VAR_10->status[0] & VAR_8;
  VAR_13 >>= VAR_9;

  if ((VAR_13 & VAR_8) == VAR_6) {
   FUNC_3(VAR_10,
     VAR_7, VAR_12);
  }
  break;
 case 130:
  FUNC_1(VAR_10->edev, VAR_1,
     VAR_12);
  break;
 case 131:
  FUNC_1(VAR_10->edev, VAR_2,
     VAR_12);
  break;
 case 132:
  FUNC_1(VAR_10->edev, VAR_4,
     VAR_12);
  break;
 case 133:
  FUNC_1(VAR_10->edev, VAR_3,
     VAR_12);
  break;
 default:
  FUNC_0(VAR_10->dev,
   "failed to detect %s unknown chg cable (type:0x%x)\n",
   VAR_12 ? "attached" : "detached", VAR_11);
  return -VAR_0;
 }

 return 0;
}
