
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {struct input_absinfo* absinfo; int dev; int absbit; } ;
struct input_absinfo {int minimum; int maximum; int fuzz; } ;


 int FUNC_0 (int *,char*,unsigned long) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_0,
       unsigned long VAR_1,
       int VAR_2, int VAR_3, int VAR_4)
{
 struct input_absinfo *VAR_5;

 if (!FUNC_1(VAR_1, VAR_0->absbit)) {
  FUNC_0(&VAR_0->dev,
    "DT specifies parameters but the axis %lu is not set up\n",
    VAR_1);
  return;
 }

 VAR_5 = &VAR_0->absinfo[VAR_1];
 VAR_5->minimum = VAR_2;
 VAR_5->maximum = VAR_3;
 VAR_5->fuzz = VAR_4;
}
