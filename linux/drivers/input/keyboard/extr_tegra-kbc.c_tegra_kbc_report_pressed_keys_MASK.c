
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_dev*,int ,int ,unsigned char) ;
 int FUNC_1 (struct input_dev*,unsigned short,int) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_2,
       unsigned char VAR_3[],
       unsigned short VAR_4[],
       unsigned int VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  FUNC_0(VAR_2, VAR_0, VAR_1, VAR_3[VAR_6]);
  FUNC_1(VAR_2, VAR_4[VAR_6], 1);
 }
}
