
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int dsisr; } ;
struct TYPE_4__ {int esr; } ;
struct TYPE_6__ {TYPE_2__ aim; TYPE_1__ booke; } ;
struct trapframe {int srr1; int exc; scalar_t__* fixreg; TYPE_3__ cpu; int ctr; scalar_t__ xer; scalar_t__ cr; scalar_t__ srr0; int dar; } ;
struct thread {int dummy; } ;
typedef int db_addr_t ;
typedef void* boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int ) ;
 char* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_14, db_addr_t VAR_15, int VAR_16)
{
 db_addr_t VAR_17, VAR_18, *VAR_19;
 boolean_t VAR_20 = VAR_8;
 boolean_t VAR_21 = VAR_5;
 VAR_17 = VAR_15;

 while (!VAR_10) {
  if (VAR_17 < VAR_6)
   break;





  VAR_17 = *(db_addr_t *)VAR_17;

 next_frame:





  VAR_19 = (db_addr_t *)(VAR_17 + 8);


  if (VAR_17 < VAR_6)
   break;

         if (VAR_16-- == 0)
   break;
  VAR_18 = *(db_addr_t *)(VAR_17 + 4) - 4;

  if ((VAR_18 & 3) || (VAR_18 < 0x100)) {
   FUNC_0("saved LR(0x%zx) is invalid.", VAR_18);
   break;
  }




  FUNC_0("0x%08x: ", VAR_17);
  if ((VAR_18 + VAR_0 == (db_addr_t) &VAR_13) ||
      (VAR_18 + VAR_0 == (db_addr_t) &VAR_9)) {
   const char *VAR_22;
   struct trapframe *VAR_23 = (struct trapframe *)(VAR_19);
   FUNC_0("%s ", VAR_23->srr1 & VAR_7 ? "user" : "kernel");
   switch (VAR_23->exc) {
   case 144:






    FUNC_0("DSI %s trap @ %#zx by ",
        (VAR_23->cpu.aim.dsisr & VAR_3) ? "write"
        : "read", VAR_23->dar);

    goto print_trap;
   case 148:
    FUNC_0("ALI trap @ %#zx (xSR %#x) ",
        VAR_23->dar, (uint32_t)VAR_23->cpu.aim.dsisr);
    goto print_trap;
   case 139: VAR_22 = "ISI"; break;
   case 136: VAR_22 = "PGM"; break;
   case 133: VAR_22 = "SC"; break;
   case 143: VAR_22 = "EXI"; break;
   case 138: VAR_22 = "MCHK"; break;
   case 129: VAR_22 = "VEC"; break;

   case 142: VAR_22 = "FPA"; break;
   case 147: VAR_22 = "BPT"; break;
   case 130: VAR_22 = "TRC"; break;
   case 134: VAR_22 = "RUNMODETRC"; break;
   case 132: VAR_22 = "SMI"; break;
   case 135: VAR_22 = "RST"; break;

   case 141: VAR_22 = "FPU"; break;
   case 146: VAR_22 = "DECR"; break;
   case 137: VAR_22 = "PERF"; break;
   case 128: VAR_22 = "VSX"; break;
   case 131: VAR_22 = "SOFT_PATCH"; break;
   default: VAR_22 = ((void*)0); break;
   }
   if (VAR_22 != ((void*)0)) {
    FUNC_0("%s trap by ", VAR_22);
   } else {
    FUNC_0("trap %#zx by ", VAR_23->exc);
   }

     print_trap:
   VAR_18 = (db_addr_t) VAR_23->srr0;
   FUNC_1(VAR_18, VAR_1);
   FUNC_0(": srr1=%#zx\n", VAR_23->srr1);
   FUNC_0("%-10s  r1=%#zx cr=%#x xer=%#x ctr=%#zx",
       "", VAR_23->fixreg[1], (uint32_t)VAR_23->cr,
       (uint32_t)VAR_23->xer, VAR_23->ctr);



   if (VAR_23->exc == 144)
    FUNC_0(" sr=%#x",
        (uint32_t)VAR_23->cpu.aim.dsisr);
   FUNC_0(" frame=%p\n", VAR_23);
   VAR_17 = (db_addr_t) VAR_23->fixreg[1];
   if (VAR_20 && (VAR_23->srr1 & VAR_7))
    break;
   goto next_frame;
  }

  FUNC_0("at ");
  FUNC_1(VAR_18, VAR_2);
  if (VAR_21)

   FUNC_0("(%zx, %zx, %zx, %zx, %zx, %zx, %zx, %zx)",
    VAR_19[0], VAR_19[1], VAR_19[2], VAR_19[3],
    VAR_19[4], VAR_19[5], VAR_19[6], VAR_19[7]);
  FUNC_0("\n");
 }

 return (0);
}
