
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kprobe_opcode_t ;


 int* FUNC_0 (int*) ;

__attribute__((used)) static int FUNC_1(kprobe_opcode_t *VAR_0)
{

 VAR_0 = FUNC_0(VAR_0);

 switch (*VAR_0) {
 case 0xfa:
 case 0xfb:
 case 0xcf:
 case 0x9d:
  return 1;
 }

 return 0;
}
