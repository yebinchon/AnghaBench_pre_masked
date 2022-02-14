
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_4, unsigned int VAR_5,
   unsigned int VAR_6, int VAR_7)
{
 unsigned int VAR_8 = 0;
 unsigned long VAR_9;

 if (VAR_5 != VAR_1)
  return -VAR_0;

 switch (VAR_6) {
 case 129:
  if (VAR_7)
   VAR_7 = 1000;
 case 128:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_7 > 20 && VAR_7 < 32767)
  VAR_8 = VAR_2 / VAR_7;

 FUNC_3(&VAR_3, VAR_9);

 if (VAR_8) {

  FUNC_2(0xB6, 0x43);

  FUNC_2(VAR_8 & 0xff, 0x42);
  FUNC_1((VAR_8 >> 8) & 0xff, 0x42);

  FUNC_2(FUNC_0(0x61) | 3, 0x61);
 } else {

  FUNC_1(FUNC_0(0x61) & 0xFC, 0x61);
 }

 FUNC_4(&VAR_3, VAR_9);

 return 0;
}
