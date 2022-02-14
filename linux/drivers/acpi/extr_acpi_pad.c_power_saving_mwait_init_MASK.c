
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cpuid_level; int x86_vendor; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 TYPE_1__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 unsigned int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14 = 0;
 unsigned int VAR_15 = 0;
 int VAR_16;

 if (!FUNC_0(VAR_5))
  return;
 if (VAR_7.cpuid_level < VAR_2)
  return;

 FUNC_1(VAR_2, &VAR_10, &VAR_11, &VAR_12, &VAR_13);

 if (!(VAR_12 & VAR_0) ||
     !(VAR_12 & VAR_1))
  return;

 VAR_13 >>= VAR_4;
 for (VAR_16 = 0; VAR_16 < 7 && VAR_13; VAR_16++, VAR_13 >>= VAR_4) {
  if (VAR_13 & VAR_3) {
   VAR_14 = VAR_16;
   VAR_15 = VAR_13 & VAR_3;
  }
 }
 VAR_8 = (VAR_14 << VAR_4) |
  (VAR_15 - 1);
}
