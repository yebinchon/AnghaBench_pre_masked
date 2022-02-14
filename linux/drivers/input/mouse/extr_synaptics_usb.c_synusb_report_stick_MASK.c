
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synusb {unsigned int* data; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
typedef int s16 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct input_dev*,int ,unsigned int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct synusb*) ;

__attribute__((used)) static void FUNC_5(struct synusb *VAR_3)
{
 struct input_dev *VAR_4 = VAR_3->input;
 int VAR_5, VAR_6;
 unsigned int VAR_7;

 VAR_7 = VAR_3->data[6];
 VAR_5 = (s16)(FUNC_0((__be16 *)&VAR_3->data[2]) << 3) >> 7;
 VAR_6 = (s16)(FUNC_0((__be16 *)&VAR_3->data[4]) << 3) >> 7;

 if (VAR_7 > 0) {
  FUNC_2(VAR_4, VAR_1, VAR_5);
  FUNC_2(VAR_4, VAR_2, -VAR_6);
 }

 FUNC_1(VAR_4, VAR_0, VAR_7);

 FUNC_4(VAR_3);

 FUNC_3(VAR_4);
}
