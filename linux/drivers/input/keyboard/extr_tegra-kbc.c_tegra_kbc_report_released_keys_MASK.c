
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;


 int FUNC_0 (struct input_dev*,unsigned short,int ) ;

__attribute__((used)) static void FUNC_1(struct input_dev *VAR_0,
        unsigned short VAR_1[],
        unsigned int VAR_2,
        unsigned short VAR_3[],
        unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
   if (VAR_1[VAR_5] == VAR_3[VAR_6])
    break;

  if (VAR_6 == VAR_4)
   FUNC_0(VAR_0, VAR_1[VAR_5], 0);
 }
}
