
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_dev {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {unsigned short joy0dat; unsigned short potgor; } ;
struct TYPE_3__ {int pra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_0 (struct input_dev*,int ,unsigned short) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_10, void *VAR_11)
{
 struct input_dev *VAR_12 = VAR_11;
 unsigned short VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_13 = VAR_6.joy0dat;

 VAR_15 = VAR_13 & 0xff;
 VAR_16 = VAR_13 >> 8;

 VAR_17 = VAR_15 - VAR_7;
 VAR_18 = VAR_16 - VAR_8;

 if (VAR_17 < -127) VAR_17 = (256 + VAR_15) - VAR_7;
 if (VAR_17 > 127) VAR_17 = (VAR_15 - 256) - VAR_7;
 if (VAR_18 < -127) VAR_18 = (256 + VAR_16) - VAR_8;
 if (VAR_18 > 127) VAR_18 = (VAR_16 - 256) - VAR_8;

 VAR_7 = VAR_15;
 VAR_8 = VAR_16;

 VAR_14 = VAR_6.potgor;

 FUNC_1(VAR_12, VAR_4, VAR_17);
 FUNC_1(VAR_12, VAR_5, VAR_18);

 FUNC_0(VAR_12, VAR_0, VAR_9.pra & 0x40);
 FUNC_0(VAR_12, VAR_1, VAR_14 & 0x0100);
 FUNC_0(VAR_12, VAR_2, VAR_14 & 0x0400);

 FUNC_2(VAR_12);

 return VAR_3;
}
