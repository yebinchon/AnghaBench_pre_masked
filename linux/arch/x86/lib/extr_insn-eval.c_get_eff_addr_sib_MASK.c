
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_5__ {int value; int nbytes; } ;
struct TYPE_4__ {int value; int nbytes; } ;
struct insn {int addr_bytes; TYPE_3__ displacement; TYPE_2__ sib; TYPE_1__ modrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct insn*,struct pt_regs*,int ) ;
 int FUNC_3 (struct insn*) ;
 int FUNC_4 (struct insn*) ;
 long FUNC_5 (struct pt_regs*,int) ;

__attribute__((used)) static int FUNC_6(struct insn *VAR_4, struct pt_regs *VAR_5,
       int *VAR_6, long *VAR_7)
{
 long VAR_8, VAR_9;
 int VAR_10;

 if (VAR_4->addr_bytes != 8 && VAR_4->addr_bytes != 4)
  return -VAR_1;

 FUNC_3(VAR_4);

 if (!VAR_4->modrm.nbytes)
  return -VAR_1;

 if (FUNC_0(VAR_4->modrm.value) > 2)
  return -VAR_1;

 FUNC_4(VAR_4);

 if (!VAR_4->sib.nbytes)
  return -VAR_1;

 *VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_2);
 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_3);






 if (*VAR_6 == -VAR_0)
  VAR_8 = 0;
 else if (*VAR_6 < 0)
  return -VAR_1;
 else
  VAR_8 = FUNC_5(VAR_5, *VAR_6);

 if (VAR_10 == -VAR_0)
  VAR_9 = 0;
 else if (VAR_10 < 0)
  return -VAR_1;
 else
  VAR_9 = FUNC_5(VAR_5, VAR_10);

 if (VAR_4->addr_bytes == 4) {
  int VAR_11, VAR_12, VAR_13;

  VAR_12 = VAR_8 & 0xffffffff;
  VAR_13 = VAR_9 & 0xffffffff;

  VAR_11 = VAR_12 + VAR_13 * (1 << FUNC_1(VAR_4->sib.value));
  VAR_11 += VAR_4->displacement.value;

  *VAR_7 = VAR_11 & 0xffffffff;
 } else {
  *VAR_7 = VAR_8 + VAR_9 * (1 << FUNC_1(VAR_4->sib.value));
  *VAR_7 += VAR_4->displacement.value;
 }

 return 0;
}
