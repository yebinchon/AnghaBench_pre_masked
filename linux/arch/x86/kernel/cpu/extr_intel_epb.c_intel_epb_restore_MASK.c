
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(void)
{
 u64 VAR_5 = FUNC_2(VAR_4);
 u64 VAR_6;

 FUNC_1(VAR_3, VAR_6);
 if (VAR_5) {
  VAR_5 &= VAR_2;
 } else {







  VAR_5 = VAR_6 & VAR_2;
  if (VAR_5 == VAR_1) {
   VAR_5 = VAR_0;
   FUNC_0("ENERGY_PERF_BIAS: Set to 'normal', was 'performance'\n");
  }
 }
 FUNC_3(VAR_3, (VAR_6 & ~VAR_2) | VAR_5);
}
