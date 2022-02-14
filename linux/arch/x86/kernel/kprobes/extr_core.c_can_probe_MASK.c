
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* bytes; } ;
struct insn {scalar_t__ length; TYPE_1__ opcode; } ;
typedef int kprobe_opcode_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct insn*) ;
 int FUNC_1 (unsigned long,int *,unsigned long*) ;
 int FUNC_2 (struct insn*,void*,int) ;
 unsigned long FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5 = 0;
 struct insn VAR_6;
 kprobe_opcode_t VAR_7[VAR_1];

 if (!FUNC_1(VAR_2, ((void*)0), &VAR_5))
  return 0;


 VAR_3 = VAR_2 - VAR_5;
 while (VAR_3 < VAR_2) {
  VAR_4 = FUNC_3(VAR_7, VAR_3);
  if (!VAR_4)
   return 0;
  FUNC_2(&VAR_6, (void *)VAR_4, VAR_1);
  FUNC_0(&VAR_6);





  if (VAR_6.opcode.bytes[0] == VAR_0)
   return 0;
  VAR_3 += VAR_6.length;
 }

 return (VAR_3 == VAR_2);
}
