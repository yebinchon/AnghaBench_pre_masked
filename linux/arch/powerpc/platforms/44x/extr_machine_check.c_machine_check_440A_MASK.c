
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {unsigned long dsisr; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct pt_regs *VAR_11)
{
 unsigned long VAR_12 = VAR_11->dsisr;

 FUNC_3("Machine check in kernel mode.\n");
 if (VAR_12 & VAR_0){
  FUNC_3("Instruction Synchronous Machine Check exception\n");
  FUNC_2(VAR_9, VAR_12 & ~VAR_0);
 }
 else {
  u32 VAR_13 = FUNC_1(VAR_10);
  if (VAR_13 & VAR_5)
   FUNC_3("Instruction Read PLB Error\n");
  if (VAR_13 & VAR_3)
   FUNC_3("Data Read PLB Error\n");
  if (VAR_13 & VAR_4)
   FUNC_3("Data Write PLB Error\n");
  if (VAR_13 & VAR_8)
   FUNC_3("TLB Parity Error\n");
  if (VAR_13 & VAR_6){
   FUNC_0();
   FUNC_3("I-Cache Parity Error\n");
  }
  if (VAR_13 & VAR_2)
   FUNC_3("D-Cache Search Parity Error\n");
  if (VAR_13 & VAR_1)
   FUNC_3("D-Cache Flush Parity Error\n");
  if (VAR_13 & VAR_7)
   FUNC_3("Machine Check exception is imprecise\n");


  FUNC_2(VAR_10, VAR_13);
 }
 return 0;
}
