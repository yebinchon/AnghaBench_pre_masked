
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct cy8ctmg110 {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct cy8ctmg110*,unsigned char*,int,int ) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct cy8ctmg110 *VAR_6)
{
 struct input_dev *VAR_7 = VAR_6->input;
 unsigned char VAR_8[VAR_3];
 int VAR_9, VAR_10;

 FUNC_4(VAR_8, 0, VAR_3);


 if (FUNC_0(VAR_6, VAR_8, 9, VAR_4) != 0)
  return -VAR_5;

 VAR_10 = VAR_8[2] << 8 | VAR_8[3];
 VAR_9 = VAR_8[0] << 8 | VAR_8[1];


 if (VAR_8[8] == 0) {
  FUNC_2(VAR_7, VAR_2, 0);
 } else {
  FUNC_2(VAR_7, VAR_2, 1);
  FUNC_1(VAR_7, VAR_0, VAR_9);
  FUNC_1(VAR_7, VAR_1, VAR_10);
 }

 FUNC_3(VAR_7);

 return 0;
}
