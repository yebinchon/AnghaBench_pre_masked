
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kprobe_opcode_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned int) ;

void FUNC_4(unsigned int VAR_2, kprobe_opcode_t *VAR_3)
{

 FUNC_3(VAR_3, VAR_0 | FUNC_2(4) |
     ((VAR_2 >> 16) & 0xffff));
 VAR_3++;


 FUNC_3(VAR_3, VAR_1 | FUNC_0(4) |
     FUNC_1(4) | (VAR_2 & 0xffff));
}
