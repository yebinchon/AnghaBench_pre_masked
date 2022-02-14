
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct cpufreq_policy *VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 static unsigned long VAR_10;

 if (VAR_8 == VAR_1 &&
     FUNC_2(VAR_2)) {
  VAR_9 = FUNC_0();
  if (VAR_9 & VAR_3) {
   VAR_10 = VAR_9;
   FUNC_1(0);
  }
 }
 FUNC_3(VAR_8 == VAR_1);
 if (VAR_8 == VAR_0 &&
     FUNC_2(VAR_2)) {
  VAR_9 = FUNC_0();
  if ((VAR_10 & VAR_3) && VAR_9 != VAR_10)
   FUNC_1(VAR_10);
 }
 VAR_4 = (VAR_8 == VAR_0) ? VAR_5 : VAR_6;

 return 0;
}
