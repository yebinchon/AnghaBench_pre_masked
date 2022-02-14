
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 long VAR_0 ;





 int FUNC_0 (struct file*,unsigned int,unsigned long) ;
 int FUNC_1 (struct file*,unsigned int,unsigned long) ;
 int FUNC_2 (struct file*,unsigned int,unsigned long) ;
 int FUNC_3 (struct file*,unsigned int,unsigned long) ;
 int FUNC_4 (struct file*,unsigned int,unsigned long) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static long FUNC_8(struct file *VAR_2, unsigned int VAR_3, unsigned long VAR_4)
{
 int VAR_5;

 if (FUNC_5(&VAR_1))
  return -VAR_0;

 switch (VAR_3) {
 case 132:
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
  break;

 case 128:
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
  break;

 case 130:
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
  break;

 case 131:
  VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4);
  break;

 case 129:
  VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
  break;
 default:
  FUNC_7("QAT: Invalid ioctl\n");
  VAR_5 = -VAR_0;
  break;
 }
 FUNC_6(&VAR_1);
 return VAR_5;
}
