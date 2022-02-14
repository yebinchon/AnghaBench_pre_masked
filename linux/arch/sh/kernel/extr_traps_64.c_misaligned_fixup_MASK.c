
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pc; } ;
typedef int insn_size_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct pt_regs*,int,int,int,int) ;
 int FUNC_1 (struct pt_regs*,int,int,int,int) ;
 int FUNC_2 (struct pt_regs*,int,int,int,int) ;
 int FUNC_3 (struct pt_regs*,int,int,int) ;
 int FUNC_4 (int,int*,int ) ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_7(struct pt_regs *VAR_1)
{
 insn_size_t VAR_2;
 int VAR_3;
 int VAR_4, VAR_5;
 unsigned int VAR_6;

 VAR_6 = FUNC_5();
 if (!(VAR_6 & VAR_0))
  return -1;

 VAR_3 = FUNC_4(VAR_1->pc, &VAR_2, FUNC_6(VAR_1));
 if (VAR_3 < 0) {
  return VAR_3;
 }
 VAR_4 = (VAR_2 >> 26) & 0x3f;
 VAR_5 = (VAR_2 >> 16) & 0xf;

 switch (VAR_4) {
  case (0x84>>2):
   VAR_3 = FUNC_2(VAR_1, VAR_2, 1, 1, 1);
   break;
  case (0xb0>>2):
   VAR_3 = FUNC_2(VAR_1, VAR_2, 1, 1, 0);
   break;
  case (0x88>>2):
   VAR_3 = FUNC_2(VAR_1, VAR_2, 1, 2, 1);
   break;
  case (0x8c>>2):
   VAR_3 = FUNC_2(VAR_1, VAR_2, 1, 3, 0);
   break;

  case (0xa4>>2):
   VAR_3 = FUNC_3(VAR_1, VAR_2, 1, 1);
   break;
  case (0xa8>>2):
   VAR_3 = FUNC_3(VAR_1, VAR_2, 1, 2);
   break;
  case (0xac>>2):
   VAR_3 = FUNC_3(VAR_1, VAR_2, 1, 3);
   break;

  case (0x40>>2):
   switch (VAR_5) {
    case 0x1:
     VAR_3 = FUNC_2(VAR_1, VAR_2, 0, 1, 1);
     break;
    case 0x5:
     VAR_3 = FUNC_2(VAR_1, VAR_2, 0, 1, 0);
     break;
    case 0x2:
     VAR_3 = FUNC_2(VAR_1, VAR_2, 0, 2, 1);
     break;
    case 0x3:
     VAR_3 = FUNC_2(VAR_1, VAR_2, 0, 3, 0);
     break;
    default:
     VAR_3 = -1;
     break;
   }
   break;

  case (0x60>>2):
   switch (VAR_5) {
    case 0x1:
     VAR_3 = FUNC_3(VAR_1, VAR_2, 0, 1);
     break;
    case 0x2:
     VAR_3 = FUNC_3(VAR_1, VAR_2, 0, 2);
     break;
    case 0x3:
     VAR_3 = FUNC_3(VAR_1, VAR_2, 0, 3);
     break;
    default:
     VAR_3 = -1;
     break;
   }
   break;

  case (0x94>>2):
   VAR_3 = FUNC_0(VAR_1, VAR_2, 1, 2, 0);
   break;
  case (0x98>>2):
   VAR_3 = FUNC_0(VAR_1, VAR_2, 1, 3, 1);
   break;
  case (0x9c>>2):
   VAR_3 = FUNC_0(VAR_1, VAR_2, 1, 3, 0);
   break;
  case (0x1c>>2):
   switch (VAR_5) {
   case 0x8:
    VAR_3 = FUNC_0(VAR_1, VAR_2, 0, 2, 0);
    break;
   case 0xd:
    VAR_3 = FUNC_0(VAR_1, VAR_2, 0, 3, 1);
    break;
   case 0x9:
    VAR_3 = FUNC_0(VAR_1, VAR_2, 0, 3, 0);
    break;
   default:
    VAR_3 = -1;
    break;
   }
   break;
  case (0xb4>>2):
   VAR_3 = FUNC_1(VAR_1, VAR_2, 1, 2, 0);
   break;
  case (0xb8>>2):
   VAR_3 = FUNC_1(VAR_1, VAR_2, 1, 3, 1);
   break;
  case (0xbc>>2):
   VAR_3 = FUNC_1(VAR_1, VAR_2, 1, 3, 0);
   break;
  case (0x3c>>2):
   switch (VAR_5) {
   case 0x8:
    VAR_3 = FUNC_1(VAR_1, VAR_2, 0, 2, 0);
    break;
   case 0xd:
    VAR_3 = FUNC_1(VAR_1, VAR_2, 0, 3, 1);
    break;
   case 0x9:
    VAR_3 = FUNC_1(VAR_1, VAR_2, 0, 3, 0);
    break;
   default:
    VAR_3 = -1;
    break;
   }
   break;

  default:

   VAR_3 = -1;
   break;
 }

 if (VAR_3 < 0) {
  return VAR_3;
 } else {
  VAR_1->pc += 4;
  return 0;
 }
}
