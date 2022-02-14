
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77843_muic_info {int edev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct max77843_muic_info*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct max77843_muic_info *VAR_4,
  bool VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_4->dev, "external connector is %s (adc: 0x10)\n",
   VAR_5 ? "attached" : "detached");

 VAR_6 = FUNC_2(VAR_4, VAR_3,
         VAR_5, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_1(VAR_4->edev, VAR_0, VAR_5);
 FUNC_1(VAR_4->edev, VAR_2, VAR_5);
 FUNC_1(VAR_4->edev, VAR_1, VAR_5);

 return 0;
}
