
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clocksource {int dummy; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u64 FUNC_4(struct clocksource *VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4, VAR_5;

 FUNC_2(VAR_3);
 do {
  VAR_5 = FUNC_3(VAR_1 + FUNC_0(1, VAR_0));
  VAR_4 = FUNC_3(VAR_1 + FUNC_0(0, VAR_0));
 } while (VAR_5 != FUNC_3(VAR_1 + FUNC_0(1, VAR_0)));

 FUNC_1(VAR_3);
 return (VAR_5 << 16) | VAR_4;
}
