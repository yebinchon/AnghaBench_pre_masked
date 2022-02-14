
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int __u8 ;
struct TYPE_2__ {int family; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static char *FUNC_0(void)
{
 __u8 VAR_1 = VAR_0->family;

 switch (VAR_1) {
  case 0x07:
   return "ia64/itanium";
  case 0x1f:
   return "ia64/itanium2";
  default:
   return "ia64/ia64";
 }
}
