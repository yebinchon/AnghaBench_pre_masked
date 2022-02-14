
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int x86_stepping; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(void)
{
 switch (VAR_0.x86_stepping) {
 case 0x02: return 0x3a;
 case 0x04: return 0x0f;
 }

 return ~0U;
}
