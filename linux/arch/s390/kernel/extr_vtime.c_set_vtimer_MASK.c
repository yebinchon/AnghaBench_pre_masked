
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ last_update_timer; int system_timer; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(u64 VAR_1)
{
 u64 VAR_2;

 asm volatile(
  "	stpt	%0\n"
  "	spt	%1"
  : "=Q" (VAR_2) : "Q" (VAR_1));
 VAR_0.system_timer += VAR_0.last_update_timer - VAR_2;
 VAR_0.last_update_timer = VAR_1;
}
