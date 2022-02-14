
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u32 ;
struct awg_code_generation_params {size_t instruction_offset; long* ram_code; } ;
typedef enum opcode { ____Placeholder_opcode } opcode ;


 long VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
__attribute__((used)) static int FUNC_1(enum opcode VAR_4,
         long int VAR_5,
         long int VAR_6,
         long int VAR_7,
         struct awg_code_generation_params *VAR_8)
{
 u32 VAR_9 = 0;
 u32 VAR_10 = (VAR_6 << 8) & 0x1ff;
 u32 VAR_11 = (VAR_7 << 9) & 0x2ff;
 long int VAR_12 = VAR_5;
 while (VAR_12 > 0) {
  VAR_5 = VAR_12;
  if (VAR_8->instruction_offset >= VAR_1) {
   FUNC_0("too many number of instructions\n");
   return -VAR_3;
  }

  switch (VAR_4) {
  case 129:


   VAR_5--;
   VAR_12--;

   if (VAR_5 < 0) {

    return 0;
   }

   if (VAR_5 == 0) {



    VAR_4 = 130;
    break;
   }

   VAR_10 = 0;
   VAR_11 = 0;
   VAR_5 &= VAR_0;
   break;
  case 134:
  case 133:
   if (VAR_5 == 0) {

    return 0;
   }

   VAR_10 = 0;
   VAR_11 = 0;
   VAR_5 &= VAR_0;
   break;
  case 135:
   VAR_10 = 0;
   VAR_11 = 0;
   VAR_5 |= 0x40;
   VAR_5 &= VAR_0;
   break;
  case 128:
   VAR_5 = 0;
   break;
  case 130:
  case 131:
  case 132:
  case 136:
   VAR_5 &= (0x0ff);
   break;
  default:
   FUNC_0("instruction %d does not exist\n", VAR_4);
   return -VAR_3;
  }

  VAR_12 = VAR_12 - VAR_5;

  VAR_5 = ((VAR_5 + VAR_10) + VAR_11);

  VAR_9 = ((VAR_4) << VAR_2) | VAR_5;
  VAR_8->ram_code[VAR_8->instruction_offset] =
   VAR_9 & (0x3fff);
  VAR_8->instruction_offset++;
 }
 return 0;
}
