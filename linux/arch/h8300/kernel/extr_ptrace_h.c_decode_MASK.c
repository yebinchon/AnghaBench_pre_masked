
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct optable {int type; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct task_struct*,int ) ;

 int FUNC_1 (struct task_struct*,char) ;







__attribute__((used)) static unsigned short *FUNC_2(struct task_struct *VAR_3,
         const struct optable *VAR_4,
         char *VAR_5, unsigned short *VAR_6,
         unsigned char VAR_7)
{
 unsigned long VAR_8;
 unsigned long *VAR_9;
 int VAR_10;

 switch (VAR_4->type) {
 case 132:
  return (unsigned short *)VAR_6 + VAR_4->length;
 case 133:
  VAR_8 = *(unsigned long *)VAR_6;
  return (unsigned short *)(VAR_8 & 0x00ffffff);
 case 134:
  VAR_8 = *VAR_6 & 0xff;
  return (unsigned short *)(*(unsigned long *)VAR_8);
 case 128:
  VAR_9 = (unsigned long *)FUNC_0(VAR_3, VAR_2);







  return (unsigned short *)(*(VAR_9+2) & 0x00ffffff);
 case 131:
  VAR_10 = (*VAR_6 >> 4) & 0x07;
  if (VAR_10 == 0)
   VAR_8 = FUNC_0(VAR_3, VAR_0);
  else
   VAR_8 = FUNC_0(VAR_3, VAR_10-1 + VAR_1);
  return (unsigned short *)VAR_8;
 case 130:
  if (VAR_7 == 0x55 || FUNC_1(VAR_3, VAR_7 & 0x0f))
   VAR_6 = (unsigned short *)((unsigned long)VAR_6 +
      ((signed char)(*VAR_5)));
  return VAR_6+1;
 case 129:
  if (VAR_7 == 0x5c || FUNC_1(VAR_3, (*VAR_5 & 0xf0) >> 4))
   VAR_6 = (unsigned short *)((unsigned long)VAR_6 +
      ((signed short)(*(VAR_6+1))));
  return VAR_6+2;
 default:
  return ((void*)0);
 }
}
