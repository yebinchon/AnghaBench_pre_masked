
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 long VAR_0 ;







 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned char,unsigned int) ;
 int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (unsigned short,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int*,int*,int) ;
 scalar_t__ FUNC_7 (int*,unsigned int*,int) ;

__attribute__((used)) static long FUNC_8(struct file *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 unsigned int VAR_4;
 static unsigned int VAR_5 = 0;

 if (VAR_2 & 0x01) {
  if (FUNC_6(&VAR_4, (int *)VAR_3, sizeof(int))) {
   return -VAR_0;
  }
 }

 switch (VAR_2) {
 case 128:
  VAR_5 = VAR_4;
  break;

 case 131:
  FUNC_3((unsigned char)(0x0ff & VAR_4), VAR_5);
  break;

 case 130:
  if (VAR_5 & 0x01) {
   return -VAR_0;
  }
  FUNC_5((unsigned short int)(0x0ffff & VAR_4), VAR_5);
  break;

 case 129:
  if (VAR_5 & 0x03) {
   return -VAR_0;
  }
  FUNC_4(VAR_4, VAR_5);
  break;

 case 134:
  VAR_4 = FUNC_0(VAR_5);
  break;

 case 133:
  if (VAR_5 & 0x01) {
   return -VAR_0;
  }
  VAR_4 = FUNC_2(VAR_5);
  break;

 case 132:
  if (VAR_5 & 0x03) {
   return -VAR_0;
  }
  VAR_4 = FUNC_1(VAR_5);
  break;
 default:
  return -VAR_0;
  break;
 }

 if ((VAR_2 & 0x01) == 0) {
  if (FUNC_7((int *)VAR_3, &VAR_4, sizeof(int))) {
   return -VAR_0;
  }
 }
 return 0;
}
