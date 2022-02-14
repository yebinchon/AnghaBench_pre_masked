
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_hw_sf {int flags; int qsi; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpu_hw_sf*) ;
 int FUNC_1 (int ,int,char*,struct cpu_hw_sf*) ;
 int FUNC_2 (struct cpu_hw_sf*,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_3 ;
 struct cpu_hw_sf* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void *VAR_4)
{
 int VAR_5;
 struct cpu_hw_sf *VAR_6 = FUNC_6(&VAR_2);

 VAR_5 = 0;
 switch (*((int *) VAR_4)) {
 case 129:
  FUNC_2(VAR_6, 0, sizeof(*VAR_6));
  VAR_5 = FUNC_4(&VAR_6->qsi);
  if (VAR_5)
   break;
  VAR_6->flags |= VAR_1;
  VAR_5 = FUNC_5();
  if (VAR_5)
   FUNC_3("Switching off the sampling facility failed "
          "with rc=%i\n", VAR_5);
  FUNC_1(VAR_3, 5,
        "setup_pmc_cpu: initialized: cpuhw=%p\n", VAR_6);
  break;
 case 128:
  VAR_6->flags &= ~VAR_1;
  VAR_5 = FUNC_5();
  if (VAR_5) {
   FUNC_3("Switching off the sampling facility failed "
          "with rc=%i\n", VAR_5);
  } else
   FUNC_0(VAR_6);
  FUNC_1(VAR_3, 5,
        "setup_pmc_cpu: released: cpuhw=%p\n", VAR_6);
  break;
 }
 if (VAR_5)
  *((int *) VAR_4) |= VAR_0;
}
