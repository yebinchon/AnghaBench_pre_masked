
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct clocksource {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static u64 FUNC_4(struct clocksource *VAR_5)
{
 int VAR_6 = FUNC_1(10);
 FUNC_3(3, VAR_4 + VAR_3);
 while ((FUNC_2((VAR_4 + VAR_0)) & VAR_1)
      && --VAR_6)
  FUNC_0();
 return FUNC_2(VAR_4 + VAR_2);
}
