
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ x86_vendor; int x86; int x86_model; } ;





 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static u64 FUNC_0(void)
{
 if (VAR_1.x86_vendor != VAR_0 ||
     VAR_1.x86 != 6)
  return 0;

 switch (VAR_1.x86_model) {
 case 128:
  return 0xF;
 case 130:
 case 129:
  return 0x5;
 }

 return 0;
}
