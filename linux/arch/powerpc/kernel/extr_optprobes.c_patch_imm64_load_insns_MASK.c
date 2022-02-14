
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kprobe_opcode_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (int) ;
 unsigned long FUNC_2 (int) ;
 unsigned long FUNC_3 (int) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(unsigned long VAR_4, kprobe_opcode_t *VAR_5)
{

 FUNC_5(VAR_5, VAR_0 | FUNC_4(3) |
     ((VAR_4 >> 48) & 0xffff));
 VAR_5++;


 FUNC_5(VAR_5, VAR_1 | FUNC_2(3) |
     FUNC_3(3) | ((VAR_4 >> 32) & 0xffff));
 VAR_5++;


 FUNC_5(VAR_5, VAR_3 | FUNC_2(3) |
     FUNC_3(3) | FUNC_1(32) | FUNC_0(31));
 VAR_5++;


 FUNC_5(VAR_5, VAR_2 | FUNC_2(3) |
     FUNC_3(3) | ((VAR_4 >> 16) & 0xffff));
 VAR_5++;


 FUNC_5(VAR_5, VAR_1 | FUNC_2(3) |
     FUNC_3(3) | (VAR_4 & 0xffff));
}
