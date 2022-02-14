
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
 int VAR_4 ;
 int FUNC_0 (struct input_dev*,int ,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct wacom_wac *VAR_5)
{
 struct input_dev *VAR_6 = VAR_5->pad_input;
 unsigned char *VAR_7 = VAR_5->data;

 int VAR_8 = VAR_7[282] | ((VAR_7[281] & 0x40) << 2);
 int VAR_9 = VAR_7[285] & 0x7F;
 bool VAR_10 = VAR_7[285] & 0x80;
 bool VAR_11 = VAR_8 || VAR_10;


 VAR_9 = 71 - VAR_9;
 VAR_9 += 3*72/16;
 if (VAR_9 > 71)
  VAR_9 -= 72;

 FUNC_4(VAR_6, 9, VAR_8);

 FUNC_1(VAR_6, VAR_1, VAR_10 ? VAR_9 : 0);

 FUNC_2(VAR_6, VAR_5->tool[1], VAR_11 ? 1 : 0);
 FUNC_1(VAR_6, VAR_0, VAR_11 ? VAR_4 : 0);
 FUNC_0(VAR_6, VAR_2, VAR_3, 0xffffffff);

 FUNC_3(VAR_6);
}
