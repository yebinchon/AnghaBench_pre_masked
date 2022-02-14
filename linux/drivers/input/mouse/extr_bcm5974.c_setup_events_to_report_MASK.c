
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int propbit; int keybit; int evbit; } ;
struct bcm5974_config {int caps; int y; int x; int o; int w; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int ,int,int,int ) ;
 int FUNC_3 (struct input_dev*,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_18,
       const struct bcm5974_config *VAR_19)
{
 FUNC_0(VAR_10, VAR_18->evbit);


 FUNC_2(VAR_18, VAR_7, 0, 256, 5, 0);
 FUNC_2(VAR_18, VAR_8, 0, 16, 0, 0);


 FUNC_3(VAR_18, VAR_3, &VAR_19->w);
 FUNC_3(VAR_18, VAR_4, &VAR_19->w);

 FUNC_3(VAR_18, VAR_5, &VAR_19->w);
 FUNC_3(VAR_18, VAR_6, &VAR_19->w);

 FUNC_3(VAR_18, VAR_0, &VAR_19->o);

 FUNC_3(VAR_18, VAR_1, &VAR_19->x);
 FUNC_3(VAR_18, VAR_2, &VAR_19->y);

 FUNC_0(VAR_11, VAR_18->evbit);
 FUNC_0(VAR_9, VAR_18->keybit);

 if (VAR_19->caps & VAR_12)
  FUNC_0(VAR_16, VAR_18->propbit);

 FUNC_1(VAR_18, VAR_17,
  VAR_14 | VAR_13 | VAR_15);
}
