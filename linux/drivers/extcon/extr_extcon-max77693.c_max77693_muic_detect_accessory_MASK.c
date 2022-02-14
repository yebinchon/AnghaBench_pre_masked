
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max77693_muic_info {int mutex; int dev; int status; TYPE_1__* max77693; } ;
struct TYPE_2__ {int regmap_muic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct max77693_muic_info*) ;
 int FUNC_2 (struct max77693_muic_info*) ;
 int FUNC_3 (struct max77693_muic_info*,int ,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct max77693_muic_info *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8;
 bool VAR_9;

 FUNC_4(&VAR_5->mutex);


 VAR_6 = FUNC_6(VAR_5->max77693->regmap_muic,
   VAR_4, VAR_5->status, 2);
 if (VAR_6) {
  FUNC_0(VAR_5->dev, "failed to read MUIC register\n");
  FUNC_5(&VAR_5->mutex);
  return VAR_6;
 }

 VAR_7 = FUNC_3(VAR_5, VAR_0,
     &VAR_9);
 if (VAR_9 && VAR_7 != VAR_3) {
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6 < 0) {
   FUNC_0(VAR_5->dev, "Cannot detect accessory\n");
   FUNC_5(&VAR_5->mutex);
   return VAR_6;
  }
 }

 VAR_8 = FUNC_3(VAR_5, VAR_1,
     &VAR_9);
 if (VAR_9 && VAR_8 != VAR_2) {
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6 < 0) {
   FUNC_0(VAR_5->dev, "Cannot detect charger accessory\n");
   FUNC_5(&VAR_5->mutex);
   return VAR_6;
  }
 }

 FUNC_5(&VAR_5->mutex);

 return 0;
}
