
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct input_dev*,int ,short) ;
 int FUNC_3 (struct input_dev*,int ,short) ;
 int FUNC_4 (struct input_dev*) ;
 scalar_t__ FUNC_5 (int ) ;
 short VAR_8 ;
 short VAR_9 ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_10, void *VAR_11)
{
 struct input_dev *VAR_12 = VAR_11;
 short VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_13 = (short) FUNC_5(VAR_3);
 VAR_14 = (short) FUNC_5(VAR_4);
 VAR_17 = (short) (FUNC_1(FUNC_0(0xe0310000)) ^ 0x70);

 VAR_15 = VAR_13 - VAR_8;
 VAR_16 = VAR_14 - VAR_9;

 VAR_8 = VAR_13;
 VAR_9 = VAR_14;

 FUNC_3(VAR_12, VAR_6, VAR_15);
 FUNC_3(VAR_12, VAR_7, -VAR_16);

 FUNC_2(VAR_12, VAR_0, VAR_17 & 0x40);
 FUNC_2(VAR_12, VAR_1, VAR_17 & 0x20);
 FUNC_2(VAR_12, VAR_2, VAR_17 & 0x10);

 FUNC_4(VAR_12);

 return VAR_5;
}
