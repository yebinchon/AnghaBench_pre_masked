
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct pt_regs*,unsigned char*,unsigned char,int*) ;
 scalar_t__ FUNC_1 (int ,struct pt_regs*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static int
FUNC_4(struct pt_regs *VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned char *VAR_6;
 unsigned char *VAR_7;
 int VAR_8 = 0;





 if (VAR_4 & VAR_1)
  return 0;

 VAR_7 = (void *)FUNC_1(VAR_2, VAR_3);
 VAR_6 = VAR_7 + 15;

 if (FUNC_3(VAR_3) && VAR_7 >= (unsigned char *)VAR_0)
  return 0;

 while (VAR_7 < VAR_6) {
  unsigned char VAR_9;

  if (FUNC_2(VAR_7, VAR_9))
   break;

  VAR_7++;

  if (!FUNC_0(VAR_3, VAR_7, VAR_9, &VAR_8))
   break;
 }
 return VAR_8;
}
