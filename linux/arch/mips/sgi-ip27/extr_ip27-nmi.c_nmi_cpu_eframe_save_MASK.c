
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_struct {int sr; int nmi_sr; int cache_err; int badva; int cause; scalar_t__* gpr; scalar_t__ error_epc; scalar_t__ epc; } ;
typedef int nasid_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(nasid_t VAR_9, int VAR_10)
{
 struct reg_struct *VAR_11;
 int VAR_12;


 VAR_11 = (struct reg_struct *)
  (FUNC_1(FUNC_0(VAR_9, VAR_1)) +
  VAR_10 * VAR_0);

 FUNC_3("NMI nasid %d: slice %d\n", VAR_9, VAR_10);




 for (VAR_12 = 0; VAR_12 < 32; ) {
  if ((VAR_12 % 4) == 0)
   FUNC_3("$%2d   :", VAR_12);
  FUNC_2(" %016lx", VAR_11->gpr[VAR_12]);

  VAR_12++;
  if ((VAR_12 % 4) == 0)
   FUNC_2("\n");
 }

 FUNC_3("Hi    : (value lost)\n");
 FUNC_3("Lo    : (value lost)\n");




 FUNC_3("epc   : %016lx %pS\n", VAR_11->epc, (void *)VAR_11->epc);
 FUNC_3("%s\n", FUNC_4());
 FUNC_3("ErrEPC: %016lx %pS\n", VAR_11->error_epc, (void *)VAR_11->error_epc);
 FUNC_3("ra    : %016lx %pS\n", VAR_11->gpr[31], (void *)VAR_11->gpr[31]);
 FUNC_3("Status: %08lx	      ", VAR_11->sr);

 if (VAR_11->sr & VAR_6)
  FUNC_2("KX ");
 if (VAR_11->sr & VAR_7)
  FUNC_2("SX ");
 if (VAR_11->sr & VAR_8)
  FUNC_2("UX ");

 switch (VAR_11->sr & VAR_5) {
 case 128:
  FUNC_2("USER ");
  break;
 case 129:
  FUNC_2("SUPERVISOR ");
  break;
 case 130:
  FUNC_2("KERNEL ");
  break;
 default:
  FUNC_2("BAD_MODE ");
  break;
 }

 if (VAR_11->sr & VAR_2)
  FUNC_2("ERL ");
 if (VAR_11->sr & VAR_3)
  FUNC_2("EXL ");
 if (VAR_11->sr & VAR_4)
  FUNC_2("IE ");
 FUNC_2("\n");

 FUNC_3("Cause : %08lx\n", VAR_11->cause);
 FUNC_3("PrId  : %08x\n", FUNC_5());
 FUNC_3("BadVA : %016lx\n", VAR_11->badva);
 FUNC_3("CErr  : %016lx\n", VAR_11->cache_err);
 FUNC_3("NMI_SR: %016lx\n", VAR_11->nmi_sr);

 FUNC_3("\n");
}
