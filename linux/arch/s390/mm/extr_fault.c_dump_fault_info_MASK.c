
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int int_parm_long; } ;
struct gmap {unsigned long asce; } ;
struct TYPE_2__ {unsigned long user_asce; unsigned long vdso_asce; unsigned long kernel_asce; scalar_t__ gmap; } ;




 TYPE_1__ VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct pt_regs *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2("Failing address: %016lx TEID: %016lx\n",
   VAR_2->int_parm_long & VAR_1, VAR_2->int_parm_long);
 FUNC_2("Fault in ");
 switch (VAR_2->int_parm_long & 3) {
 case 3:
  FUNC_3("home space ");
  break;
 case 2:
  FUNC_3("secondary space ");
  break;
 case 1:
  FUNC_3("access register ");
  break;
 case 0:
  FUNC_3("primary space ");
  break;
 }
 FUNC_3("mode while using ");
 switch (FUNC_1(VAR_2)) {
 case 129:
  VAR_3 = VAR_0.user_asce;
  FUNC_3("user ");
  break;
 case 128:
  VAR_3 = VAR_0.vdso_asce;
  FUNC_3("vdso ");
  break;
 case 131:
  VAR_3 = ((struct gmap *) VAR_0.gmap)->asce;
  FUNC_3("gmap ");
  break;
 case 130:
  VAR_3 = VAR_0.kernel_asce;
  FUNC_3("kernel ");
  break;
 default:
  FUNC_4();
 }
 FUNC_3("ASCE.\n");
 FUNC_0(VAR_3, VAR_2->int_parm_long & VAR_1);
}
