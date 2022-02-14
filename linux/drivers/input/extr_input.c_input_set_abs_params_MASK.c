
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int absbit; int evbit; struct input_absinfo* absinfo; } ;
struct input_absinfo {int minimum; int maximum; int fuzz; int flat; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct input_dev*) ;

void FUNC_2(struct input_dev *VAR_1, unsigned int VAR_2,
     int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct input_absinfo *VAR_7;

 FUNC_1(VAR_1);
 if (!VAR_1->absinfo)
  return;

 VAR_7 = &VAR_1->absinfo[VAR_2];
 VAR_7->minimum = VAR_3;
 VAR_7->maximum = VAR_4;
 VAR_7->fuzz = VAR_5;
 VAR_7->flat = VAR_6;

 FUNC_0(VAR_0, VAR_1->evbit);
 FUNC_0(VAR_2, VAR_1->absbit);
}
