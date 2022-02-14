
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long ipc; } ;
struct fpu_struct {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char,unsigned char*) ;
 unsigned long FUNC_3 (unsigned long) ;
 scalar_t__ VAR_2 ;


 int FUNC_4 (struct fpu_struct*,unsigned long) ;



int FUNC_5(struct pt_regs *VAR_3, struct fpu_struct *VAR_4)
{
 unsigned long VAR_5 = 0, VAR_6 = VAR_3->ipc;
 unsigned long VAR_7, VAR_8;
 unsigned char *VAR_9 = (void *)&VAR_5;
 char VAR_10;
 int VAR_11 = 0, VAR_12;

 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  if (FUNC_2(VAR_10, (unsigned char *)VAR_6++))
   return VAR_0;
  *VAR_9++ = VAR_10;
 }

 VAR_5 = FUNC_3(VAR_5);

 VAR_7 = VAR_3->ipc;
 VAR_8 = VAR_3->ipc + 4;

 if (FUNC_0(VAR_5) != VAR_2)
  return VAR_1;

 switch (FUNC_1(VAR_5)) {
 case 129:
 case 128:
 case 131:
 case 130:
  {

   VAR_12 = FUNC_4(VAR_4, VAR_5);
   if (!VAR_12)
    VAR_3->ipc = VAR_8;
  }
  break;

 default:
  return VAR_1;
 }

 return VAR_12;
}
