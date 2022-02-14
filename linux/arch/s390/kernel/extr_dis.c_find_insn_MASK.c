
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_opcode_offset {unsigned char opcode; int byte; unsigned char mask; size_t offset; int count; } ;
struct s390_insn {unsigned char opfrag; } ;


 int FUNC_0 (struct s390_opcode_offset*) ;
 struct s390_insn* VAR_0 ;
 struct s390_opcode_offset* VAR_1 ;

struct s390_insn *FUNC_1(unsigned char *VAR_2)
{
 struct s390_opcode_offset *VAR_3;
 struct s390_insn *VAR_4;
 unsigned char VAR_5;
 int VAR_6;






 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  VAR_3 = &VAR_1[VAR_6];
  if (VAR_3->opcode == VAR_2[0])
   break;
 }

 VAR_5 = *(VAR_2 + VAR_3->byte) & VAR_3->mask;

 VAR_4 = &VAR_0[VAR_3->offset];
 for (VAR_6 = 0; VAR_6 < VAR_3->count; VAR_6++) {
  if (VAR_4->opfrag == VAR_5)
   return VAR_4;
  VAR_4++;
 }
 return ((void*)0);
}
