
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kprobe_opcode_t ;


 unsigned long FUNC_0 (int *,unsigned long) ;
 unsigned long FUNC_1 (int *,unsigned long) ;

unsigned long FUNC_2(kprobe_opcode_t *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 != VAR_1)
  return VAR_2;

 return FUNC_1(VAR_0, VAR_1);
}
