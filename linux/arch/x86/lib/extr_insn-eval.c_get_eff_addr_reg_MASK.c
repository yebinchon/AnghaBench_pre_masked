
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int value; int nbytes; } ;
struct insn {int addr_bytes; TYPE_1__ modrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct insn*,struct pt_regs*,int ) ;
 int FUNC_2 (struct insn*) ;
 int FUNC_3 (struct pt_regs*,int) ;

__attribute__((used)) static int FUNC_4(struct insn *VAR_2, struct pt_regs *VAR_3,
       int *VAR_4, long *VAR_5)
{
 FUNC_2(VAR_2);

 if (!VAR_2->modrm.nbytes)
  return -VAR_0;

 if (FUNC_0(VAR_2->modrm.value) != 3)
  return -VAR_0;

 *VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (*VAR_4 < 0)
  return -VAR_0;


 if (VAR_2->addr_bytes == 2)
  *VAR_5 = FUNC_3(VAR_3, *VAR_4) & 0xffff;
 else if (VAR_2->addr_bytes == 4)
  *VAR_5 = FUNC_3(VAR_3, *VAR_4) & 0xffffffff;
 else
  *VAR_5 = FUNC_3(VAR_3, *VAR_4);

 return 0;
}
