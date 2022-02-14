
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powermate_device {int dummy; } ;
struct input_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct powermate_device* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct powermate_device*,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_2, unsigned int VAR_3, unsigned int VAR_4, int VAR_5)
{
 unsigned int VAR_6 = (unsigned int)VAR_5;
 struct powermate_device *VAR_7 = FUNC_0(VAR_2);

 if (VAR_3 == VAR_0 && VAR_4 == VAR_1){







  int VAR_8 = VAR_6 & 0xFF;
  int VAR_9 = (VAR_6 >> 8) & 0x1FF;
  int VAR_10 = (VAR_6 >> 17) & 0x3;
  int VAR_11 = (VAR_6 >> 19) & 0x1;
  int VAR_12 = (VAR_6 >> 20) & 0x1;

  FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 }

 return 0;
}
