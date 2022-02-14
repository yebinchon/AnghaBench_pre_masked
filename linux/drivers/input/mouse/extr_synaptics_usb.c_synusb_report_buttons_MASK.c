
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synusb {int* data; struct input_dev* input; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct synusb *VAR_3)
{
 struct input_dev *VAR_4 = VAR_3->input;

 FUNC_0(VAR_4, VAR_0, VAR_3->data[1] & 0x04);
 FUNC_0(VAR_4, VAR_2, VAR_3->data[1] & 0x01);
 FUNC_0(VAR_4, VAR_1, VAR_3->data[1] & 0x02);
}
