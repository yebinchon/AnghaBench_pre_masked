
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {struct input_absinfo* absinfo; } ;
struct input_absinfo {int maximum; int minimum; } ;
struct hid_usage {size_t code; } ;



__attribute__((used)) static int FUNC_0(struct input_dev *VAR_0, struct hid_usage *VAR_1,
     int VAR_2, int VAR_3, int VAR_4)
{
 struct input_absinfo *VAR_5 = &VAR_0->absinfo[VAR_1->code];
 int VAR_6 = (VAR_5->maximum - VAR_5->minimum + 1);

 VAR_2 += VAR_3*VAR_6/VAR_4;
 if (VAR_2 > VAR_5->maximum)
  VAR_2 -= VAR_6;
 else if (VAR_2 < VAR_5->minimum)
  VAR_2 += VAR_6;
 return VAR_2;
}
