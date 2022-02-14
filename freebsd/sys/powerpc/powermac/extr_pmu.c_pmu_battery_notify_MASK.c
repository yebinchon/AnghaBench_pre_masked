
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_battstate {int state; } ;
typedef int notify_buf ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct pmu_battstate *VAR_1, struct pmu_battstate *VAR_2)
{
 char VAR_3[16];
 int VAR_4, VAR_5;

 VAR_4 = (VAR_1->state & VAR_0) ? 1 : 0;
 VAR_5 = (VAR_2->state & VAR_0) ? 1 : 0;

 if (VAR_4 != VAR_5) {
  FUNC_1(VAR_3, sizeof(VAR_3),
      "notify=0x%02x", VAR_4);
  FUNC_0("PMU", "POWER", "ACLINE", VAR_3);
 }
}
