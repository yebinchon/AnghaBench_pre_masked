
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {unsigned int clock_tick; } ;


 TYPE_1__ FUNC_0 () ;

__attribute__((used)) static u64 FUNC_1(unsigned int VAR_0)
{
 u32 VAR_1 = FUNC_0().clock_tick / (VAR_0 << 2);

 return ((u64)((0 - VAR_1) & 0xffffffff)) << 32;
}
