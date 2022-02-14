
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
struct pt_regs {unsigned long nip; } ;
struct instruction_op {unsigned long ea; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (struct pt_regs*,unsigned long) ;
 int FUNC_1 (struct instruction_op*,struct pt_regs*,int) ;

__attribute__((used)) static int FUNC_2(struct pt_regs *VAR_3, uint64_t *VAR_4,
     uint64_t *VAR_5)
{






 int VAR_6;
 unsigned long VAR_7, VAR_8;
 struct instruction_op VAR_9;
 struct pt_regs VAR_10 = *VAR_3;

 VAR_7 = FUNC_0(VAR_3, VAR_3->nip);
 if (VAR_7 != VAR_2) {
  VAR_8 = (VAR_7 << VAR_1) + (VAR_3->nip & ~VAR_0);
  VAR_6 = *(unsigned int *)(VAR_8);
  if (!FUNC_1(&VAR_9, &VAR_10, VAR_6)) {
   VAR_7 = FUNC_0(VAR_3, VAR_9.ea);
   *VAR_4 = VAR_9.ea;
   *VAR_5 = (VAR_7 << VAR_1);
   return 0;
  }






 }
 *VAR_4 = 0;
 return -1;
}
