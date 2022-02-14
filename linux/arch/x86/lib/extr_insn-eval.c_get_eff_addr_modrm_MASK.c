
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {long ip; } ;
struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int value; int nbytes; } ;
struct insn {int addr_bytes; long length; TYPE_2__ displacement; TYPE_1__ modrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct insn*,struct pt_regs*,int ) ;
 int FUNC_2 (struct insn*) ;
 long FUNC_3 (struct pt_regs*,int) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_5(struct insn *VAR_3, struct pt_regs *VAR_4,
         int *VAR_5, long *VAR_6)
{
 long VAR_7;

 if (VAR_3->addr_bytes != 8 && VAR_3->addr_bytes != 4)
  return -VAR_1;

 FUNC_2(VAR_3);

 if (!VAR_3->modrm.nbytes)
  return -VAR_1;

 if (FUNC_0(VAR_3->modrm.value) > 2)
  return -VAR_1;

 *VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_2);






 if (*VAR_5 == -VAR_0) {
  if (FUNC_4(VAR_4))
   VAR_7 = VAR_4->ip + VAR_3->length;
  else
   VAR_7 = 0;
 } else if (*VAR_5 < 0) {
  return -VAR_1;
 } else {
  VAR_7 = FUNC_3(VAR_4, *VAR_5);
 }

 if (VAR_3->addr_bytes == 4) {
  int VAR_8 = (int)(VAR_7 & 0xffffffff) + VAR_3->displacement.value;

  *VAR_6 = VAR_8 & 0xffffffff;
 } else {
  *VAR_6 = VAR_7 + VAR_3->displacement.value;
 }

 return 0;
}
