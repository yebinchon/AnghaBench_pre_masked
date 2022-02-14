
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ f_pos; scalar_t__ f_version; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;






__attribute__((used)) static loff_t FUNC_0(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t VAR_4 = -VAR_0;

 switch (VAR_3) {
 case 130:
 case 131:
 case 129:

  return -VAR_0;
 case 132:
  if (VAR_2 == 0)
   return VAR_1->f_pos;

  VAR_2 += VAR_1->f_pos;
  break;
 case 128:
  break;
 }

 if (VAR_2 != VAR_1->f_pos) {
  VAR_1->f_pos = VAR_2;
  VAR_1->f_version = 0;
  VAR_4 = VAR_2;
 }

 return VAR_4;
}
