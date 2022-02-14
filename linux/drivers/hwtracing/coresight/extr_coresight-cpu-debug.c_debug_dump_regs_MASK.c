
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct debug_drvdata {int edprsr; scalar_t__ edpcsr; int edvidsr; scalar_t__ edvidsr_present; int edcidsr; scalar_t__ edcidsr_present; struct device* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct debug_drvdata*) ;
 unsigned long FUNC_1 (struct debug_drvdata*) ;
 int FUNC_2 (struct device*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct debug_drvdata *VAR_8)
{
 struct device *VAR_9 = VAR_8->dev;
 unsigned long VAR_10;

 FUNC_2(VAR_9, " EDPRSR:  %08x (Power:%s DLK:%s)\n",
    VAR_8->edprsr,
    VAR_8->edprsr & VAR_2 ? "On" : "Off",
    VAR_8->edprsr & VAR_1 ? "Lock" : "Unlock");

 if (!FUNC_0(VAR_8)) {
  FUNC_2(VAR_9, "No permission to access debug registers!\n");
  return;
 }

 if (VAR_8->edpcsr == VAR_0) {
  FUNC_2(VAR_9, "CPU is in Debug state or profiling is prohibited!\n");
  return;
 }

 VAR_10 = FUNC_1(VAR_8);
 FUNC_2(VAR_9, " EDPCSR:  %pS\n", (void *)VAR_10);

 if (VAR_8->edcidsr_present)
  FUNC_2(VAR_9, " EDCIDSR: %08x\n", VAR_8->edcidsr);

 if (VAR_8->edvidsr_present)
  FUNC_2(VAR_9, " EDVIDSR: %08x (State:%s Mode:%s Width:%dbits VMID:%x)\n",
     VAR_8->edvidsr,
     VAR_8->edvidsr & VAR_6 ?
     "Non-secure" : "Secure",
     VAR_8->edvidsr & VAR_4 ? "EL3" :
    (VAR_8->edvidsr & VAR_3 ?
     "EL2" : "EL1/0"),
     VAR_8->edvidsr & VAR_5 ? 64 : 32,
     VAR_8->edvidsr & (u32)VAR_7);
}
