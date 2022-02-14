
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct clocksource {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static u64 FUNC_2(struct clocksource *VAR_1)
{
 return ~((FUNC_1(VAR_0 + FUNC_0(1))
   & 0xffff0000) >> 16);
}
