
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_muic_info {int dev; int edev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct max77693_muic_info*,int ,int*) ;
 int FUNC_3 (struct max77693_muic_info*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct max77693_muic_info *VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;
 bool VAR_11;

 VAR_9 = FUNC_2(VAR_8,
    VAR_5, &VAR_11);

 switch (VAR_9) {
 case 129:
 case 128:

  VAR_10 = FUNC_3(VAR_8, VAR_7,
      VAR_11);
  if (VAR_10 < 0)
   return VAR_10;
  FUNC_1(VAR_8->edev, VAR_4, VAR_11);
  break;
 case 132:

  VAR_10 = FUNC_3(VAR_8, VAR_6,
      VAR_11);
  if (VAR_10 < 0)
   return VAR_10;
  FUNC_1(VAR_8->edev, VAR_3, VAR_11);
  FUNC_1(VAR_8->edev, VAR_1,
     VAR_11);
  break;
 case 131:
 case 130:

  FUNC_1(VAR_8->edev, VAR_2, VAR_11);
  break;
 default:
  FUNC_0(VAR_8->dev, "failed to detect %s cable of gnd type\n",
   VAR_11 ? "attached" : "detached");
  return -VAR_0;
 }

 return 0;
}
