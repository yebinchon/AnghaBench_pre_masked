
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct desc_struct {scalar_t__ g; } ;


 int FUNC_0 (struct desc_struct*,short) ;
 unsigned long FUNC_1 (struct desc_struct*) ;
 short FUNC_2 (struct pt_regs*,int) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

__attribute__((used)) static unsigned long FUNC_5(struct pt_regs *VAR_0, int VAR_1)
{
 struct desc_struct VAR_2;
 unsigned long VAR_3;
 short VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return 0;

 if (FUNC_3(VAR_0) || FUNC_4(VAR_0))
  return -1L;

 if (!VAR_4)
  return 0;

 if (!FUNC_0(&VAR_2, VAR_4))
  return 0;







 VAR_3 = FUNC_1(&VAR_2);
 if (VAR_2.g)
  VAR_3 = (VAR_3 << 12) + 0xfff;

 return VAR_3;
}
