
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* bytes; } ;
struct insn {scalar_t__ length; void* next_byte; void* kaddr; TYPE_1__ opcode; } ;
typedef int kprobe_opcode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct insn*) ;
 scalar_t__ FUNC_1 (struct insn*) ;
 scalar_t__ FUNC_2 (struct insn*,scalar_t__,int ) ;
 int FUNC_3 (unsigned long,unsigned long*,unsigned long*) ;
 int FUNC_4 (struct insn*,void*,int) ;
 unsigned long FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long) ;

__attribute__((used)) static int FUNC_7(unsigned long VAR_9)
{
 unsigned long VAR_10, VAR_11 = 0, VAR_12 = 0;
 struct insn VAR_13;
 kprobe_opcode_t VAR_14[VAR_2];


 if (!FUNC_3(VAR_9, &VAR_11, &VAR_12))
  return 0;





 if (((VAR_9 >= (unsigned long)VAR_6) &&
      (VAR_9 < (unsigned long)VAR_5)) ||
     ((VAR_9 >= (unsigned long)VAR_8) &&
      (VAR_9 < (unsigned long)VAR_7)))
  return 0;


 if (VAR_11 - VAR_12 < VAR_3)
  return 0;


 VAR_10 = VAR_9 - VAR_12;
 while (VAR_10 < VAR_9 - VAR_12 + VAR_11) {
  unsigned long VAR_15;
  if (FUNC_6(VAR_10))




   return 0;
  VAR_15 = FUNC_5(VAR_14, VAR_10);
  if (!VAR_15)
   return 0;
  FUNC_4(&VAR_13, (void *)VAR_15, VAR_2);
  FUNC_0(&VAR_13);

  if (VAR_13.opcode.bytes[0] == VAR_0)
   return 0;

  VAR_13.kaddr = (void *)VAR_10;
  VAR_13.next_byte = (void *)(VAR_10 + VAR_13.length);

  if (FUNC_1(&VAR_13) ||
      FUNC_2(&VAR_13, VAR_9 + VAR_1,
      VAR_4))
   return 0;
  VAR_10 += VAR_13.length;
 }

 return 1;
}
