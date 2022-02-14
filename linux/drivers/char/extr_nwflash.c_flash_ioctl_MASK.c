
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;





 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_4, unsigned int VAR_5, unsigned long VAR_6)
{
 FUNC_0(&VAR_1);
 switch (VAR_5) {
 case 129:
  VAR_2 = 0;
  VAR_3 = 0;
  break;

 case 128:
  VAR_3 = 1;
  break;

 case 130:
  VAR_2 = 1;
  break;

 default:
  VAR_2 = 0;
  VAR_3 = 0;
  FUNC_1(&VAR_1);
  return -VAR_0;
 }
 FUNC_1(&VAR_1);
 return 0;
}
