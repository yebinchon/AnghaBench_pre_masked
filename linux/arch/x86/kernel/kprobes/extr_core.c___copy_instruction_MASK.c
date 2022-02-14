
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {scalar_t__* bytes; } ;
struct insn {int length; TYPE_2__ displacement; TYPE_1__ opcode; } ;
typedef int s64 ;
typedef scalar_t__ s32 ;
typedef int kprobe_opcode_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct insn*) ;
 scalar_t__ FUNC_1 (struct insn*) ;
 int FUNC_2 (struct insn*) ;
 scalar_t__ FUNC_3 (struct insn*) ;
 int FUNC_4 (struct insn*,int *,int) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int *,void*,int) ;
 unsigned long FUNC_7 (int *,unsigned long) ;

int FUNC_8(u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, struct insn *VAR_5)
{
 kprobe_opcode_t VAR_6[VAR_1];
 unsigned long VAR_7 =
  FUNC_7(VAR_6, (unsigned long)VAR_3);

 if (!VAR_7 || !VAR_5)
  return 0;


 if (FUNC_6(VAR_2, (void *)VAR_7, VAR_1))
  return 0;

 FUNC_4(VAR_5, VAR_2, VAR_1);
 FUNC_0(VAR_5);


 if (VAR_5->opcode.bytes[0] == VAR_0)
  return 0;


 if (FUNC_1(VAR_5))
  return 0;
 return VAR_5->length;
}
