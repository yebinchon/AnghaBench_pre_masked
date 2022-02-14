
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static void FUNC_6(int VAR_4)
{

 if (!FUNC_4(VAR_0))
  return;

 if (VAR_4 == 0) {
  VAR_2 = FUNC_0();
  FUNC_5("CPU0: L2CR is %lx\n", VAR_2);
 } else {
  FUNC_5("CPU%d: L2CR was %lx\n", VAR_4, FUNC_0());
  FUNC_2(0);
  FUNC_2(VAR_2);
  FUNC_5("CPU%d: L2CR set to %lx\n", VAR_4, VAR_2);
 }

 if (!FUNC_4(VAR_1))
  return;

 if (VAR_4 == 0){
  VAR_3 = FUNC_1();
  FUNC_5("CPU0: L3CR is %lx\n", VAR_3);
 } else {
  FUNC_5("CPU%d: L3CR was %lx\n", VAR_4, FUNC_1());
  FUNC_3(0);
  FUNC_3(VAR_3);
  FUNC_5("CPU%d: L3CR set to %lx\n", VAR_4, VAR_3);
 }

}
