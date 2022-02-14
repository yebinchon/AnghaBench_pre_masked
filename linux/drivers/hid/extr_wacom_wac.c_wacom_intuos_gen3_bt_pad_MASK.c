
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_wac {unsigned char* data; int * tool; struct input_dev* pad_input; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct wacom_wac *VAR_4)
{
 struct input_dev *VAR_5 = VAR_4->pad_input;
 unsigned char *VAR_6 = VAR_4->data;

 int VAR_7 = VAR_6[44];

 FUNC_4(VAR_5, 4, VAR_7);

 FUNC_2(VAR_5, VAR_4->tool[1], VAR_7 ? 1 : 0);
 FUNC_1(VAR_5, VAR_0, VAR_7 ? VAR_3 : 0);
 FUNC_0(VAR_5, VAR_1, VAR_2, 0xffffffff);

 FUNC_3(VAR_5);
}
