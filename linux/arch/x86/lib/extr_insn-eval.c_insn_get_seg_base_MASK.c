
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct desc_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct desc_struct*,short) ;
 unsigned long FUNC_1 (struct desc_struct*) ;
 short FUNC_2 (struct pt_regs*,int) ;
 int FUNC_3 (int ,unsigned long) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;
 scalar_t__ FUNC_5 (struct pt_regs*) ;

unsigned long FUNC_6(struct pt_regs *VAR_4, int VAR_5)
{
 struct desc_struct VAR_6;
 short VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_5);
 if (VAR_7 < 0)
  return -1L;

 if (FUNC_5(VAR_4))




  return (unsigned long)(VAR_7 << 4);

 if (FUNC_4(VAR_4)) {




  unsigned long VAR_8;

  if (VAR_5 == VAR_0)
   FUNC_3(VAR_2, VAR_8);
  else if (VAR_5 == VAR_1)




   FUNC_3(VAR_3, VAR_8);
  else
   VAR_8 = 0;
  return VAR_8;
 }


 if (!VAR_7)
  return -1L;

 if (!FUNC_0(&VAR_6, VAR_7))
  return -1L;

 return FUNC_1(&VAR_6);
}
