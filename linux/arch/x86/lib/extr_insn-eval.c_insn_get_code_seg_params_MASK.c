
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct desc_struct {int type; int l; int d; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct desc_struct*,short) ;
 short FUNC_3 (struct pt_regs*,int ) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

int FUNC_5(struct pt_regs *VAR_2)
{
 struct desc_struct VAR_3;
 short VAR_4;

 if (FUNC_4(VAR_2))

  return FUNC_1(2, 2);

 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 if (!FUNC_2(&VAR_3, VAR_4))
  return -VAR_0;






 if (!(VAR_3.type & FUNC_0(3)))
  return -VAR_0;

 switch ((VAR_3.l << 1) | VAR_3.d) {
 case 0:



  return FUNC_1(2, 2);
 case 1:



  return FUNC_1(4, 4);
 case 2:



  return FUNC_1(4, 8);
 case 3:

 default:
  return -VAR_0;
 }
}
