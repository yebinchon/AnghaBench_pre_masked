
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int value; int nbytes; } ;
struct insn {int addr_bytes; TYPE_2__ displacement; TYPE_1__ modrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct insn*,struct pt_regs*,int*,int*) ;
 int FUNC_2 (struct insn*) ;
 int FUNC_3 (struct pt_regs*,int) ;

__attribute__((used)) static int FUNC_4(struct insn *VAR_2, struct pt_regs *VAR_3,
     int *VAR_4, short *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 short VAR_9 = 0, VAR_10 = 0, VAR_11;

 if (VAR_2->addr_bytes != 2)
  return -VAR_1;

 FUNC_2(VAR_2);

 if (!VAR_2->modrm.nbytes)
  return -VAR_1;

 if (FUNC_0(VAR_2->modrm.value) > 2)
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_2, VAR_3, &VAR_6, &VAR_7);
 if (VAR_8 < 0)
  return -VAR_1;






 if (VAR_6 != -VAR_0)
  VAR_9 = FUNC_3(VAR_3, VAR_6) & 0xffff;

 if (VAR_7 != -VAR_0)
  VAR_10 = FUNC_3(VAR_3, VAR_7) & 0xffff;

 VAR_11 = VAR_2->displacement.value & 0xffff;
 *VAR_5 = VAR_9 + VAR_10 + VAR_11;







 *VAR_4 = VAR_6;

 return 0;
}
