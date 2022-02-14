
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dwarf_reg {unsigned int addr; int flags; } ;
struct dwarf_frame {unsigned long pc; unsigned int cfa_register; unsigned int cfa_offset; unsigned char* cfa_expr; unsigned int cfa_expr_len; int flags; } ;
struct dwarf_fde {int dummy; } ;
struct dwarf_cie {unsigned int code_alignment_factor; unsigned int data_alignment_factor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char) ;
 unsigned int FUNC_1 (unsigned char) ;




 int FUNC_2 () ;
 unsigned char FUNC_3 (int ) ;
 struct dwarf_reg* FUNC_4 (struct dwarf_frame*,unsigned int) ;
 unsigned int FUNC_5 (unsigned char*,unsigned int*) ;
 unsigned int FUNC_6 (unsigned char*,unsigned int*) ;
 unsigned int FUNC_7 (int *) ;
 int FUNC_8 (char*,unsigned char) ;

__attribute__((used)) static int FUNC_9(unsigned char *VAR_5,
       unsigned char *VAR_6,
       struct dwarf_cie *VAR_7,
       struct dwarf_fde *VAR_8,
       struct dwarf_frame *VAR_9,
       unsigned long VAR_10)
{
 unsigned char VAR_11;
 unsigned char *VAR_12;
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 struct dwarf_reg *VAR_18;

 VAR_12 = VAR_5;

 while (VAR_12 < VAR_6 && VAR_9->pc <= VAR_10) {
  VAR_11 = FUNC_3(VAR_12++);





  switch (FUNC_0(VAR_11)) {
  case 143:
   VAR_14 = FUNC_1(VAR_11);
   VAR_14 *= VAR_7->code_alignment_factor;
   VAR_9->pc += VAR_14;
   continue;

  case 134:
   VAR_15 = FUNC_1(VAR_11);
   VAR_13 = FUNC_6(VAR_12, &VAR_17);
   VAR_12 += VAR_13;
   VAR_17 *= VAR_7->data_alignment_factor;
   VAR_18 = FUNC_4(VAR_9, VAR_15);
   VAR_18->addr = VAR_17;
   VAR_18->flags |= VAR_2;
   continue;

  case 131:
   VAR_15 = FUNC_1(VAR_11);
   continue;

  }





  switch (VAR_11) {
  case 135:
   continue;
  case 142:
   VAR_14 = *VAR_12++;
   VAR_9->pc += VAR_14 * VAR_7->code_alignment_factor;
   break;
  case 141:
   VAR_14 = FUNC_7((u16 *)VAR_12);
   VAR_12 += 2;
   VAR_9->pc += VAR_14 * VAR_7->code_alignment_factor;
   break;
  case 140:
   VAR_14 = FUNC_7((u32 *)VAR_12);
   VAR_12 += 4;
   VAR_9->pc += VAR_14 * VAR_7->code_alignment_factor;
   break;
  case 133:
   VAR_13 = FUNC_6(VAR_12, &VAR_15);
   VAR_12 += VAR_13;
   VAR_13 = FUNC_6(VAR_12, &VAR_17);
   VAR_12 += VAR_13;
   VAR_17 *= VAR_7->data_alignment_factor;
   break;
  case 130:
   VAR_13 = FUNC_6(VAR_12, &VAR_15);
   VAR_12 += VAR_13;
   break;
  case 129:
   VAR_13 = FUNC_6(VAR_12, &VAR_15);
   VAR_12 += VAR_13;
   VAR_18 = FUNC_4(VAR_9, VAR_15);
   VAR_18->flags |= VAR_3;
   break;
  case 139:
   VAR_13 = FUNC_6(VAR_12,
         &VAR_9->cfa_register);
   VAR_12 += VAR_13;
   VAR_13 = FUNC_6(VAR_12,
         &VAR_9->cfa_offset);
   VAR_12 += VAR_13;

   VAR_9->flags |= VAR_1;
   break;
  case 136:
   VAR_13 = FUNC_6(VAR_12,
         &VAR_9->cfa_register);
   VAR_12 += VAR_13;
   VAR_9->flags |= VAR_1;
   break;
  case 137:
   VAR_13 = FUNC_6(VAR_12, &VAR_17);
   VAR_12 += VAR_13;
   VAR_9->cfa_offset = VAR_17;
   break;
  case 138:
   VAR_13 = FUNC_6(VAR_12, &VAR_16);
   VAR_12 += VAR_13;

   VAR_9->cfa_expr = VAR_12;
   VAR_9->cfa_expr_len = VAR_16;
   VAR_12 += VAR_16;

   VAR_9->flags |= VAR_0;
   break;
  case 132:
   VAR_13 = FUNC_6(VAR_12, &VAR_15);
   VAR_12 += VAR_13;
   VAR_13 = FUNC_5(VAR_12, &VAR_17);
   VAR_12 += VAR_13;
   VAR_17 *= VAR_7->data_alignment_factor;
   VAR_18 = FUNC_4(VAR_9, VAR_15);
   VAR_18->flags |= VAR_2;
   VAR_18->addr = VAR_17;
   break;
  case 128:
   VAR_13 = FUNC_6(VAR_12, &VAR_15);
   VAR_12 += VAR_13;
   VAR_13 = FUNC_5(VAR_12, &VAR_17);
   VAR_17 *= VAR_7->data_alignment_factor;
   VAR_18 = FUNC_4(VAR_9, VAR_15);
   VAR_18->flags |= VAR_4;
   VAR_18->addr = VAR_17;
   break;
  case 145:
   VAR_13 = FUNC_6(VAR_12, &VAR_17);
   VAR_12 += VAR_13;
   break;
  case 144:
   VAR_13 = FUNC_6(VAR_12, &VAR_15);
   VAR_12 += VAR_13;
   VAR_13 = FUNC_6(VAR_12, &VAR_17);
   VAR_17 *= VAR_7->data_alignment_factor;

   VAR_18 = FUNC_4(VAR_9, VAR_15);
   VAR_18->flags |= VAR_2;
   VAR_18->addr = -VAR_17;
   break;
  default:
   FUNC_8("unhandled DWARF instruction 0x%x\n", VAR_11);
   FUNC_2();
   break;
  }
 }

 return 0;
}
