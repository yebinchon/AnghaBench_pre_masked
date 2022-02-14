
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pt_regs {unsigned int cp0_cause; unsigned int acx; unsigned int hi; unsigned int lo; int cp0_status; unsigned int cp0_badvaddr; scalar_t__* regs; scalar_t__ cp0_epc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int const,...) ;
 int const FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const struct pt_regs *VAR_19)
{
 const int VAR_20 = 2 * sizeof(unsigned long);
 unsigned int VAR_21 = VAR_19->cp0_cause;
 unsigned int VAR_22;
 int VAR_23;

 FUNC_4(VAR_2);




 for (VAR_23 = 0; VAR_23 < 32; ) {
  if ((VAR_23 % 4) == 0)
   FUNC_2("$%2d   :", VAR_23);
  if (VAR_23 == 0)
   FUNC_1(" %0*lx", VAR_20, 0UL);
  else if (VAR_23 == 26 || VAR_23 == 27)
   FUNC_1(" %*s", VAR_20, "");
  else
   FUNC_1(" %0*lx", VAR_20, VAR_19->regs[VAR_23]);

  VAR_23++;
  if ((VAR_23 % 4) == 0)
   FUNC_1("\n");
 }




 if (VAR_3 < 6) {
  FUNC_2("Hi    : %0*lx\n", VAR_20, VAR_19->hi);
  FUNC_2("Lo    : %0*lx\n", VAR_20, VAR_19->lo);
 }




 FUNC_2("epc   : %0*lx %pS\n", VAR_20, VAR_19->cp0_epc,
        (void *) VAR_19->cp0_epc);
 FUNC_2("ra    : %0*lx %pS\n", VAR_20, VAR_19->regs[31],
        (void *) VAR_19->regs[31]);

 FUNC_2("Status: %08x	", (uint32_t) VAR_19->cp0_status);

 if (VAR_17) {
  if (VAR_19->cp0_status & VAR_12)
   FUNC_1("KUo ");
  if (VAR_19->cp0_status & VAR_8)
   FUNC_1("IEo ");
  if (VAR_19->cp0_status & VAR_13)
   FUNC_1("KUp ");
  if (VAR_19->cp0_status & VAR_9)
   FUNC_1("IEp ");
  if (VAR_19->cp0_status & VAR_11)
   FUNC_1("KUc ");
  if (VAR_19->cp0_status & VAR_7)
   FUNC_1("IEc ");
 } else if (VAR_18) {
  if (VAR_19->cp0_status & VAR_14)
   FUNC_1("KX ");
  if (VAR_19->cp0_status & VAR_15)
   FUNC_1("SX ");
  if (VAR_19->cp0_status & VAR_16)
   FUNC_1("UX ");
  switch (VAR_19->cp0_status & VAR_10) {
  case 128:
   FUNC_1("USER ");
   break;
  case 129:
   FUNC_1("SUPERVISOR ");
   break;
  case 130:
   FUNC_1("KERNEL ");
   break;
  default:
   FUNC_1("BAD_MODE ");
   break;
  }
  if (VAR_19->cp0_status & VAR_4)
   FUNC_1("ERL ");
  if (VAR_19->cp0_status & VAR_5)
   FUNC_1("EXL ");
  if (VAR_19->cp0_status & VAR_6)
   FUNC_1("IE ");
 }
 FUNC_1("\n");

 VAR_22 = (VAR_21 & VAR_1) >> VAR_0;
 FUNC_2("Cause : %08x (ExcCode %02x)\n", VAR_21, VAR_22);

 if (1 <= VAR_22 && VAR_22 <= 5)
  FUNC_2("BadVA : %0*lx\n", VAR_20, VAR_19->cp0_badvaddr);

 FUNC_2("PrId  : %08x (%s)\n", FUNC_3(),
        FUNC_0());
}
