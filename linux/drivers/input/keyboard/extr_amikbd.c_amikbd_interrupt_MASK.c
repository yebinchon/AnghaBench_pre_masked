
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned char sdr; int cra; } ;


 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct input_dev*,unsigned char,unsigned char) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct input_dev *VAR_5 = VAR_4;
 unsigned char VAR_6, VAR_7;

 VAR_6 = ~VAR_2.sdr;
 VAR_2.cra |= 0x40;
 FUNC_3(85);
 VAR_2.cra &= ~0x40;

 VAR_7 = !(VAR_6 & 1);
 VAR_6 >>= 1;

 if (VAR_6 < 0x78) {
  if (VAR_6 == 98) {
   FUNC_0(VAR_5, VAR_6, 1);
   FUNC_0(VAR_5, VAR_6, 0);
  } else {
   FUNC_0(VAR_5, VAR_6, VAR_7);
  }

  FUNC_1(VAR_5);
 } else
  FUNC_2(VAR_1[VAR_6 - 0x78]);

 return VAR_0;
}
