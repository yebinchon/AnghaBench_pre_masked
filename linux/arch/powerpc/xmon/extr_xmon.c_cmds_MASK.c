
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int nip; int link; int * gpr; } ;



 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct pt_regs*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct pt_regs*) ;
 int FUNC_13 () ;
 int VAR_0 ;
 int FUNC_14 () ;
 int * VAR_1 ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int) ;
 int FUNC_19 () ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 () ;
 int FUNC_22 (struct pt_regs*) ;
 int FUNC_23 (int) ;
 int FUNC_24 () ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_33 () ;
 int VAR_4 ;
 int FUNC_34 (int ) ;
 struct pt_regs* VAR_5 ;
 char* VAR_6 ;
 int FUNC_35 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_36(struct pt_regs *VAR_7)
{
 int VAR_8 = 0;

 VAR_1 = ((void*)0);
 VAR_5 = VAR_7;

 FUNC_35(VAR_7->gpr[1], VAR_7->link, VAR_7->nip);

 for(;;) {



  FUNC_20("mon> ");
  FUNC_13();
  VAR_2 = 0;
  VAR_8 = FUNC_28();
  if( VAR_8 == '\n' ) {
   if (VAR_1 == ((void*)0))
    continue;
   FUNC_32(VAR_1);
   VAR_1 = ((void*)0);
   VAR_8 = FUNC_14();
  }
  switch (VAR_8) {
  case 'm':
   VAR_8 = FUNC_14();
   switch (VAR_8) {
   case 'm':
   case 's':
   case 'd':
    FUNC_18(VAR_8);
    break;
   case 'l':
    FUNC_17();
    break;
   case 'z':
    if (VAR_4) {
     FUNC_20(VAR_6);
     break;
    }
    FUNC_19();
    break;
   case 'i':
    FUNC_25(0, ((void*)0));
    break;
   default:
    VAR_2 = VAR_8;
    FUNC_16();
   }
   break;
  case 'd':
   FUNC_8();
   break;
  case 'l':
   FUNC_31();
   break;
  case 'r':
   FUNC_22(VAR_7);
   break;
  case 'e':
   FUNC_12(VAR_7);
   break;
  case 'S':
   FUNC_30();
   break;
  case 't':
   FUNC_0(VAR_7);
   break;
  case 'f':
   FUNC_3();
   break;
  case 's':
   if (FUNC_6() == 0)
    break;
   if (FUNC_7(VAR_7))
    return VAR_8;
   break;
  case 'x':
  case 'X':
   if (VAR_3)
    FUNC_33();
   return VAR_8;
  case 128:
   FUNC_20(" <no input ...>\n");
   FUNC_15(2000);
   return VAR_8;
  case '?':
   FUNC_34(VAR_0);
   break;
  case '#':
   FUNC_24();
   break;
  case 'b':
   if (VAR_4) {
    FUNC_20(VAR_6);
    break;
   }
   FUNC_2();
   break;
  case 'C':
   FUNC_5();
   break;
  case 'c':
   if (FUNC_4())
    return 0;
   break;
  case 'z':
   FUNC_1();
   break;
  case 'p':
   if (VAR_4) {
    FUNC_20(VAR_6);
    break;
   }
   FUNC_21();
   break;
  case 'P':
   FUNC_26();
   break;
  case 'U':
   FUNC_27();
   break;
  default:
   FUNC_20("Unrecognized command: ");
   do {
    if (' ' < VAR_8 && VAR_8 <= '~')
     FUNC_23(VAR_8);
    else
     FUNC_20("\\x%x", VAR_8);
    VAR_8 = FUNC_14();
   } while (VAR_8 != '\n');
   FUNC_20(" (type ? for help)\n");
   break;
  }
 }
}
